<?php
session_start();
$email = null;
if (isset($_SESSION['email']))
    $email = $_SESSION['email'];

$id = $_GET['id'];

define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection)
    die(mysqli_connect_error());

$sql = "SELECT * FROM book WHERE id=$id";

$result = mysqli_query($connection, $sql);

if (mysqli_num_rows($result)) {
    $book = mysqli_fetch_assoc($result);
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>View Book</title>
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
        <span id="display-email"><?= $email ?></span>
    </nav>
    <main>
        <aside>
            <a href="book.php">Book Home</a>
            <a href="add-book.php">Add Book</a>
        </aside>
        <div class="content">
            <h3>View Book</h3>
            <form action="book-edit.php" method="post" class="type-1">
                <div class="input-group">
                    <label for="id">Id</label>
                    <input type="text" name="id" id="id" value="<?= $id ?>" required readonly>
                </div>
                <div class="input-group">
                    <label for="title">Title</label>
                    <input type="text" name="title" id="title" value="<?= $book['title'] ?>" required readonly>
                </div>
                <div class="input-group">
                    <label for="author">Author</label>
                    <input type="text" name="author" id="author" value="<?= $book['author'] ?>" required readonly>
                </div>
                <div class="input-group">
                    <label for="edition">Edition</label>
                    <input type="text" name="edition" id="edition" value="<?= $book['edition'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="publication">Publication</label>
                    <input type="text" name="publication" id="publication" value="<?= $book['publication'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="pages">Pages</label>
                    <input type="number" name="pages" id="pages" value="<?= $book['pages'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="isbn">ISBN</label>
                    <input type="text" name="isbn" id="isbn" maxlength="13" value="<?= $book['isbn'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="category">Category</label>
                    <select name="category" id="category" readonly>
                        <option value="fiction" <?php if ($book['category'] === 'fiction') echo 'selected'; ?>>Fiction</option>
                        <option value="computer science" <?php if ($book['category'] === 'computer science') echo 'selected'; ?>>Computer Science</option>
                    </select>
                </div>
                <div class="input-group">
                    <label for="price">Price</label>
                    <input type="number" name="price" id="price" value="<?= $book['price'] ?>" readonly>
                </div>
                <div class="command-group">
                    <button id="submit" style="display: none;">Submit</button>
                    <button type="button" id="edit">Edit</button>
                    <button id="del">Delete</button>
                </div>
            </form>
        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>

    <script>
        let edit = document.getElementById('edit');

        edit.onclick = function() {
            // document.getElementById('title').readOnly = false;
            document.getElementById('submit').style.display = 'inline';
            document.getElementById('edit').style.display = 'none';
            document.getElementById('del').style.display = 'none';
        }
    </script>
</body>

</html>