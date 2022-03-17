<?php

function data_urodzenia($pesel)
{
    $dzien_urodzenia = "";
    $dzien_urodzenia=$dzien_urodzenia."20".substr($pesel, 4, 2)."-";
    $miesiac = (substr($pesel, 2,2));

    if(intval($miesiac)<30)
    {
        $dzien_urodzenia=$dzien_urodzenia."0".(intval($miesiac)-20)."-";
    }else
    {
        $dzien_urodzenia=$dzien_urodzenia.$miesiac."-";
    }
    $dzien_urodzenia=$dzien_urodzenia.(substr($pesel, 0,2));
    return $dzien_urodzenia;
}
echo data_urodzenia("0326032034125");
