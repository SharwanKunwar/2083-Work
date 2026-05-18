# CACS255 – Database Management System
## 16-Week Day-Wise Learning Plan | TU BCA II/IV Semester

---

## 📌 Course Overview

| Detail | Info |
|---|---|
| **Course Code** | CACS255 |
| **Course Title** | Database Management System |
| **Credit Hours** | 3 Credits |
| **Year / Semester** | II / IV |
| **Class Load** | 6 Hrs / Week |
| **Theory** | 3 Hrs / Week |
| **Tutorial** | 1 Hr / Week |
| **Practical** | 2 Hrs / Week |
| **Total Weeks** | 16 Weeks |
| **Full Marks** | 100 |

---

## 🏛️ Assessment Structure

| Component | Marks |
|---|---|
| Theory Final Exam | 60 |
| Internal / Assignment | 20 |
| Practical Exam | 20 |
| **Total** | **100** |

---

## ⏱️ Weekly Schedule Pattern

| Day | Session Type | Duration |
|---|---|---|
| Monday | Theory | 1 Hr |
| Tuesday | Theory | 1 Hr |
| Wednesday | Tutorial | 1 Hr |
| Thursday | Theory | 1 Hr |
| Friday | Practical (Lab) | 2 Hrs |

---

## 📊 Unit-Wise Hour Distribution

| Unit | Title | Theory Hrs | Tutorial Hrs | Practical Hrs |
|---|---|---|---|---|
| 1 | Introduction to DBMS | 3 | 1 | 2 |
| 2 | Database Design, Architecture and Models | 6 | 2 | 4 |
| 3 | Relational Database Model | 4 | 1 | 2 |
| 4 | Database Normalization | 4 | 2 | 2 |
| 5 | Creating and Altering Database Tables (SQL) | 6 | 2 | 4 |
| 6 | Manipulating and Querying Data | 8 | 2 | 6 |
| 7 | Stored Procedures, DML Triggers & Indexing | 5 | 1 | 4 |
| 8 | Query Processing and Security | 4 | 1 | 2 |
| 9 | Transaction and Concurrency Control | 4 | 1 | 2 |
| — | Review, Mini-Project, Revision | 4 | 3 | 4 |
| **Total** | | **48** | **16** | **32** |

---

## 🗓️ 16-Week Day-Wise Schedule

---

### ✅ Week 1 — Introduction to DBMS

**Unit 1: Introduction to DBMS (3 Theory Hrs)**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Introduction to Database and DBMS; Objectives of DBMS; Difference between File System and DBMS |
| Tuesday | Theory | Importance of DBMS; Merits and Demerits of DBMS |
| Wednesday | Tutorial | Discussion: Real-world examples where DBMS is used vs flat files; advantages and limitations exercise |
| Thursday | Theory | Applications of DBMS (Banking, Airlines, Healthcare, Education, E-commerce); Introduction to Database Users and Roles |
| Friday | Practical | Lab 01 – Orientation: Installing MySQL / MS SQL Server; exploring the DBMS environment; creating first database and simple tables |

---

### ✅ Week 2 — Database Design, Architecture & Data Models (Part 1)

**Unit 2: Database Design, Architecture and Models (Hours 1–3)**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Overview of the Database Designing Process; Three Views of Data (External, Conceptual, Internal) |
| Tuesday | Theory | Three-Level Database Architecture (ANSI-SPARC model); Data Independence – Logical and Physical |
| Wednesday | Tutorial | Problem-solving: Identifying levels of abstraction in a given system (e.g., a hospital DBMS); short questions on data independence |
| Thursday | Theory | Database Languages: DDL, DML, DCL, TCL — roles and examples; Query by Example (QBE) |
| Friday | Practical | Lab 02 – Exploring DDL commands: CREATE DATABASE, USE, SHOW DATABASES, DROP DATABASE; understanding database structure |

---

### ✅ Week 3 — Data Models & Entity-Relationship Concepts

**Unit 2 continued (Hours 4–6)**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Data Models overview: Hierarchical, Network, Relational, Object-Based; comparing models |
| Tuesday | Theory | Entity-Relationship (E-R) Model: Entities, Attributes, Relationships; Entity Sets vs Relationship Sets |
| Wednesday | Tutorial | Practice: Identifying entities, attributes, and relationships from a case study (e.g., Library System, College System) |
| Thursday | Theory | E-R Diagram notation: Strong Entity Set, Weak Entity Set, Aggregation, Generalization, Specialization |
| Friday | Practical | Lab 03 – Drawing E-R diagrams using draw.io / MySQL Workbench EER diagram tool; case study: Student Management System |

---

### ✅ Week 4 — E-R Diagrams and Relational Database Model

**Unit 2 concluded + Unit 3 begins (Hours 1–2)**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Extended E-R features: Multi-valued attributes, Derived attributes, Composite attributes; Converting E-R Diagram to Relational Tables |
| Tuesday | Theory | Unit 3 starts — Structure of RDBMS and Terminology: Tables, Tuples, Attributes, Domains, Degree, Cardinality |
| Wednesday | Tutorial | Practice: Convert a given E-R diagram (e.g., Hospital System) to relational tables; identifying primary and foreign keys |
| Thursday | Theory | Database Schema vs Database Instance; Schema Diagrams |
| Friday | Practical | Lab 04 – Converting E-R diagrams to SQL CREATE TABLE statements; defining tables with basic data types (INT, VARCHAR, DATE) |

---

### ✅ Week 5 — Relational Keys and Relational Algebra (Part 1)

**Unit 3 continued (Hours 3–4)**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Types of Keys: Super Key, Candidate Key, Primary Key, Foreign Key, Composite Key — definitions and examples |
| Tuesday | Theory | Referential Integrity; Introduction to Relational Algebra — purpose and notation |
| Wednesday | Tutorial | Key identification exercises: Given a table schema, identify all keys; short questions on referential integrity |
| Thursday | Theory | Relational Algebra Operations: SELECT (σ), PROJECT (π), CARTESIAN PRODUCT (×) |
| Friday | Practical | Lab 05 – Creating tables with PRIMARY KEY and FOREIGN KEY constraints; testing referential integrity with INSERT and DELETE |

---

### ✅ Week 6 — Relational Algebra (Part 2) & Database Normalization (Part 1)

**Unit 3 concluded + Unit 4 begins**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Relational Algebra Operations: UNION (∪), SET DIFFERENCE (−), NATURAL JOIN (⋈), OUTER JOIN (LEFT, RIGHT, FULL) |
| Tuesday | Theory | Unit 4 starts — Anomalies in Unnormalized Data: Insertion, Deletion, Update Anomalies; Functional Dependencies |
| Wednesday | Tutorial | Relational algebra expression exercises: Write RA expressions for given queries on sample tables |
| Thursday | Theory | First Normal Form (1NF): Definition, conditions, examples of conversion |
| Friday | Practical | Lab 06 – Writing relational algebra-style queries using SQL; practicing SELECT with column projections and WHERE filters |

---

### ✅ Week 7 — Database Normalization (Part 2)

**Unit 4 continued**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Second Normal Form (2NF): Partial Dependency — definition, identification, conversion examples |
| Tuesday | Theory | Third Normal Form (3NF): Transitive Dependency — definition, identification, conversion examples |
| Wednesday | Tutorial | Normalization worksheet: Given an unnormalized table, normalize step-by-step to 3NF |
| Thursday | Theory | Boyce-Codd Normal Form (BCNF): Definition, difference from 3NF, when it applies; brief introduction to 4NF and 5NF |
| Friday | Practical | Lab 07 – Designing a normalized database for a real-world case (e.g., Online Book Store); implementing normalized tables in SQL |

---

### ✅ Week 8 — Creating and Altering Databases (SQL DDL Part 1)

**Unit 5 starts**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Introduction to SQL: History and standards (SQL-86 to SQL:2016); SQL sublanguages recap; CREATE DATABASE statement |
| Tuesday | Theory | CREATE TABLE syntax; Data Types in SQL: INT, FLOAT, VARCHAR, CHAR, DATE, DATETIME, BOOLEAN, TEXT |
| Wednesday | Tutorial | Practice: Write CREATE TABLE statements for a given schema; identify appropriate data types |
| Thursday | Theory | Constraints in SQL: NOT NULL, UNIQUE, PRIMARY KEY, FOREIGN KEY, CHECK, DEFAULT — syntax and purpose |
| Friday | Practical | Lab 08 – Creating a multi-table database (e.g., Student Records); applying all constraint types; verifying with DESCRIBE |

---

### ✅ Week 9 — Creating and Altering Databases (SQL DDL Part 2)

**Unit 5 continued**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | ALTER TABLE: Adding columns (ADD), modifying columns (MODIFY / ALTER COLUMN), renaming columns |
| Tuesday | Theory | ALTER TABLE: Adding and dropping constraints (ADD CONSTRAINT, DROP CONSTRAINT); renaming tables |
| Wednesday | Tutorial | Practice: Given a table design change request, write the corresponding ALTER TABLE statements |
| Thursday | Theory | DROP Statement: DROP TABLE, DROP DATABASE; TRUNCATE vs DROP vs DELETE — comparison |
| Friday | Practical | Lab 09 – ALTER TABLE exercises: adding new fields to existing tables, modifying data types, adding FK constraints on live tables |

---

### ✅ Week 10 — Manipulating and Querying Data (Part 1)

**Unit 6 starts**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | INSERT Statement: Single row insert, multi-row insert, INSERT INTO … SELECT; handling NULL values |
| Tuesday | Theory | SELECT and FROM clause; column aliases; filtering data with WHERE clause; comparison and logical operators |
| Wednesday | Tutorial | Practice: Writing INSERT and SELECT queries on a sample database; filtering with multiple WHERE conditions |
| Thursday | Theory | ORDER BY clause (ASC, DESC); GROUP BY clause; HAVING clause — difference from WHERE |
| Friday | Practical | Lab 10 – Data manipulation: INSERT records into all project tables; SELECT with WHERE, ORDER BY, GROUP BY, HAVING |

---

### ✅ Week 11 — Manipulating and Querying Data (Part 2)

**Unit 6 continued**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Aggregate Functions: COUNT, SUM, AVG, MIN, MAX — syntax and GROUP BY usage |
| Tuesday | Theory | JOINS: INNER JOIN, LEFT OUTER JOIN, RIGHT OUTER JOIN, FULL OUTER JOIN, CROSS JOIN — syntax and use cases |
| Wednesday | Tutorial | JOIN practice: Multi-table queries on a given schema; identifying which JOIN to use for different scenarios |
| Thursday | Theory | Nested / Subqueries: Single-row subqueries, Multi-row subqueries (IN, ANY, ALL, EXISTS) |
| Friday | Practical | Lab 11 – JOIN queries and subqueries on project database; write at least 10 queries covering all JOIN types and one nested query |

---

### ✅ Week 12 — Manipulating Data (Part 3) + Views

**Unit 6 concluded**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | UPDATE statement: Simple update, conditional update, updating from another table |
| Tuesday | Theory | DELETE statement: Conditional delete, cascading deletes; difference between DELETE, TRUNCATE, DROP |
| Wednesday | Tutorial | Practice: Data manipulation queries — UPDATE and DELETE with various WHERE conditions; common mistakes discussion |
| Thursday | Theory | Views: CREATE VIEW, SELECT from View, updating through views; WITH CHECK OPTION; DROP VIEW; when to use views |
| Friday | Practical | Lab 12 – UPDATE, DELETE operations on project tables; creating and querying views; demonstrating view-based access control |

---

### ✅ Week 13 — Stored Procedures, Triggers & Indexing

**Unit 7**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Stored Procedures: Concept, advantages; CREATE PROCEDURE, ALTER PROCEDURE, DROP PROCEDURE, EXEC / CALL |
| Tuesday | Theory | Parameters in Stored Procedures: IN, OUT, INOUT parameters; Return values; WITH ENCRYPTION option |
| Wednesday | Tutorial | Practice: Write stored procedures for common operations (e.g., enroll a student, calculate GPA); trace execution flow |
| Thursday | Theory | DML Triggers: Concept, types (BEFORE/AFTER, INSERT/UPDATE/DELETE); CREATE TRIGGER, DROP TRIGGER; Trigger limitations; Disabling triggers; Multi-row triggers |
| Friday | Practical | Lab 13 – Creating stored procedures with IN/OUT parameters; creating AFTER INSERT and BEFORE UPDATE triggers; testing trigger behavior |

---

### ✅ Week 14 — Indexing & Query Processing

**Unit 7 concluded + Unit 8 starts**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Indexing: Concept and purpose; Ordered Indices; Primary vs Secondary Index; Dense vs Sparse Index; B-Tree and B+ Tree index structures |
| Tuesday | Theory | Types of Indexing: Multiple Key Access; Creating and Dropping Indexes (CREATE INDEX, DROP INDEX); when indexes help and when they hurt |
| Wednesday | Tutorial | Indexing exercises: Identify where indexes would improve query performance in a given schema; interpret EXPLAIN / query plan output |
| Thursday | Theory | Unit 8 — Query Processing: Overview of query processing steps; Measuring Query Cost; Selection evaluation strategies; Sorting |
| Friday | Practical | Lab 14 – Creating indexes on frequently queried columns; comparing query performance before and after indexing using EXPLAIN; creating a stored procedure with error handling |

---

### ✅ Week 15 — Query Optimization, Security & Transactions

**Unit 8 concluded + Unit 9 starts**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Joining evaluation, Evaluation of Expressions; Query Optimization heuristics |
| Tuesday | Theory | Database Security: DBA Roles and Responsibilities; Types of Security; Access Protection; User Accounts (CREATE USER, GRANT, REVOKE) |
| Wednesday | Tutorial | Security practice: Write SQL statements to create users, grant specific privileges, and revoke access; Discretionary vs Mandatory Access Control discussion |
| Thursday | Theory | Unit 9 — Transaction Concept; Simple Transaction Model; ACID Properties: Atomicity, Consistency, Isolation, Durability; COMMIT, ROLLBACK, SAVEPOINT |
| Friday | Practical | Lab 15 – Creating and managing database users (GRANT, REVOKE); testing access control; writing transactions with COMMIT, ROLLBACK, and SAVEPOINT |

---

### ✅ Week 16 — Concurrency Control, Mini-Project & Revision

**Unit 9 concluded + Review**

| Day | Session | Topic |
|---|---|---|
| Monday | Theory | Transaction Isolation Levels (READ UNCOMMITTED, READ COMMITTED, REPEATABLE READ, SERIALIZABLE); Serializability; Concurrency issues: Dirty Read, Non-repeatable Read, Phantom Read |
| Tuesday | Theory | Concurrency Control Protocols: Lock-Based Protocol (Shared, Exclusive Locks), Two-Phase Locking (2PL), Deadlock Handling; Timestamp-Based Protocol; Multiple Granularity |
| Wednesday | Tutorial | Full revision: Past question discussion; unit-wise summary; exam strategy for 60-mark theory paper |
| Thursday | Theory | Mini-Project presentations / viva; Course wrap-up and exam guidance |
| Friday | Practical | Lab 16 – Final practical demonstration: Full mini-project demo (all CRUD, JOINs, views, stored procedures, triggers, transactions); practical viva |

---

## 🖥️ Laboratory Work Plan

### Lab Objectives
Students will apply all theoretical concepts using **MySQL / MS SQL Server**. A mini-project must be developed individually throughout the semester.

### Lab Session Summary

| Lab | Week | Topic |
|---|---|---|
| Lab 01 | 1 | Environment setup; CREATE and DROP DATABASE basics |
| Lab 02 | 2 | DDL commands; exploring database structure |
| Lab 03 | 3 | Drawing and implementing E-R diagrams |
| Lab 04 | 4 | Converting E-R to tables; data types |
| Lab 05 | 5 | PRIMARY KEY, FOREIGN KEY, referential integrity |
| Lab 06 | 6 | SELECT, PROJECT using SQL (RA to SQL mapping) |
| Lab 07 | 7 | Normalized database design and implementation |
| Lab 08 | 8 | CREATE TABLE with all constraints |
| Lab 09 | 9 | ALTER TABLE and DROP operations |
| Lab 10 | 10 | INSERT, SELECT, WHERE, ORDER BY, GROUP BY |
| Lab 11 | 11 | JOINs and subqueries |
| Lab 12 | 12 | UPDATE, DELETE, Views |
| Lab 13 | 13 | Stored Procedures, Triggers |
| Lab 14 | 14 | Indexes, EXPLAIN, query analysis |
| Lab 15 | 15 | User management, GRANT/REVOKE, Transactions |
| Lab 16 | 16 | Final project demo and practical viva |

### Mini-Project Guidelines
- **Assigned:** Week 3 (after E-R modeling)
- **Submitted:** Week 16
- **Scope:** Design and implement a small database application covering all units (E-R design, normalized tables, SQL queries, views, stored procedures, triggers, and user management)
- **Sample Project Domains:** Library Management, Hospital Records, Student Grading System, Online Shopping Cart, Hostel Management
- **Basis:** Individual

---

## 📐 SQL Quick-Reference Card

### DDL Commands
```sql
CREATE DATABASE dbname;
USE dbname;
CREATE TABLE tablename (
    col1 INT PRIMARY KEY AUTO_INCREMENT,
    col2 VARCHAR(100) NOT NULL,
    col3 DATE DEFAULT CURRENT_DATE,
    col4 DECIMAL(10,2) CHECK (col4 >= 0),
    col5 INT,
    FOREIGN KEY (col5) REFERENCES other_table(id)
);
ALTER TABLE tablename ADD COLUMN new_col VARCHAR(50);
ALTER TABLE tablename MODIFY COLUMN col2 VARCHAR(200);
ALTER TABLE tablename DROP COLUMN col2;
DROP TABLE tablename;
TRUNCATE TABLE tablename;
DROP DATABASE dbname;
```

### DML Commands
```sql
-- INSERT
INSERT INTO tablename (col1, col2) VALUES ('val1', 'val2');
INSERT INTO tablename SELECT col1, col2 FROM other_table WHERE condition;

-- SELECT
SELECT col1, col2 FROM tablename
WHERE condition
GROUP BY col1
HAVING aggregate_condition
ORDER BY col2 DESC;

-- UPDATE
UPDATE tablename SET col1 = 'new_val' WHERE condition;

-- DELETE
DELETE FROM tablename WHERE condition;
```

### JOIN Syntax
```sql
-- INNER JOIN
SELECT a.col, b.col FROM a INNER JOIN b ON a.id = b.a_id;

-- LEFT JOIN
SELECT a.col, b.col FROM a LEFT JOIN b ON a.id = b.a_id;

-- RIGHT JOIN
SELECT a.col, b.col FROM a RIGHT JOIN b ON a.id = b.a_id;

-- CROSS JOIN
SELECT a.col, b.col FROM a CROSS JOIN b;
```

### Aggregate Functions
```sql
SELECT COUNT(*), SUM(salary), AVG(salary), MIN(salary), MAX(salary)
FROM employees
GROUP BY department_id
HAVING COUNT(*) > 5;
```

### Stored Procedure
```sql
DELIMITER //
CREATE PROCEDURE GetStudent(IN sid INT, OUT sname VARCHAR(100))
BEGIN
    SELECT name INTO sname FROM students WHERE id = sid;
END //
DELIMITER ;
CALL GetStudent(1, @name);
SELECT @name;
```

### Trigger
```sql
DELIMITER //
CREATE TRIGGER after_insert_order
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    UPDATE inventory SET stock = stock - NEW.qty WHERE product_id = NEW.product_id;
END //
DELIMITER ;
```

### Transaction
```sql
START TRANSACTION;
    UPDATE accounts SET balance = balance - 5000 WHERE id = 1;
    UPDATE accounts SET balance = balance + 5000 WHERE id = 2;
COMMIT;
-- or ROLLBACK; if something goes wrong
```

### User & Security
```sql
CREATE USER 'username'@'localhost' IDENTIFIED BY 'password';
GRANT SELECT, INSERT ON dbname.tablename TO 'username'@'localhost';
REVOKE INSERT ON dbname.tablename FROM 'username'@'localhost';
DROP USER 'username'@'localhost';
```

---

## 📊 Key Concept Quick-Reference

### ACID Properties

| Property | Meaning | Example |
|---|---|---|
| **Atomicity** | All operations succeed or none do | Bank transfer: debit + credit both happen or neither |
| **Consistency** | DB moves from one valid state to another | Balance never goes negative |
| **Isolation** | Concurrent transactions don't interfere | Two transfers don't corrupt each other |
| **Durability** | Committed data survives failure | After COMMIT, data persists even if server crashes |

### Normalization Forms

| Normal Form | Eliminates | Condition |
|---|---|---|
| **1NF** | Repeating groups / multi-valued cells | All attributes atomic; no duplicate rows |
| **2NF** | Partial dependency | 1NF + every non-key attribute fully dependent on whole PK |
| **3NF** | Transitive dependency | 2NF + no non-key attribute depends on another non-key attribute |
| **BCNF** | Anomalies 3NF misses | Every determinant is a candidate key |

### Types of Keys

| Key | Definition |
|---|---|
| **Super Key** | Any set of attributes that uniquely identifies a tuple |
| **Candidate Key** | Minimal super key (no redundant attributes) |
| **Primary Key** | Chosen candidate key; cannot be NULL |
| **Foreign Key** | Attribute referencing the primary key of another table |
| **Composite Key** | Key made of two or more attributes |

### JOIN Types Comparison

| JOIN Type | Returns |
|---|---|
| **INNER JOIN** | Only matching rows in both tables |
| **LEFT JOIN** | All rows from left table + matching from right (NULL if no match) |
| **RIGHT JOIN** | All rows from right table + matching from left (NULL if no match) |
| **FULL OUTER JOIN** | All rows from both tables (NULL where no match) |
| **CROSS JOIN** | Cartesian product of both tables |

### Concurrency Problems

| Problem | Description |
|---|---|
| **Dirty Read** | Reading uncommitted data from another transaction |
| **Non-repeatable Read** | Same query returns different rows due to update |
| **Phantom Read** | Same query returns different count due to insert/delete |
| **Lost Update** | Two transactions overwrite each other's changes |

---

## 📚 Recommended References

| # | Title | Author(s) | Edition |
|---|---|---|---|
| 1 | Database System Concepts *(Primary Text)* | Abraham Silberschatz, Henry Korth, S. Sudarshan | 6th Ed., McGraw Hill |
| 2 | Fundamentals of Database Systems | Ramez Elmasri & Shamkant Navathe | 5th Ed. |
| 3 | The Complete Reference – SQL | James R. Groff & Paul N. Weinberg | Latest Ed. |
| 4 | Oracle Database 11g SQL | Jason Price | McGraw Hill, 2007 |
| 5 | TU BCA CACS255 Official Syllabus | Tribhuvan University | — |

---

## 📅 Milestone Summary

| Milestone | Week |
|---|---|
| E-R Diagram Assignment given | Week 3 |
| Mini-Project topic finalized | Week 4 |
| Normalization exercise submission | Week 7 |
| Mini-Project schema + DDL submitted | Week 9 |
| Mid-term internal assessment | Week 9–10 |
| Full query set submitted | Week 12 |
| Stored procedures + triggers submitted | Week 13 |
| Final project demo (practical) | Week 16 |
| Practical viva | Week 16 |
| Theory exam preparation complete | Week 16 |

---

*Prepared for CACS255 – Database Management System | TU BCA II/IV Semester | Tribhuvan University*