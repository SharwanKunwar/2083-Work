# CACS253 – Software Engineering
## Day 1 Lecture Notes | Theory Session
### Topic: Course Introduction, Syllabus Overview; Definition of Software, Types of Software

---

## 📋 Session Information

| Detail | Info |
|---|---|
| **Course Code** | CACS253 |
| **Course Title** | Software Engineering |
| **Session Type** | Theory |
| **Week / Day** | Week 1 – Day 1 (Monday) |
| **Duration** | 1 Hour |
| **Unit** | Unit 1 – Introduction to Software Engineering |

---

## 🎯 Learning Objectives

By the end of this session, students will be able to:

1. Understand the scope, structure, and assessment pattern of the course.
2. Define *software* in precise technical terms.
3. Distinguish between different categories of software with real-world examples.
4. Appreciate why understanding software types is foundational to software engineering practice.

---

## 1. Course Introduction & Syllabus Overview

### 1.1 Why Study Software Engineering?

Software is everywhere — from the operating system booting your laptop to the recommendation engine on YouTube to the embedded firmware controlling a pacemaker. Yet despite decades of progress, software projects still fail at alarming rates: cost overruns, missed deadlines, and systems that simply do not do what users need.

**Software Engineering** is the discipline that addresses this problem. It applies **systematic, disciplined, and quantifiable approaches** to the development, operation, and maintenance of software — just as traditional engineering applies such approaches to physical systems.

> 🗝️ **Key Insight:** Writing code is only a small part of software engineering. Analysis, design, testing, maintenance, documentation, and project management are equally important.

---

### 1.2 Course Snapshot

| Item | Detail |
|---|---|
| **Full Marks** | 100 |
| **Theory (Final Exam)** | 60 marks |
| **Internal Assessment** | 20 marks |
| **Tutorial** | 20 marks |
| **Teaching Hours** | 150 hrs (Theory 60 + Tutorial 30 + Self-study 60) |
| **Exam Duration** | 3 hours |

### 1.3 Unit-wise Overview (Brief)

| Unit | Title | Teaching Hours |
|---|---|---|
| 1 | Introduction to Software Engineering | 8 hrs |
| 2 | Software Process Models | 10 hrs |
| 3 | Requirements Engineering | 8 hrs |
| 4 | Software Design | 10 hrs |
| 5 | Coding and Testing | 10 hrs |
| 6 | Software Maintenance & Quality | 8 hrs |
| 7 | Project Management | 6 hrs |

---

### 1.4 Study Tips for This Course

- This course is **concept-heavy and process-oriented** — understanding *why* each practice exists matters more than memorizing definitions.
- Draw **diagrams** (DFDs, UML, ER diagrams) regularly — exam questions frequently ask for them.
- Relate every topic to a **real software project** you use daily (e.g., Facebook, a banking app, or a hospital system).
- Use comparison tables to distinguish similar concepts (e.g., different process models, verification vs validation).

---

## 2. What is Software?

### 2.1 Common Misconception

Most beginners define software as *"programs written in a programming language."* While programs are part of software, this definition is **incomplete**.

### 2.2 Formal Definition

> **Software** is a collection of:
> 1. **Programs** — executable instructions that perform tasks
> 2. **Data structures** — the data those programs manipulate
> 3. **Documentation** — descriptive material that explains how to install, use, operate, and maintain the programs

This three-part definition is the one used in academic and professional contexts (attributed to **Roger S. Pressman**, a leading authority in Software Engineering).

A simpler expression:

```
Software = Programs + Data + Documentation
```

### 2.3 Software vs Hardware

| Aspect | Hardware | Software |
|---|---|---|
| **Nature** | Physical, tangible | Logical, intangible |
| **Wear** | Wears out over time | Does not wear out (but becomes obsolete) |
| **Manufacturing** | Manufactured (physical production) | Developed (intellectual process) |
| **Failure** | Bathtub curve (early + aging failures) | Flat after debugging |
| **Duplication** | Costly | Nearly free |
| **Custom** | Harder to customize | Highly customizable |

> 🛠️ **Note:** Software does not *wear out*, but it can *deteriorate* — as its environment changes (new OS, new hardware, new user needs), unmaintained software becomes less useful. This is called **software decay** or **software rot**.

### 2.4 Characteristics of Software

1. **Software is developed/engineered, not manufactured** — it requires intellectual effort, not physical assembly lines.
2. **Software does not wear out** — unlike hardware, but it can become outdated.
3. **Software is complex** — it can have millions of logical paths; testing all of them is impossible.
4. **Software is flexible** — it can be changed relatively easily, but this flexibility is also a source of problems (scope creep, uncontrolled changes).
5. **Software is often built on existing software** — modern systems heavily rely on libraries, frameworks, APIs, and OS services.

---

## 3. Types of Software

Software can be classified in several ways. The most widely used classification in academic curricula is by **application domain**. We cover the following seven categories:

---

### 3.1 System Software

**Definition:** Software that provides a platform or environment for other software to run. It manages hardware resources and provides services to application programs.

**Purpose:** Acts as the *bridge* between hardware and application software.

**Examples:**

| Software | Role |
|---|---|
| Operating Systems (Linux, Windows, macOS) | Manages CPU, memory, I/O, processes |
| Device Drivers | Translates OS calls to hardware instructions |
| Compilers & Interpreters | Translates source code to machine code |
| Assemblers, Linkers, Loaders | Low-level program translation and loading |
| Firmware | Software embedded in hardware (BIOS/UEFI) |

**Characteristics:**
- Strong interaction with hardware
- Performance-critical (speed, memory efficiency matter)
- Generally written in low-level languages (C, Assembly)
- Runs continuously in the background

---

### 3.2 Application Software

**Definition:** Software designed to help end-users perform specific tasks. The most common type of software that people interact with daily.

**Purpose:** Solves a specific user problem or supports a specific business process.

**Subcategories and Examples:**

| Subcategory | Examples |
|---|---|
| Word Processors | MS Word, LibreOffice Writer |
| Spreadsheets | MS Excel, Google Sheets |
| Database Applications | MS Access, Tally |
| Educational Software | Khan Academy, Duolingo |
| Entertainment | VLC Media Player, games |
| Productivity Suites | MS Office, Google Workspace |

**Characteristics:**
- User-friendly interfaces
- Domain-specific functionality
- Often developed with rapid application development (RAD) tools
- Runs on top of system software

---

### 3.3 Embedded Software

**Definition:** Software written specifically to control a device that is not a general-purpose computer. It is permanently programmed into the hardware of the device.

**Purpose:** Controls dedicated hardware devices with very specific, limited, and often real-time functions.

**Examples:**

| Device | Embedded Software Role |
|---|---|
| Washing Machine | Controls wash cycles, temperature, timer |
| Digital Camera | Controls autofocus, shutter, image processing |
| Pacemaker | Regulates heartbeat in real time |
| Automotive ECU | Manages engine timing, fuel injection |
| Microwave Oven | Controls time, power levels |
| ATM Machine | Manages card reading, cash dispensing |

**Characteristics:**
- **Real-time** constraints — must respond within strict time limits
- Extremely **resource-constrained** — minimal RAM, ROM, CPU
- Highly **reliable** — failures can be life-critical
- Written in C, C++, or Assembly
- Rarely updated after deployment

> ⚠️ **Why It Matters:** Embedded software failures can have catastrophic consequences — a bug in a medical device or an aircraft control system can endanger lives. This is why **safety-critical** software engineering is a specialized field.

---

### 3.4 Web Software (Web Applications)

**Definition:** Software that runs on web servers and is accessed through a web browser over the internet. Also called *web applications* or *web apps*.

**Purpose:** Provides services to users through a browser without requiring installation on the client side.

**Architecture:**

```
[ Client Browser ]  ←→  [ Web Server ]  ←→  [ Database Server ]
   (HTML/CSS/JS)       (PHP/Python/Node)      (MySQL/MongoDB)
```

**Examples:**

| Category | Examples |
|---|---|
| Social Media | Facebook, Twitter/X, Instagram |
| E-commerce | Amazon, Daraz, Hamro Bazar |
| Banking | Online banking portals |
| Email | Gmail, Yahoo Mail |
| Collaboration | Google Docs, Notion |
| Search Engines | Google, Bing |

**Characteristics:**
- **Platform-independent** — runs on any device with a browser
- **Always connected** — requires internet or network access
- **Continuously updated** — server-side updates apply instantly to all users
- Built with HTML, CSS, JavaScript on the client; Python, PHP, Node.js, Java on the server

---

### 3.5 AI / Scientific Software

**Definition:** Software designed to perform highly complex mathematical computations, simulations, or intelligent behavior. Includes both traditional scientific computation and modern AI/ML systems.

**Purpose:** Solves complex, computation-intensive problems in science, engineering, research, and intelligence.

**Subcategories:**

| Type | Description | Examples |
|---|---|---|
| Scientific Computing | Numerical simulations, analysis | MATLAB, Mathematica, GNU Octave |
| AI & Machine Learning | Pattern recognition, prediction | TensorFlow, PyTorch, Scikit-learn |
| Expert Systems | Rule-based decision making | Medical diagnosis tools |
| Natural Language Processing | Understanding human language | ChatGPT, Google Translate |
| Computer Vision | Image/video analysis | OpenCV, face recognition systems |

**Characteristics:**
- Extremely compute-intensive
- Uses GPUs and parallel processing
- Requires specialized mathematical libraries
- Output is probabilistic (not always deterministic)
- Fast-evolving field

---

### 3.6 Open-Source Software

**Definition:** Software whose **source code is publicly available** for anyone to view, use, modify, and distribute, under specific license terms.

**Purpose:** Encourages community-driven development, transparency, and free access to software.

**Key Licenses:**

| License | Key Terms |
|---|---|
| **MIT** | Very permissive; use freely, attribution required |
| **GPL (GNU)** | Modifications must also be open-source |
| **Apache 2.0** | Permissive; includes patent rights |
| **BSD** | Similar to MIT; very permissive |

**Examples:**

| Software | Domain |
|---|---|
| Linux | Operating System |
| Mozilla Firefox | Web Browser |
| LibreOffice | Office Suite |
| Python | Programming Language |
| MySQL / PostgreSQL | Database |
| WordPress | CMS / Web |
| Android (AOSP) | Mobile OS |

**Advantages:**
- Free to use and distribute
- Community-driven bug fixes and features
- Transparent — code can be audited for security
- Promotes learning and collaboration

**Disadvantages:**
- Support may be limited (community-based)
- Quality varies across projects
- Licensing complexities when used in commercial products

> 🌐 **Nepal Context:** Many government e-services and institutions now prefer open-source solutions to reduce licensing costs and dependency on foreign vendors.

---

## 4. Summary & Comparison Table

| Type | Primary User | Key Trait | Example |
|---|---|---|---|
| **System** | Developers / OS | Manages hardware | Linux, Windows |
| **Application** | End Users | Solves specific tasks | MS Word, Tally |
| **Embedded** | Devices | Real-time, resource-limited | Washing machine firmware |
| **Web** | Internet Users | Browser-accessible | Gmail, Daraz |
| **AI/Scientific** | Researchers | Complex computation | TensorFlow, MATLAB |
| **Open-Source** | Everyone | Source code is public | Firefox, Python |

---

## 5. Key Definitions (Quick Reference)

| Term | Definition |
|---|---|
| **Software** | Programs + Data + Documentation |
| **System Software** | Software that manages hardware and provides a platform for other software |
| **Application Software** | Software designed for end-user tasks |
| **Embedded Software** | Software controlling dedicated hardware devices |
| **Web Software** | Software accessed via a browser over a network |
| **AI Software** | Software performing intelligent or computationally intensive tasks |
| **Open-Source Software** | Software with publicly available source code under a license |
| **Software Decay** | Gradual degradation of software quality due to changing environment and unmaintained code |

---

## 6. Review Questions

### Conceptual

1. Define software in your own words. How does it differ from the common notion of "just programs"?
2. Why is it said that *software is engineered, not manufactured*? Explain with an analogy.
3. What is software decay? Why does software deteriorate even though it does not physically wear out?

### Analytical

4. Classify each of the following and justify your classification:
   - A mobile banking app (e.g., IME Pay)
   - The Linux kernel
   - Firmware in a smart TV remote
   - TensorFlow
   - VLC Media Player
   - WordPress

5. Compare and contrast **System Software** and **Application Software** using at least four criteria.

6. An engineering firm is building control software for a dam gate. Which type of software does this fall under? What special concerns should the developers have?

### Short Answer (Exam-Style)

7. List any **four characteristics** of software. *(2 marks)*
8. What are the advantages of open-source software? *(2 marks)*
9. Differentiate between **web software** and **application software**. *(4 marks)*
10. Why is embedded software considered more challenging to develop than application software? *(4 marks)*

---

## 7. Diagram: Software Classification Tree

```
Software
├── System Software
│   ├── Operating Systems
│   ├── Device Drivers
│   ├── Compilers / Interpreters
│   └── Firmware
│
├── Application Software
│   ├── Word Processors
│   ├── Spreadsheets
│   └── Database Apps
│
├── Embedded Software
│   ├── Consumer Electronics
│   ├── Industrial Control
│   └── Medical Devices
│
├── Web Software
│   ├── Static Websites
│   ├── Web Applications
│   └── Web Services / APIs
│
├── AI / Scientific Software
│   ├── Machine Learning Frameworks
│   ├── Scientific Computing
│   └── Expert Systems
│
└── Open-Source Software
    ├── Open-Source OS (Linux)
    ├── Open-Source Languages (Python)
    └── Open-Source Applications (LibreOffice)
```

---

## 8. References

| # | Title | Author / Source |
|---|---|---|
| 1 | *Software Engineering: A Practitioner's Approach* (8th ed.) | Roger S. Pressman & Bruce Maxim |
| 2 | *Software Engineering* (10th ed.) | Ian Sommerville |
| 3 | *Introduction to Software Engineering* | R. Fairly |
| 4 | TU BCA CACS253 Official Syllabus | Tribhuvan University |

---

## 📝 Next Session Preview

**Day 2 – Wednesday (Theory):** Introduction to Software Engineering — definition, characteristics, software crisis, and the emergence of Software Engineering as a discipline.

**Day 3 – Friday (Tutorial):** Practice problems on software classification; discussion exercises on types of software with real-world Nepali examples.

---

*Prepared for CACS253 – Software Engineering | TU BCA Program | Tribhuvan University*