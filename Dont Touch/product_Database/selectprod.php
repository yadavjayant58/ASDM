<?php
include_once("myConn.php");
$sql="select * from mydb4.product";
echo "$sql";
$result=mysqli_query($conn,$sql);
echo "<form action='generatebill.php'>";
echo "<ul>";
while($arr=mysqli_fetch_row($result)){
	echo "<li>.".$arr[0]."---->".$arr[1]."----->".$arr[2]."<input type='checkbox' name='p[]' value='".$arr[0]."'></li>";
	
}
echo "</ul><input type='submit' name='btn'></form>";

?>