<?php

$x = 8;
$y = 5;
$z = 4;

if ($x>$y && $x>$z){
    if($x * $x == ($y * $y + $z * $z)){
        echo "spelnia twierdzenie pitagorasa";
    }else{
        echo "nie spelnia twierdzenia pitagorasa";
    }
}elseif($z>$y && $z>$x){
    if($z * $z == ($y * $y + $x * $x)) {
        echo "spelnia twierdzenie pitagorasa";
    }else{
        echo "nie spelnia twierdzenia pitagorasa";
    }
}else{
    if($y * $y == ($z * $z + $x *$x)) {
        echo "spelnia twierdzenie pitagorasa";
    }else{
        echo "nie spelnia twierdzenia pitagorasa";
    }
}