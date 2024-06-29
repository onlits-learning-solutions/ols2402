<?php
session_start();
$email = null;
if (isset($_SESSION['email']))
    $email = $_SESSION['email'];
else
    header('Location:index.php?status=3');
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Layout</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <header>
        <h1 id="logo-text">Library Management System</h1>
    </header>
    <nav>
        <a class="active">Dashboard</a>
        <a href="book.php">Book</a>
        <a href="member.php">Member</a>
        <a href="transaction.php">Trasaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="">Item 1</a>
            <a href="">Item 2</a>
        </aside>
        <div class="content">
            <h3>Content</h3>
        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>

</html>