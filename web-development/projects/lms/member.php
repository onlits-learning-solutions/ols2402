<?php
session_start();
$email = null;
if (isset($_SESSION['email']))
    $email = $_SESSION['email'];

define('SERVER', 'localhost');
define('USER', 'ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE', 'lms_2402');

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

$members = array();

if (!$connection)
    die(mysqli_connect_error());

$sql = "SELECT * FROM member";

$result = mysqli_query($connection, $sql);

if (mysqli_num_rows($result)) {
    $members = mysqli_fetch_all($result, MYSQLI_ASSOC);
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Member</title>
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
        <a href="transaction.php">Trasaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="member.php">Member Home</a>
            <a href="add-member.php">Add Member</a>
        </aside>
        <div class="content">
            <h3>Member Home</h3>
            <?php if ($members) { ?>
                <table class="table-1">
                    <thead>
                        <tr>
                            <th>Id</th>
                            <th>Name</th>
                            <th>Gender</th>
                            <th>DOB</th>
                            <th>Address</th>
                            <th>Contact</th>
                            <th>Email</th>
                            <th>Qualification</th>
                            <th></th>
                            <th></th>
                        </tr>
                    </thead>
                    <tbody>
                        <?php foreach ($members as $member) { ?>
                            <tr>
                                <td><?= $member['id'] ?></td>
                                <td><?= $member['name'] ?></td>
                                <td><?= $member['gender'] ?></td>
                                <td><?= $member['dob'] ?></td>
                                <td><?= $member['address'] ?></td>
                                <td><?= $member['contact'] ?></td>
                                <td><?= $member['email'] ?></td>
                                <td><?= $member['qualification'] ?></td>
                                <?php $uri = "view-member.php?id=" . $member['id'] ?>
                                <td><a href="<?= $uri ?>">view</a></td>
                            </tr>
                        <?php } ?>
                    </tbody>
                </table>
            <?php } else { ?>
                <p>No member found </p>
            <?php } ?>
        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>

</html>