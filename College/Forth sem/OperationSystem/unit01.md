# 🖥️ Day 1 — Introduction to Operating System
### CACS251 | Unit 1 | Week 1 | Monday

---

## 📋 Table of Contents

- [What is an Operating System?](#1-what-is-an-operating-system)
- [Why Do We Need an OS?](#2-why-do-we-need-an-os)
- [History & Generations of OS](#3-history--generations-of-operating-systems)
  - [Generation 0 — Before OS](#️-generation-0--before-os-1940s)
  - [1st Generation — Vacuum Tubes](#-1st-generation--vacuum-tubes-19451955)
  - [2nd Generation — Transistors & Batch Systems](#-2nd-generation--transistors--batch-systems-19551965)
- [Key Terms](#4-key-terms-to-remember)
- [Summary Table](#5-summary-table--generations-1--2)
- [Review Questions](#-quick-review-questions)

---

## 1. What is an Operating System?

An **Operating System (OS)** is system software that acts as an **intermediary between the user and computer hardware**. It manages hardware resources and provides services for application programs.

### System Layer Diagram

```
┌─────────────────────────┐
│      User / Apps        │  ← You use this layer
├─────────────────────────┤
│   Operating System      │  ← OS sits in the middle
├─────────────────────────┤
│      Hardware           │  ← CPU, RAM, Disk, I/O
└─────────────────────────┘
```

### Simple Definition

> *"An OS is a program that controls the execution of application programs and acts as an interface between the user and the computer hardware."*

### 🏨 Real-life Analogy

Think of the OS as a **hotel manager**:

| Role | Maps To |
|---|---|
| 🏨 The **hotel** | Computer hardware (rooms, kitchen, electricity) |
| 🧑‍💼 The **guests** | Application programs (Word, Chrome, games) |
| 👔 The **manager (OS)** | Allocates rooms (memory), manages resources, handles requests |

---

## 2. Why Do We Need an OS?

Without an OS, you would have to:
- Write machine code to talk directly to hardware
- Manage memory yourself for every program
- Handle all input/output operations manually
- Ensure programs don't crash each other

> The OS handles all of this **automatically**, so developers can focus on building applications.

### Core Functions of an OS

| Function | What It Does |
|---|---|
| 🔄 **Process Management** | Runs, pauses, and switches between programs |
| 🧠 **Memory Management** | Allocates / deallocates RAM to programs |
| 📁 **File System Management** | Organizes data on disk into files & folders |
| ⌨️ **I/O Management** | Controls keyboard, mouse, display, printer |
| 🔒 **Security & Protection** | Controls who can access what |
| ⚠️ **Error Detection** | Detects and handles hardware/software errors |

---

## 3. History & Generations of Operating Systems

> The evolution of OS is divided into **4 generations**, each tied to advances in hardware technology.

---

### 🕰️ Generation 0 — Before OS (1940s)

- Computers like **ENIAC** had **no operating system** at all
- Programs were entered using **physical plug boards and switches**
- Only one person used the machine at a time
- No distinction between user and programmer — they were the same person
- Extremely slow, error-prone, and expensive to operate

#### Workflow

```
Programmer → Physical wiring/switches → Machine runs → Output printed
```

---

### 🟦 1st Generation — Vacuum Tubes (1945–1955)

#### Hardware

- Computers were built using **vacuum tubes** (large glass bulbs that control electric current)
- Machines were **enormous** (filled entire rooms), **fragile**, and generated massive heat
- Examples: **ENIAC**, **UNIVAC I**, **IBM 701**

#### How They Worked

- Programs were written in **machine language** (binary: 0s and 1s) or **assembly language**
- Input was done via **punched cards** or **punched paper tape**
- Output came via **line printers**
- There was still **no operating system** — each job was set up manually

#### Problems

| Problem | Description |
|---|---|
| ⏳ **Slow setup** | Each job required physical rewiring or card loading |
| 💤 **Wasted CPU time** | CPU sat idle while humans loaded the next job |
| 👤 **Single user** | Only one job could run; no multitasking |
| ❌ **No protection** | Any bug could crash the whole machine |
| 💰 **Expensive** | Only governments and large universities could afford them |

#### Key Takeaway

> ⚠️ No OS existed. The programmer was also the operator. CPU was idle most of the time due to slow human job setup.

---

### 🟩 2nd Generation — Transistors & Batch Systems (1955–1965)

#### Hardware

- Vacuum tubes replaced by **transistors** — smaller, faster, more reliable, and cheaper
- Computers became more accessible to businesses and universities
- Examples: **IBM 7090**, **IBM 1401**, **CDC 1604**

---

#### 💡 The Birth of the OS — Batch Processing

The biggest innovation of this era was **Batch Processing** — the first true form of an operating system.

##### How Batch Processing Worked

```
Step 1: Programmers submit jobs (on punched cards) to operators
         ↓
Step 2: Operators collect many jobs into a BATCH
         ↓
Step 3: Batch loaded onto magnetic tape by a small computer (IBM 1401)
         ↓
Step 4: Large mainframe (IBM 7090) reads tape and runs jobs one by one
         ↓
Step 5: Output written to another tape
         ↓
Step 6: Output tape printed by IBM 1401 offline
```

##### System Flow Diagram

```
[Punched Cards]
      ↓
[IBM 1401] ──→ [Input Tape]
                    ↓
               [IBM 7090] ──→ [Output Tape]
                                    ↓
                              [IBM 1401] ──→ [Printed Output]
```

---

#### 🖥️ Key Software — The Resident Monitor

- A small **resident monitor** (forerunner of the modern OS) stayed in memory
- It automatically loaded the next job when the current one finished
- Jobs included **control cards** to tell the monitor what to do

##### Example Job Deck

```
$JOB         ← Start of job
$FORTRAN     ← Compile the Fortran program
(source code)
$LOAD        ← Load the compiled program
$RUN         ← Execute the program
(data)
$END         ← End of job
```

---

#### Improvements Over 1st Generation

| Feature | 1st Generation | 2nd Generation |
|---|---|---|
| Hardware | Vacuum tubes | Transistors |
| Job setup | Manual (human) | Automatic (batch monitor) |
| CPU idle time | Very high | Reduced |
| Programming language | Machine code only | FORTRAN, COBOL, Assembly |
| Input / Output | Plug boards | Punched cards, Magnetic tape |

---

#### Remaining Problems of Batch Systems

| Problem | Explanation |
|---|---|
| ⏸️ **CPU idle during I/O** | When a job reads from tape (slow), CPU just waits |
| 🚫 **No interactivity** | No real-time feedback; programmer waits hours for output |
| ➡️ **Sequential execution** | Jobs run one at a time — no parallelism |
| 🕐 **Long turnaround time** | Could take a full day to get results |
| 🔓 **No memory protection** | A buggy job could overwrite the monitor and crash everything |

#### Key Takeaway

> ✅ Batch processing reduced human idle time and automated job sequencing. The resident monitor was the **ancestor of all modern operating systems**.

---

## 4. Key Terms to Remember

| Term | Meaning |
|---|---|
| **Vacuum Tube** | Early electronic switch used in 1st-gen computers |
| **Transistor** | Replaced vacuum tubes; smaller, faster, more reliable |
| **Punched Card** | Card with holes representing data / instructions |
| **Magnetic Tape** | Storage medium used in 2nd-gen batch systems |
| **Batch Processing** | Grouping jobs and running them automatically without user interaction |
| **Resident Monitor** | First primitive OS; loaded jobs automatically |
| **Turnaround Time** | Time from job submission to getting output |
| **Offline Processing** | Input/output handled by a separate smaller computer |

---

## 5. Summary Table — Generations 1 & 2

| Feature | 1st Generation (1945–1955) | 2nd Generation (1955–1965) |
|---|---|---|
| **Technology** | Vacuum Tubes | Transistors |
| **OS** | None | Batch Monitor (basic) |
| **Programming** | Machine code | FORTRAN, COBOL, Assembly |
| **Input** | Plug boards, punched cards | Punched cards, magnetic tape |
| **Users** | 1 at a time (manual) | 1 job at a time (automated) |
| **Speed** | Very slow | Faster |
| **Main Problem** | Manual setup, idle CPU | I/O wait, no interaction |
| **Example Machines** | ENIAC, UNIVAC | IBM 7090, IBM 1401 |

---

## 📝 Quick Review Questions

1. Define an Operating System. What are its two main roles?
2. Why was CPU time wasted in 1st generation computers?
3. What is a **batch processing system**? How does it improve over 1st generation?
4. What is a **resident monitor**? Why is it considered the first OS?
5. What were the main **problems** that batch processing could not solve?
6. Draw and explain the **job flow** in a 2nd generation batch system.
7. What hardware change made the 2nd generation possible?

---

## 🔜 Next Class — Day 2

**Topic:** 3rd & 4th Generation OS — Multiprogramming, Time-Sharing, Personal Computers, and the modern OS era.

---

*CACS251 — Operating System | Unit 1: Introduction | BCA II/IV*