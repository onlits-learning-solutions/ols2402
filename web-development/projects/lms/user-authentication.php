<?php
define('SERVER','localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$email = $_POST['email'];
$password = $_POST['password'];

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if(!$connection)
    die("Connection failed! " . mysqli_connect_error());

$sql = "SELECT email FROM user WHERE email='$email' AND password=SHA1('$password')";

$result = mysqli_query($connection, $sql);

if(mysqli_num_rows($result) > 0) {
    session_start();
    $_SESSION['email'] = $email;
    header("Location:dashboard.php");
} else {
    header('Location:index.php?status=1');
}