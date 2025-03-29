<?php
session_start();
$email = null;
if(isset($_SESSION['email']))
    $email = $_SESSION['email'];
else
    header('Location:index.php?status=3');

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Transaction</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h1 id="logo-text">Library Management System</h1>
    </header>
    <nav>
        <a href="dashboard.php">Dashboard</a>
        <a href="book.php">Book</a>
        <a href="member.php">Member</a>
        <a class="active">Transaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="book-issue.php">Book issue</a>
            <a href="book-return.php">Book return</a>
        </aside>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>
</html>