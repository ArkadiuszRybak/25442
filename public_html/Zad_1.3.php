<?php


$miesiac = 2;
$rok = 2000;


if ($miesiac == 1){
    echo 31;
}elseif ($miesiac ==2){
    if (($rok % 4 == 0 && $rok % 100 != 0)||($rok % 400 == 0)){
        echo 29;
    }else{
        echo 28;
    }
}elseif ($miesiac == 3){
    echo 31;
}elseif ($miesiac == 4){
    echo 30;
}elseif ($miesiac == 5){
    echo 31;
}elseif ($miesiac == 6){
    echo 30;
}elseif ($miesiac == 7){
    echo 31;
}elseif ($miesiac == 8){
    echo 31;
}elseif ($miesiac == 9){
    echo 30;
}elseif ($miesiac == 10){
    echo 31;
}elseif ($miesiac == 11){
    echo 30;
}elseif ($miesiac == 12){
    echo 31;
}else{
    echo "rok ma 12 miesiecy";
}