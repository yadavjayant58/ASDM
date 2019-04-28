<?php
include_once("myConn.php");
$pid=$_GET['pid'];
$pname=$_GET['pname'];
$qty=$_GET['qty'];
$price=$_GET['price'];

$sql="insert into mydb4.product values(".$pid.",'".$pname."',".$qty.",".$price.")";
echo "$sql";
if(mysqli_query($conn,$sql)){
	
	echo "<h1>Record inserted</h1>";
}
else{
	
	echo "<h1>Record not  inserted</h1>";
}

?>