# 📚 Operating System — Day-Wise Learning Plan
### Course Code: CACS251 | Year/Semester: II/IV | Credit: 3 Hrs

---

## 📋 Course Overview

| Detail | Info |
|---|---|
| **Course Title** | Operating System |
| **Course Code** | CACS251 |
| **Year / Semester** | II / IV |
| **Class Load** | 6 Hrs/Week |
| **Theory** | 3 Hrs/Week |
| **Tutorial** | 1 Hr/Week |
| **Practical** | 2 Hrs/Week |
| **Total Weeks** | ~16 Weeks |

---

## 🗓️ Weekly Schedule Structure

> Each week follows this pattern:

| Day | Session | Duration |
|---|---|---|
| Monday | Theory Lecture | 1 Hr |
| Wednesday | Theory Lecture | 1 Hr |
| Friday | Theory Lecture | 1 Hr |
| Thursday | Tutorial / Problem Solving | 1 Hr |
| Saturday | Lab / Practical | 2 Hrs |

---

## 📅 Week-by-Week Day-Wise Plan

---

### 🟦 WEEK 1 — Introduction to Operating System (Unit 1)

| Day | Topic | Type |
|---|---|---|
| **Day 1 – Mon** | Course introduction, Syllabus overview, What is an OS? History of OS (1st & 2nd Generation) | Theory |
| **Day 2 – Wed** | Generation of OS (3rd & 4th Generation), Objectives of OS (Resource Manager & Extended Machine) | Theory |
| **Day 3 – Fri** | Types of Operating Systems: Batch, Time-Sharing, Real-Time, Distributed, Embedded | Theory |
| **Day 4 – Thu** | Tutorial: Q&A on History, Objectives, and Types of OS; Past paper questions | Tutorial |
| **Day 5 – Sat** | Lab 1: Introduction to Linux Terminal — Basic commands (`ls`, `pwd`, `cd`, `mkdir`, `rm`) | Practical |

---

### 🟦 WEEK 2 — OS Structure (Unit 2)

| Day | Topic | Type |
|---|---|---|
| **Day 6 – Mon** | OS Structure Introduction, Layered System, Monolithic Kernel | Theory |
| **Day 7 – Wed** | Types of Kernel: Monolithic vs Micro-Kernel vs Exo-Kernel | Theory |
| **Day 8 – Fri** | Client-Server Model, Virtual Machines, Shell | Theory |
| **Day 9 – Thu** | Tutorial: Compare Kernel types; Short notes on Virtual Machines & Client-Server | Tutorial |
| **Day 10 – Sat** | Lab 2: Explore OS structure — `uname`, `top`, `ps`, `kill`; Shell scripting basics | Practical |

---

### 🟧 WEEK 3 — Process Management: Process Concepts (Unit 3 – Part 1)

| Day | Topic | Type |
|---|---|---|
| **Day 11 – Mon** | Definition of Process, Process Model, Process States (New, Ready, Running, Waiting, Terminated) | Theory |
| **Day 12 – Wed** | Process State Transition Diagram, Process Control Block (PCB) | Theory |
| **Day 13 – Fri** | Process Creation, Termination, Process Hierarchies, Process Implementation | Theory |
| **Day 14 – Thu** | Tutorial: Draw and explain state transition diagrams; PCB structure problems | Tutorial |
| **Day 15 – Sat** | Lab 3: Process management in Linux — `fork()`, `exec()`, `wait()` in C; `ps aux`, `pstree` | Practical |

---

### 🟧 WEEK 4 — Threads & System Calls (Unit 3 – Part 2)

| Day | Topic | Type |
|---|---|---|
| **Day 16 – Mon** | Threads: Definition, Types of Threads (User-Level vs Kernel-Level), Multithreaded Process | Theory |
| **Day 17 – Wed** | Benefits of Multithreading, Multithreading Models: Many-to-One, One-to-One, Many-to-Many | Theory |
| **Day 18 – Fri** | System Calls: Process Management, File Management, I/O Management | Theory |
| **Day 19 – Thu** | Tutorial: Thread vs Process comparison; Multithreading model diagrams | Tutorial |
| **Day 20 – Sat** | Lab 4: Thread programming in C using `pthread_create`, `pthread_join`; System call demos | Practical |

---

### 🟧 WEEK 5 — Inter-Process Communication & Synchronization (Unit 3 – Part 3)

| Day | Topic | Type |
|---|---|---|
| **Day 21 – Mon** | Race Conditions, Critical Regions, Mutual Exclusion — Introduction | Theory |
| **Day 22 – Wed** | Mutual Exclusion Proposals: Disabling Interrupts, Lock Variables, Strict Alternation, Peterson's Solution | Theory |
| **Day 23 – Fri** | TSL Instruction, Sleep and Wakeup, Semaphores (Binary & Counting) | Theory |
| **Day 24 – Thu** | Tutorial: Peterson's Solution walkthrough, Semaphore problems | Tutorial |
| **Day 25 – Sat** | Lab 5: Simulate Race Condition and Mutex Lock in C using `pthread_mutex_t` | Practical |

---

### 🟧 WEEK 6 — Classic Synchronization Problems & Scheduling (Unit 3 – Part 4)

| Day | Topic | Type |
|---|---|---|
| **Day 26 – Mon** | Monitors, Message Passing, Bounded Buffer Problem; Serializability: Locking Protocols & Timestamp | Theory |
| **Day 27 – Wed** | Classic Problems: Dining Philosophers Problem, Readers and Writers Problem | Theory |
| **Day 28 – Fri** | Sleeping Barber's Problem; Process Scheduling: Basic Concepts, Types (Preemptive, Non-preemptive, Batch, Interactive, Real-Time) | Theory |
| **Day 29 – Thu** | Tutorial: Solve Dining Philosophers and Readers-Writers with Semaphores | Tutorial |
| **Day 30 – Sat** | Lab 6: Implement Producer-Consumer problem using semaphores in C | Practical |

---

### 🟧 WEEK 7 — Scheduling Algorithms (Unit 3 – Part 5)

| Day | Topic | Type |
|---|---|---|
| **Day 31 – Mon** | Scheduling Criteria / Performance Metrics; FCFS and Round-Robin Scheduling with examples | Theory |
| **Day 32 – Wed** | SJF, SPN, SRTF Scheduling; Priority Scheduling, Fair Share, Lottery Scheduling | Theory |
| **Day 33 – Fri** | HRN, Multiple Queue, Multilevel Feedback Queue; Real-Time Scheduling | Theory |
| **Day 34 – Thu** | Tutorial: Numerical Problems — FCFS, Round-Robin, SJF, SRTF with Gantt Charts | Tutorial |
| **Day 35 – Sat** | Lab 7: Implement FCFS and Round-Robin Scheduling in C; Calculate Waiting Time & TAT | Practical |

---

### 🟥 WEEK 8 — Deadlocks (Unit 4)

| Day | Topic | Type |
|---|---|---|
| **Day 36 – Mon** | System Model, Preemptable vs Non-Preemptable Resources, Conditions for Deadlock | Theory |
| **Day 37 – Wed** | Deadlock Modeling, Resource Allocation Graph, Ostrich Algorithm, Methods of Handling Deadlocks | Theory |
| **Day 38 – Fri** | Deadlock Prevention, Deadlock Avoidance: Banker's Algorithm with examples | Theory |
| **Day 39 – Thu** | Tutorial: Banker's Algorithm numerical problems; Safe/Unsafe state determination | Tutorial |
| **Day 40 – Sat** | Lab 8: Simulate Banker's Algorithm in C; Draw resource allocation graphs | Practical |

---

### 🟩 WEEK 9 — Basic Memory Management (Unit 5 – Part 1)

| Day | Topic | Type |
|---|---|---|
| **Day 41 – Mon** | Introduction to Memory Management, Memory Hierarchy, Logical vs Physical Address Space | Theory |
| **Day 42 – Wed** | Memory Management with Swapping, Bitmaps, Linked Lists; Memory without Swapping | Theory |
| **Day 43 – Fri** | Contiguous Allocation: Memory Protection, Allocation, Internal & External Fragmentation | Theory |
| **Day 44 – Thu** | Tutorial: Fixed vs Variable Partitioning; Coalescing and Compaction problems | Tutorial |
| **Day 45 – Sat** | Lab 9: Simulate memory allocation strategies (First Fit, Best Fit, Worst Fit) in C | Practical |

---

### 🟩 WEEK 10 — Virtual Memory (Unit 5 – Part 2)

| Day | Topic | Type |
|---|---|---|
| **Day 46 – Mon** | Background of Virtual Memory, Paging, Structure of Page Table: Hierarchical, Hashed, Inverted, Shared | Theory |
| **Day 47 – Wed** | Block Mapping vs Direct Mapping, Demand Paging, Page Faults, Page Replacement | Theory |
| **Day 48 – Fri** | Page Replacement Algorithms: FIFO, OPR (Optimal), LRU, Second Chance (SCP); Thrashing | Theory |
| **Day 49 – Thu** | Tutorial: Numerical problems on FIFO, OPR, LRU Page Replacement | Tutorial |
| **Day 50 – Sat** | Lab 10: Implement FIFO and LRU Page Replacement algorithms in C | Practical |

---

### 🟨 WEEK 11 — Segmentation & I/O Device Management (Unit 5 + Unit 6 – Part 1)

| Day | Topic | Type |
|---|---|---|
| **Day 51 – Mon** | Segmentation, Segmentation with Paging | Theory |
| **Day 52 – Wed** | Principle of I/O Hardware: I/O Devices, Device Controllers, Memory-Mapped I/O, DMA | Theory |
| **Day 53 – Fri** | Principle of I/O Software: Goals, Programmed I/O, Interrupt-Driven I/O, DMA-based I/O | Theory |
| **Day 54 – Thu** | Tutorial: Compare I/O techniques; DMA vs Interrupt-Driven I/O | Tutorial |
| **Day 55 – Sat** | Lab 11: I/O simulation and file read/write using system calls in C (`read`, `write`, `open`, `close`) | Practical |

---

### 🟨 WEEK 12 — I/O Software Layers & Disk Scheduling (Unit 6 – Part 2)

| Day | Topic | Type |
|---|---|---|
| **Day 56 – Mon** | I/O Software Layers: Interrupt Handler, Device Drivers, Device-Independent Software, User-Space I/O | Theory |
| **Day 57 – Wed** | Disk Hardware, Disk Scheduling: Seek Time, Rotational Delay, Transfer Time | Theory |
| **Day 58 – Fri** | Disk Scheduling Algorithms: FCFS, SSTF, SCAN, C-SCAN, LOOK; Numerical Examples | Theory |
| **Day 59 – Thu** | Tutorial: Disk scheduling numerical problems with head movement calculation | Tutorial |
| **Day 60 – Sat** | Lab 12: Implement FCFS and SSTF Disk Scheduling in C | Practical |

---

### 🟪 WEEK 13 — File System Interface & Security (Unit 7 + Unit 8)

| Day | Topic | Type |
|---|---|---|
| **Day 61 – Mon** | File System: File Naming, File Structure, File Types, File Attributes, File Operations, File Descriptors | Theory |
| **Day 62 – Wed** | Directory Systems: Single-Level, Two-Level, Tree-Structured; Directory Operations, Access Methods | Theory |
| **Day 63 – Fri** | Security Management: Security Problems, User Authentication (Passwords, Encrypted, OTP, Biometrics) | Theory |
| **Day 64 – Thu** | Tutorial: File Access Control Matrix; User Authorization concepts | Tutorial |
| **Day 65 – Sat** | Lab 13: File operations in Linux — `chmod`, `chown`, `ls -l`, `stat`; User management commands | Practical |

---

### 🟪 WEEK 14 — Security Threats & Distributed OS (Unit 8 + Unit 9)

| Day | Topic | Type |
|---|---|---|
| **Day 66 – Mon** | Program Threats: Trojan Horse, Trap Door, Stack & Buffer Overflow; System Threats: Worms, Viruses, DoS | Theory |
| **Day 67 – Wed** | Distributed OS: Introduction, Advantages over Centralized Systems and Independent PCs, Disadvantages | Theory |
| **Day 68 – Fri** | Hardware & Software Concepts in Distributed Systems, Communication, Message Passing, RPC | Theory |
| **Day 69 – Thu** | Tutorial: Distributed system comparison; Clock Synchronization concepts | Tutorial |
| **Day 70 – Sat** | Lab 14: Explore network commands — `ping`, `netstat`, `ssh`, `scp`; Simple socket programming in C | Practical |

---

### 🟫 WEEK 15 — Case Study & Revision (Unit 10)

| Day | Topic | Type |
|---|---|---|
| **Day 71 – Mon** | Case Study: DOS and Windows Operating System — History, Architecture, Features | Theory |
| **Day 72 – Wed** | Case Study: Unix & Linux Operating System — Architecture, Shell, File System | Theory |
| **Day 73 – Fri** | Full Course Revision: Units 1–5 Key Concepts Summary | Theory |
| **Day 74 – Thu** | Tutorial: Full revision — Units 6–10; Past questions discussion | Tutorial |
| **Day 75 – Sat** | Lab 15: Mini-project demo (Part 1) — OS concept implementation (scheduling / memory simulation) | Practical |

---

### 🟫 WEEK 16 — Project Submission & Final Preparation

| Day | Topic | Type |
|---|---|---|
| **Day 76 – Mon** | Full Course Revision: Critical numericals — Scheduling, Banker's Algorithm, Page Replacement, Disk Scheduling | Theory |
| **Day 77 – Wed** | Mock Exam / Q&A session covering all units | Theory |
| **Day 78 – Fri** | Final tips, exam strategies, model paper discussion | Theory |
| **Day 79 – Thu** | Tutorial: Final viva preparation; past exam Q&A | Tutorial |
| **Day 80 – Sat** | Lab 16: Mini-project final submission and viva | Practical |

---

## 🔬 Laboratory Works Summary

| Lab No. | Topic |
|---|---|
| Lab 1 | Linux basic commands and file system navigation |
| Lab 2 | OS structure exploration — kernel, shell, process commands |
| Lab 3 | Process management — `fork()`, `exec()`, `wait()` in C |
| Lab 4 | Thread programming using POSIX threads (`pthread`) |
| Lab 5 | Race condition simulation and mutex lock implementation |
| Lab 6 | Producer-Consumer problem using semaphores |
| Lab 7 | CPU Scheduling: FCFS and Round-Robin in C |
| Lab 8 | Banker's Algorithm simulation in C |
| Lab 9 | Memory allocation strategies: First Fit, Best Fit, Worst Fit |
| Lab 10 | Page Replacement: FIFO and LRU algorithms |
| Lab 11 | File I/O using system calls in C |
| Lab 12 | Disk Scheduling: FCFS and SSTF in C |
| Lab 13 | Linux file permissions and user management |
| Lab 14 | Network commands and socket programming |
| Lab 15 | Mini Project: Part 1 Demo |
| Lab 16 | Mini Project: Final Submission & Viva |

---

## 📝 Project Work

- **Type:** Individual Project
- **Topic Ideas:**
  - CPU Scheduler Simulator (visual Gantt chart)
  - Memory Management Simulator (paging/segmentation)
  - Banker's Algorithm Interactive Tool
  - Disk Scheduling Visualizer
  - Producer-Consumer IPC Simulator
- **Deliverables:** Source Code + Report + Viva

---

## 📊 Unit-wise Hour Distribution

| Unit | Title | Theory Hrs | Tutorial Hrs | Lab Hrs | Total |
|---|---|---|---|---|---|
| 1 | Introduction to OS | 3 | 1 | 2 | 6 |
| 2 | OS Structure | 3 | 1 | 2 | 6 |
| 3 | Process Management | 15 | 4 | 8 | 27 |
| 4 | Deadlocks | 4 | 1 | 2 | 7 |
| 5 | Memory Management | 7 | 2 | 4 | 13 |
| 6 | I/O Device Management | 4 | 1 | 2 | 7 |
| 7 | File System Interface | 2 | 1 | 2 | 5 |
| 8 | Security Management | 3 | 1 | 2 | 6 |
| 9 | Distributed OS | 4 | 1 | 2 | 7 |
| 10 | Case Study | 2 | 1 | 2 | 5 |
| — | **Total** | **47** | **13** | **28** | **88** |

---

## 📖 Recommended References

1. **Tanenbaum, A. S.** — *Modern Operating Systems* (4th Ed.), Pearson
2. **Silberschatz, A., Galvin, P. B., Gagne, G.** — *Operating System Concepts* (10th Ed.), Wiley
3. **Stallings, W.** — *Operating Systems: Internals and Design Principles*, Pearson
4. **Dhamdhere, D. M.** — *Operating Systems: A Concept-Based Approach*, TMH

---

## 🎯 Assessment Plan

| Component | Marks |
|---|---|
| Internal Assessment (Assignments + Tutorials) | 20% |
| Practical / Lab + Project | 30% |
| Final Theory Examination | 50% |

---

> **Note:** This day-wise plan is designed for a 16-week semester with 6 contact hours per week. The schedule may be adjusted based on institutional calendar, holidays, and examination dates. Always consult your course instructor for official scheduling.

---

*Last Updated: 2025 | CACS251 — Operating System | BCA Program*