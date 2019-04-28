<?php
include_once("myConn.php");
$sql="create table mydb4.product(pid int,pname varchar(20),qty int,price int)";
mysqli_query($conn,$sql);
?>