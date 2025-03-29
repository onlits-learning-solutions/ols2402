<?php
session_start();
$email = null;
if(isset($_SESSION['email']))
    $email = $_SESSION['email']
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Add Member</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <header>
        <h1 id="logo-text">Library Management System</h1>
    </header>
    <nav>
        <a href="dashboard.php">Dashboard</a>
        <a href="book.php">Book</a>
        <a class="active">Member</a>
        <a href="transaction.php">Transaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="member.php">Member Home</a>
            <a href="add-member.php">Add Member</a>
           
        </aside>
        <div class="content">
            <h3>Add Member</h3>
            <form action="member-save.php" method="post" class="type-1">
                <div class="input-group">
                    <label for="name">Name</label>
                    <input type="text" name="name" id="name">
                </div>
                <div class="input-group">
                    <label for="gender">Gender</label>
                    <input type="text" name="gender" id="gender">
                </div>
                <div class="input-group">
                    <label for="dob">DOB</label>
                    <input type="date" name="dob" id="dob">
                </div>
                <div class="input-group">
                    <label for="address">Address</label>
                    <input type="text" name="address" id="address">
                </div>
                <div class="input-group">
                    <label for="contact">Contact</label>
                    <input type="text" name="contact" id="contact">
                </div>  
                <div class="input-group">
                    <label for="email">email</label>
                    <input type="email" name="email" id="email">
                </div>
                <div>
                    <label for="qualification">Qualification</label>
                    <input type="text" name="qualification" id="qualification">
                </div>
                <div class="command-group">
                    <button>Submit</button>
                </div>
            </form>

        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>
</html>