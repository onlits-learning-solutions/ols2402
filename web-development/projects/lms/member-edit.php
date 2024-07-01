<?php
define('SERVER','localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$id = $_POST['id'];
$name = $_POST['name'];
$gender = $_POST['gender'];
$dob = $_POST['dob'];
$address = $_POST['address'];
$contact = $_POST['contact'];
$email = $_POST['email'];
$qualification = $_POST['qualification'];

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if(!$connection){
    die("connection failed! ". mysqli_connect_error());
}

$sql = "UPDATE member SET name='$name', gender='$gender', dob='$dob', address='$address', contact='$contact', email='$email', qualification='$qualification' WHERE id=$id";

if(mysqli_query($connection, $sql))
    header("Location:member.php");
else
    echo mysqli_error($connection);
mysqli_close($connection);