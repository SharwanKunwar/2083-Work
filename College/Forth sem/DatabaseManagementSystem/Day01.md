# 🗄️ Introduction to Database and DBMS

> **Course:** Database Management Systems
> **Day:** Monday — Theory
> **Topics:** Introduction to Database and DBMS · Objectives of DBMS · Difference between File System and DBMS

---

## 📌 Table of Contents

- [What is a Database?](#what-is-a-database)
- [What is a DBMS?](#what-is-a-dbms)
- [Objectives of DBMS](#objectives-of-dbms)
- [File System vs. DBMS](#file-system-vs-dbms)
- [Key Takeaway](#key-takeaway)

---

## 📂 What is a Database?

A **database** is an organized collection of related data stored so it can be easily accessed, managed, and updated.

> Think of it as a digital filing cabinet with a smart system to find and organize information.

---

## 🛠️ What is a DBMS?

A **Database Management System (DBMS)** is software that acts as an **interface between users/applications and the database**. It handles storing, retrieving, and managing data.

### Popular DBMS Examples

| Type | Examples |
|------|----------|
| Relational | MySQL, PostgreSQL, Oracle, MS SQL Server |
| NoSQL | MongoDB, Cassandra, Redis |

---

## 🎯 Objectives of DBMS

| Objective | Description |
|-----------|-------------|
| **Data Abstraction** | Hides internal complexity; users interact with a simplified view |
| **Data Independence** | Changes in structure don't affect applications |
| **Data Integrity** | Enforces rules to ensure accuracy and consistency |
| **Data Security** | Controls who can access or modify data |
| **Reduced Redundancy** | Minimizes duplicate data storage |
| **Concurrent Access** | Multiple users can access data simultaneously without conflict |
| **Backup & Recovery** | Protects data from crashes or failures |
| **Data Sharing** | Data can be shared across multiple users/applications |

---

## ⚖️ File System vs. DBMS

| Feature | 📁 File System | 🗄️ DBMS |
|---------|--------------|--------|
| **Data Storage** | Stored in flat files | Stored in structured tables/collections |
| **Data Redundancy** | High — same data repeated across files | Low — centralized, normalized storage |
| **Data Inconsistency** | Very common | Controlled via constraints |
| **Data Access** | Manual search/programs needed | Powerful query languages (e.g., SQL) |
| **Security** | OS-level only, limited | Fine-grained access control per user/role |
| **Concurrency** | No built-in support | Full concurrency control (locking, transactions) |
| **Data Integrity** | No enforcement | Enforced via constraints (PK, FK, etc.) |
| **Backup & Recovery** | Manual, unreliable | Automatic, transaction-based recovery |
| **Data Independence** | Tightly coupled to programs | Physical & logical independence |
| **Relationships** | Hard to represent | Easily modeled (foreign keys, joins) |

---

## 💡 Key Takeaway

> A **File System** stores data but provides no intelligence about it.
>
> A **DBMS** stores data *and* manages it — ensuring it's **consistent**, **secure**, **accessible**, and **efficient**.

---

*Notes prepared for Monday Theory Class — DBMS Unit 1*