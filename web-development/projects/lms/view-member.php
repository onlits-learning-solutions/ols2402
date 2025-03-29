<?php
session_start();
$email = null;
if(isset($_SESSION['email']))
    $email = $_SESSION['email'];

$id = $_GET['id'];

define('SERVER', 'localhost');
define('USER','ols2402');
define('PASSWORD', 'ols2402');
define('DATABASE','lms_2402');

$connection = mysqli_connect(SERVER, USER, PASSWORD, DATABASE);

if(!$connection)
    die(mysqli_connect_error());

$sql = "SELECT * FROM member WHERE id=$id";

$result = mysqli_query($connection, $sql);

if(mysqli_num_rows($result)){
    $member = mysqli_fetch_assoc($result);
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>View Member</title>
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
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="member.php">Member Home</a>
            <a href="add-member.php">Add member</a>
        </aside>
        <div class="content">
            <h3>View Member</h3>
            <form action="member-edit.php" method="post" class="type-1">
                <div class="input-group">
                    <label for="id">Id</label>
                    <input type="text" name="id" id="id" value="<?= $id ?>" required readonly>
                </div>
                <div class="input-group">
                    <label for="name" >Name</label>
                    <input type="text" name="name" id="name" value="<?= $member['name'] ?>"  readonly>
                </div>
                <div class="input-group">
                    <label for="gender" >Gender</label>
                    <input type="text" name="gender" id="gender" value="<?= $member['gender'] ?>"  readonly>
                </div>
                <div class="input-group">
                    <label for="dob">DOB</label>
                    <input type="text" name="dob" id="dob" value="<?= $member['dob']?> " readonly>
                </div>
                <div class="input-group">
                    <label for="address">Address</label>
                    <input type="text" name="address" id="address" value="<?= $member['address'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="contact">Contact</label>
                    <input type="text" name="contact" id="contact" value="<?= $member['contact'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="email">Email</label>
                    <input type="email" name="email" id="email" value="<?= $member['email'] ?>" readonly>
                </div>
                <div class="input-group">
                    <label for="qualification">Qualification</label>
                    <input type="text" name="qualification" id="qualification" value="<?= $member['qualification']?>" readonly>
                </div>
                <div class="command-group">
                    <button id="submit" style="display: none">Submit </button>
                    <button type="button" id="edit">Edit</button>
                    <button id="del" type="button">Delete</button>
                </div>
            </form>
        </div>
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>

    <script>
        let edit = document.getElementById('edit');

        edit.onclick = function(){
            document.getElementById('name').readOnly = false;
            document.getElementById('gender').readOnly = false;
            document.getElementById('dob').readOnly = false;
            document.getElementById('address').readOnly = false;
            document.getElementById('contact').readOnly = false;
            document.getElementById('email').readOnly = false;
            document.getElementById('qualification').readOnly = false;
            document.getElementById('submit').style.display = 'inline';
            document.getElementById('edit').style.display = 'none';
            document.getElementById('del').style.display = 'none';
        }
        let del = document.getElementById('del');
        let id = document.getElementById('id').value;

        del.onclick = function(){
            window.location.href = 'member-delete.php?id=' + id;
        }
    </script>
    
</body>
</html>