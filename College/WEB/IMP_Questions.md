# 🛒 Customer Registration — E-Commerce Website

A simple customer registration form with server-side validation and MySQL database storage.

---

## 📁 Project Structure

```
project/
├── register.html   # Frontend registration form
├── register.php    # Server-side validation & DB insert
└── README.md
```

---

## 🗄️ Database Setup

Run this SQL to create the database and table:

```sql
CREATE DATABASE ecommerce;
USE ecommerce;

CREATE TABLE customers (
    id      INT AUTO_INCREMENT PRIMARY KEY,
    name    VARCHAR(100),
    email   VARCHAR(100),
    phone   VARCHAR(15),
    address TEXT,
    dob     DATE,
    gender  VARCHAR(10)
);
```

---

## 📄 `register.html` — Registration Form

```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Customer Registration</title>
</head>
<body>
  <h2>Customer Registration</h2>
  <form action="register.php" method="POST">
    <label>Name:         <input type="text"  name="name"></label><br>
    <label>Email:        <input type="email" name="email"></label><br>
    <label>Phone:        <input type="text"  name="phone"></label><br>
    <label>Address:      <input type="text"  name="address"></label><br>
    <label>Date of Birth:<input type="date"  name="dob"></label><br>
    <label>Gender:
      <select name="gender">
        <option value="">--Select--</option>
        <option>Male</option>
        <option>Female</option>
        <option>Other</option>
      </select>
    </label><br>
    <button type="submit">Register</button>
  </form>
</body>
</html>
```

---

## ⚙️ `register.php` — Server-Side Validation & DB Insert

```php
<?php
$conn = mysqli_connect("localhost", "root", "", "ecommerce");

// 1. Required field validation
$fields = ["name", "email", "phone", "address", "dob", "gender"];
foreach ($fields as $f) {
    if (empty($_POST[$f])) {
        die("Error: All fields are required.");
    }
}

// 2. Phone type validation (10 digits only)
if (!preg_match('/^[0-9]{10}$/', $_POST['phone'])) {
    die("Error: Phone must be a 10-digit number.");
}

// 3. Sanitize inputs
$name    = mysqli_real_escape_string($conn, $_POST['name']);
$email   = mysqli_real_escape_string($conn, $_POST['email']);
$phone   = mysqli_real_escape_string($conn, $_POST['phone']);
$address = mysqli_real_escape_string($conn, $_POST['address']);
$dob     = mysqli_real_escape_string($conn, $_POST['dob']);
$gender  = mysqli_real_escape_string($conn, $_POST['gender']);

// 4. Insert into DB
$sql = "INSERT INTO customers (name, email, phone, address, dob, gender)
        VALUES ('$name','$email','$phone','$address','$dob','$gender')";

if (mysqli_query($conn, $sql)) {
    echo "Customer registered successfully!";
} else {
    echo "DB Error: " . mysqli_error($conn);
}
mysqli_close($conn);
?>
```

---

## ✅ Validation Summary

| Field   | Required | Type Validation              |
|---------|----------|------------------------------|
| Name    | ✔ Yes   | —                            |
| Email   | ✔ Yes   | HTML `type="email"`          |
| Phone   | ✔ Yes   | Regex: 10 digits only        |
| Address | ✔ Yes   | —                            |
| DOB     | ✔ Yes   | HTML `type="date"`           |
| Gender  | ✔ Yes   | Dropdown selection           |

---

## 🛠️ Requirements

- PHP 7+
- MySQL / MariaDB
- Apache / XAMPP / WAMP

---

## 🚀 How to Run

1. Import the SQL to create the `ecommerce` database and `customers` table.
2. Place `register.html` and `register.php` in your server's root folder (e.g., `htdocs/`).
3. Open `http://localhost/register.html` in your browser.
4. Fill in the form and submit — data will be saved to the database.