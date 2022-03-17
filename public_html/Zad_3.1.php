<?php
function losowa_liczba($x)
{
    $tablica = [];
    for($i=0;$i<100;$i++)
    {
        $tablica[] =rand(0,10);
        echo $tablica[$i]." ";
    }
    echo "<br />";
    return $tablica[$x];
}

echo losowa_liczba(3);
echo "<br />";
echo losowa_liczba(1);