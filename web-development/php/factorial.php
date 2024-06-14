<?php
$n = $_POST['number'];
$fact = 1;

for($i=$n; $i>=1; $i--)
    $fact *= $i;

echo "Factorial is $fact.";