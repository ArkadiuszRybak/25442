<?php
function cenzura($zdanie)
{
    $lista_slow[0] = "kurczaczki";
    $lista_slow[1] = "aava";
    foreach($lista_slow as $slowo)
    {
        if(strpos($zdanie, $slowo) !== false)
        {
            $zdanie = str_replace($slowo, "***",$zdanie);
        }else
        {
            return $zdanie;
        }
    }
    return $zdanie;
}
echo cenzura("asdfpioag kurczaczki spaa a aava f ak  kurczaczki asd s:");