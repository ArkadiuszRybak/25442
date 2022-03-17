<?php

function rzut_kostka($x)
{
    //$tablica = array();
    for($i=0;$i<$x;$i++)
    {
        $tablica[] = rand(1,6);
    }
    return $tablica;
}
$tablica = rzut_kostka(10);
for($i=0;$i<10;$i++)
{
    echo $tablica[$i];
    echo ", ";
}