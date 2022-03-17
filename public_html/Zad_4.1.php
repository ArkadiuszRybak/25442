<?php

function max_tablicy_for($tablica)
{
    $max = $tablica[0];
    for($i =0; $i<sizeof($tablica); $i++)
    {
        if($tablica[$i]>$max)
        {
            $max = $tablica[$i];
        }
    }
    return $max;
}
function max_tablicy_while($tablica)
{
    $i =0;
    $max =$tablica[0];
    while($i<sizeof($tablica))
    {
        if($tablica[$i]>$max)
        {
            $max = $tablica[$i];
        }
        $i++;
    }
    return $max;
}
function max_tablicy_do_while($tablica)
{
    $i=0;
    $max = $tablica[0];
    do
    {
        if($tablica[$i]>$max)
        {
            $max = $tablica[$i];
        }
        $i++;
    }while($i<sizeof($tablica));
    return $max;
}
function max_tablicy_foreach($tablica)
{
    $max = $tablica[0];
    foreach($tablica as $element)
    {
        if($element > $max)
        {
            $max = $element;
        }
    }
    return $max;

}

for($i=0;$i<30;$i++)
{
    $tablica[] = rand(0, 10000);
    echo $tablica[$i];
    echo "<br />";
}echo "<br />";

echo max_tablicy_for($tablica);
echo "<br />";
echo max_tablicy_while($tablica);
echo "<br />";
echo max_tablicy_do_while($tablica);
echo "<br />";
echo max_tablicy_foreach($tablica);
