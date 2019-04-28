<?php
include_once("myConn.php");
$arr=$_GET['p'];
$total=0;
echo "<br>";
for($i=0;$i<count($arr);$i++)
{
	echo "<b>";
	$que="SELECT * FROM mydb4.product WHERE pid=$arr[$i]";	 
	$que2=mysqli_query($conn,$que);
	$product[$i] = mysqli_fetch_row($que2);
}
foreach($product as $k=>$v)
{
	
	foreach($v as $k=>$value)
	{
		echo "$value &nbsp &nbsp ";
		if($k==3)
			echo "<br>";
	}
	foreach($v as $k=>$value)
	{
		if($k==3)
		$total=$total+$value;
	}
}
echo "==============Total: ".$total;
?>