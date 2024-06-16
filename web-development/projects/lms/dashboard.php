<?php
    session_start();
    $email = $_SESSION['email'];
?>
<h1>Dashboard</h1>
<p><?php echo $email;?></p>