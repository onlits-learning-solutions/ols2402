<?php

if (isset($_GET['status']) && ($_GET['status']) == 1)
    $message = "Invalid email/password! Please retry...";
elseif (isset($_GET['status']) && ($_GET['status']) == 2)
    $message = "You have successfully logged out!";
elseif (isset($_GET['status']) && ($_GET['status']) == 3)
    $message = "Session invalid. Please login again!";
else
    $message = NULL;

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Library Management System</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <main class="col-2">
        <div style="padding: 50px; padding-top: 150px;">
            <h1 style="text-align: center;">Library<br><br>Management<br><br>System</h1>
        </div>
        <div>
            <div style="margin: 20px; background-color:lightgray; padding: 50px;text-align: center; border-radius: 10px; height: 500px;">
                <h1>Sign in</h1>
                <form action="user-authentication.php" method="post" id="sign-in">
                    <label for="user-id">Email</label>
                    <input type="email" name="email" id="email">
                    <label for="password">Password</label>
                    <input type="password" name="password" id="password">
                    <button>Sign In</button>
                </form>
                <p>Don't have an account. <a href="sign-up.html">Sign up</a></p>
                <p id="message" style="color: red;"><?= $message ?></p>
            </div>
        </div>
    </main>
</body>

</html>