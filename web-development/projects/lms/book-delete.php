<?php
$id = $_GET['id'];

define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection)
    die(mysqli_connect_error());

$sql = "DELETE FROM book WHERE id=$id";   //Embeded SQL


if (mysqli_query($connection, $sql)) {
    header('Location: book.php');
} else {
    echo mysqli_error($connection);
}