<?php
session_start();
$email = null;
if(isset($_SESSION['email']))
    $email = $_SESSION['email'];
else
    header('Location:index.php?status= 3');

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
    <title>Book issue</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h1 id="logo-text">Library Management System</h1>
    </header>
    <nav>
        <a href="dashboard.php">Dashboard</a>
        <a href="book.php">book</a>
        <a href="member.php">Member</a>
        <a href="active">Transaction</a>
        <a href="report.php">Report</a>
        <span id="display-email"><?= $email ?><a href="logout.php">logout</a></span>
    </nav>
    <main>
        <aside>
            <a href="book-issue.php">Book issue</a>
            <a href="book-return.php">Book return</a>
        </aside>
        <div class="content">
            <div class="col-2">
                <form action="" method="post" class="type-1" >
                    <div>
                        <h3>Book</h3>
                        <div class="input-group">
                            <label for="id">book id</label>
                            <input type="text" name="id" id="id">
                            <button>search</button>
                        </div>
                        <div class="input-group">
                            <label for="title">book title</label>
                            <input type="text" name="title" id="title">
                        </div>
                        <div class="input-group">
                            <label for="author">Author</label>
                            <input type="text" name="author" id="author">
                           
                        </div>
                        <div class="input-group">
                            <label for="edition">Edition</label>
                            <input type="text" name="edition" id="edition">
                        </div>
                        <div class="input-group">
                            <label for="publication">Publication</label>
                            <input type="text" name="publication" id="publication">
                        </div>
                        <div class="input-group">
                            <label for="pages">Pages</label>
                            <input type="text" name="pages" id="pages">
                        </div>
                        <div class="input-group"> 
                            <label for="isbn">ISBN</label>
                            <input type="text" name="isbn" id="isbn">
                        </div>
                        <div class="input-group">
                            <label for="price">Price</label>
                            <input type="text" name="price" id="price">
                        </div>

                       
                    </div>
                </form>
                <form action="" method="post" class="type-1">
                    <div>
                        <h3>Member</h3>
                        <div class="input-group">
                            <label for="id">member id</label>
                            <input type="text" name="id" id="id">
                            <button>search</button>
                        </div>
                        <div class="input-group">
                            <label for="name">member name</label>
                            <input type="text" name="name" id="name">
                        </div>
                        <div class="input-group">
                            <label for="gender">Gender</label>
                            <input type="text" name="name" id="name">
                           
                        </div>
                        <div class="input-group">
                            <label for="dob">DOB</label>
                            <input type="text" name="dob" id="dob">
                        </div>
                        <div class="input-group">
                            <label for="address">Address</label>
                            <input type="text" name="address" id="address">
                        </div>
                        <div class="input-group">
                            <label for="contact">Contact</label>
                            <input type="text" name="contact" id="contact">
                        </div>
                        <div class="input-group"> 
                            <label for="email">Email</label>
                            <input type="text" name="email" id="email">
                        </div>
                        <div class="input-group">
                            <label for="qualification">Qualification</label>
                            <input type="text" name="qualification" id="qualification">
                        </div>
                    </div>
                </form>
            </div>
            
        </div>
        
    </main>
    <footer>
        <p>&copy;2024, Onlits Learning Solutions</p>
    </footer>
</body>
</html>