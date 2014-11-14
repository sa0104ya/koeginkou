<?php
require_once("data/db_info.php");
$s=mysql_connect($SERV,$USER,$PASS) or die("失敗しました");
mysql_set_charset("utf8");
mysql_select_db($DBNM);

$updir = "./";
$filename = $_FILES['sample']['name'];
$date = $_POST['date'];
$username = $_POST['username'];
 
//is_uploaded_file でファイルがアップロードされたかどうか調べる
if (is_uploaded_file($_FILES["sample"]["tmp_name"])) {
 
    //move_uploaded_file を使って一時的な保存先から指定のフォルダに移動させる
    if (move_uploaded_file($_FILES["sample"]["tmp_name"], $updir.$filename)) {
    	var_dump("成功");
		echo $date.$username.$filename."をアップロードしました。";
		mysql_query("INSERT INTO tokushimarokuon (filename,date,username) VALUES ('$filename','$date','$username')");

		//テーブルのカウントを取得
		$result = mysql_query("SELECT * FROM tokushimarokuon");
		$num_rows = mysql_num_rows($result);
		echo "$num_rows Rows\n";

    } else {
        var_dump("失敗");
    }
} else {
	$re=mysql_query("SELECT * FROM tokushimarokuon ORDER BY date");
	while($kekka=mysql_fetch_array($re)){
		print $kekka[2];
		print " : ";
		print $kekka[1];
		print " : ";
		print $kekka[0];
		print '<form method="post" action="'.$kekka[0].'"><INPUT TYPE="submit" VALUE="聞く"></form>';
	}
}

mysql_close($s);
?>
