<?php
$server="Localhost";
$username="root";
$password="";
$conn=mysqli_connect($server,$username,$password);
if($conn){
   echo "success";
}
else
{
    echo "failure";
}

?>