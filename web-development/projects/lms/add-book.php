<?php
session_start();
$email = null;
if (isset($_SESSION['email']))
    $email = $_SESSION['email'];
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Add Book</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <header>
        <h1 id="logo-text">Library Management System</h1>
    </header>
    <nav>
        <a href="dashboard.php">Dashboard</a>
        <a class="active">Book</a>
        <a href="member.php">Member</a>
        <a href="transaction.php">Trasaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?></span>
    </nav>
    <main>
        <aside>
            <a href="book.php">Book Home</a>
            <a href="add-book.php">Add Book</a>
            <a href="">Edit Book</a>
        </aside>
        <div class="content">
            <h3>Add Book</h3>
            <form action="book-save.php" method="post" class="type-1">
                <div class="input-group">
                    <label for="title">Title</label>
                    <input type="text" name="title" id="title" required>
                </div>
                <div class="input-group">
                    <label for="author">Author</label>
                    <input type="text" name="author" id="author" required>
                </div>
                <div class="input-group">
                    <label for="edition">Edition</label>
                    <input type="text" name="edition" id="edition">
                </div>
                <div class="input-group">
                    <label for="publication">Publication</label>
                    <input type="text" name="publication" id="publication">
                </div>
                <div class="input-group">
                    <label for="pages">Pages</label>
                    <input type="number" name="pages" id="pages">
                </div>
                <div class="input-group">
                    <label for="isbn">ISBN</label>
                    <input type="text" name="isbn" id="isbn" maxlength="13">
                </div>
                <div class="input-group">
                    <label for="category">Category</label>
                    <select name="category" id="category">
                        <option value="fiction">Fiction</option>
                        <option value="computer science">Computer Science</option>
                    </select>
                </div>
                <div class="input-group">
                    <label for="price">Price</label>
                    <input type="number" name="price" id="price">
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