# Numerical Methods — Course Introduction

> **Unit 1 · Theory & Foundations**

---

## What are Numerical Methods?

Numerical methods are mathematical techniques for obtaining **approximate** solutions to problems that either have no closed-form analytical solution or are impractical to solve exactly. They translate a mathematical problem into a sequence of arithmetic operations a computer can execute — trading perfect exactness for practical computability.

### Why Do We Need Them?

| Reason | Description |
|---|---|
| No closed form | Many real-world equations (transcendental, nonlinear) have no exact algebraic solution |
| Computational power | Iterative algorithms converge fast on modern hardware — exact symbolic methods are often too slow |
| Approximation control | We can quantify and bound the error — critical in engineering where tolerances matter |

### Key Applications

- **Engineering & Physics** — structural analysis (FEM), fluid dynamics (CFD), heat conduction, circuit analysis
- **Data & Computation** — root finding, interpolation, numerical integration, curve fitting

---

## Syllabus Overview

| Week | Topic | Sub-topics |
|---|---|---|
| **1–2** | Introduction & Types of Equations *(current)* | Algebraic, transcendental, errors, significant figures |
| **3–4** | Root-finding Methods | Bisection, false position, Newton–Raphson, secant method |
| **5–6** | Solution of Simultaneous Equations | Gauss elimination, LU decomposition, iterative methods |
| **7–8** | Interpolation & Curve Fitting | Lagrange, Newton's divided differences, least squares |
| **9–10** | Numerical Differentiation & Integration | Trapezoidal rule, Simpson's rule, Gauss quadrature |
| **11–12** | Ordinary Differential Equations | Euler's method, Runge–Kutta methods, boundary value problems |
| **13–14** | Partial Differential Equations | Finite difference methods, parabolic & elliptic PDEs |
| **15** | Review & Applications | Comprehensive problem solving, error analysis |

### Core Concepts in Unit 1

- **Truncation error** — from approximating infinite processes with finite ones
- **Round-off error** — from finite precision arithmetic in computers
- **Absolute vs relative error** — foundational to all numerical analysis
- **Significant figures** — understanding how many digits carry meaningful information and how errors propagate

---

## Types of Equations

### 1. Algebraic Equations

Equations in which the unknown variable appears only as a **polynomial** — raised to positive integer powers, combined with constants and arithmetic operations.

**Examples:**

```
x² − 5x + 6 = 0
3x³ + 2x − 7 = 0
ax² + bx + c = 0
```

- Exact solutions exist up to degree 4 (quadratic, cubic, quartic formulas)
- Higher-degree polynomials generally require numerical methods
- Root count is **finite** and ≤ the degree of the polynomial

---

### 2. Transcendental Equations

Equations containing **transcendental functions** — trigonometric, exponential, logarithmic — which cannot be reduced to polynomial form.

**Examples:**

```
x = cos(x)
eˣ − 3x = 0
x · sin(x) − 1 = 0
```

- Rarely solvable in closed form
- May have **infinitely many roots** (e.g. `tan(x) = x`)
- Choosing a good starting interval is critical for numerical solvers

---

### Algebraic vs Transcendental — Comparison

| Property | Algebraic | Transcendental |
|---|---|---|
| Form | Polynomial in x | Involves sin, cos, eˣ, ln, … |
| Exact solution | Possible up to degree 4 | Rarely possible in closed form |
| Numerical approach | Bisection, Newton–Raphson | Same methods — no special treatment |
| Number of roots | Finite (≤ degree) | May be infinite |
| Typical example | `x³ − 2x + 1 = 0` | `tan(x) = x` |

> **Key insight:** Numerically, both types are treated the same way. The same root-finding algorithms (bisection, Newton–Raphson, secant) apply to both. The distinction matters mainly for understanding whether an exact solution *could* exist.

---

### 3. Simultaneous Equations (Special Subtype)

Multiple equations in multiple unknowns. Covered in depth from Week 5 onward.

| Type | Method |
|---|---|
| Linear: `Ax = b` | Gauss elimination, LU decomposition |
| Nonlinear | Iterative methods (Newton–Raphson in n dimensions) |

---

## Summary

```
Equation
├── Algebraic (polynomial)
│   ├── Linear          →  ax + b = 0
│   ├── Quadratic       →  ax² + bx + c = 0
│   └── Higher degree   →  numerical methods needed
│
└── Transcendental
    ├── Trigonometric   →  x = cos(x)
    ├── Exponential     →  eˣ = 3x
    └── Logarithmic     →  ln(x) = x − 1
```

---

*Numerical Methods · Unit 1 Notes*