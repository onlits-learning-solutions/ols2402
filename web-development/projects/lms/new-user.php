<?php
define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$email = $_POST['email'];
$password = $_POST['password'];

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "INSERT INTO user(email, password) VALUES('$email', SHA1('$password'))";

if (mysqli_query($connection, $sql))
    echo "User Created Successfully";
else
    echo "Error: " . mysqli_error($connection);
