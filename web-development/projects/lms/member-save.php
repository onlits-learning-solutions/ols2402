<?php
define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$name = $_POST['name'];
$gender = $_POST['gender'];
$dob = $_POST['dob'];
$address = $_POST['address'];
$contact = $_POST['contact'];
$email = $_POST['email'];
$qualification = $_POST['qualification'];

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if (!$connection) {
    die("Connection failed! " . mysqli_connect_error());
}

$sql = "INSERT INTO member(name, gender, dob, address, contact, email, qualification) VALUES('$name', '$gender', '$dob', '$address', $contact, '$email', '$qualification')";

if (mysqli_query($connection, $sql))
    header("Location:member.php");
else
    echo mysqli_error($connection);
mysqli_close($connection);
