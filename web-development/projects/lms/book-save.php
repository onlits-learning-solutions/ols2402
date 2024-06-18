<?php
define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$title = $_POST['title'];
$author = $_POST['author'];
$edition = $_POST['edition'];
$publication = $_POST['publication'];
$pages = $_POST['pages'];
$isbn = $_POST['isbn'];
$category = $_POST['category'];
$price = $_POST['price'];

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection) {
    die("Connection failed! " . mysqli_connect_error());
}

$sql = "INSERT INTO book(title, author, edition, publication, pages, isbn, category, price) VALUES('$title', '$author', '$edition', '$publication', $pages, '$isbn', '$category', $price)";

if (mysqli_query($connection, $sql))
    header("Location:book.php");
else
    echo mysqli_error($connection);
mysqli_close($connection);
