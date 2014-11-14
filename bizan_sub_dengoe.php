<?php
require_once("data/db_info.php");
$s=mysql_connect($SERV,$USER,$PASS) or die("失敗しました");
mysql_set_charset("utf8");
mysql_select_db($DBNM);

$updir = "./";
$filename = $_FILES['sample']['name'];
$date = $_POST['date'];
$username = $_POST['username'];
 


//テーブルのカウントを取得
$result = mysql_query("SELECT * FROM bizanrokuon");
$num_rows = mysql_num_rows($result);
echo $num_rows;


mysql_close($s);
?>
