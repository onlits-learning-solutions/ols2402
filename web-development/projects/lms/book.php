<?php
session_start();
$email = null;
if (isset($_SESSION['email']))
    $email = $_SESSION['email'];
else
    header('Location:index.php?status=3');

define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection)
    die(mysqli_connect_error());

$sql = "SELECT * FROM book";

$result = mysqli_query($connection, $sql);

if (mysqli_num_rows($result)) {
    $books = mysqli_fetch_all($result, MYSQLI_ASSOC);
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Book</title>
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
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="book.php">Book Home</a>
            <a href="add-book.php">Add Book</a>
        </aside>
        <div class="content">
            <h3>Book Home</h3>
            <table class="table-1">
                <thead>
                    <tr>
                        <th>Id</th>
                        <th>Title</th>
                        <th>Author</th>
                        <th>Edition</th>
                        <th>Publication</th>
                        <th>Pages</th>
                        <th>ISBN</th>
                        <th>Category</th>
                        <th>Price</th>
                        <th></th>
                        <th></th>
                    </tr>
                </thead>
                <tbody>
                    <?php foreach ($books as $book) { ?>
                        <tr>
                            <td><?= $book['id'] ?></td>
                            <td><?= $book['title'] ?></td>
                            <td><?= $book['author'] ?></td>
                            <td><?= $book['edition'] ?></td>
                            <td><?= $book['publication'] ?></td>
                            <td><?= $book['pages'] ?></td>
                            <td><?= $book['isbn'] ?></td>
                            <td><?= $book['category'] ?></td>
                            <td><?= $book['price'] ?></td>
                            <?php $uri = "view-book.php?id=" . $book['id'] ?>
                            <td><a href="<?= $uri ?>">view</a></td>
                        </tr>
                    <?php } ?>
                </tbody>
            </table>
        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>

</html>