<?php

function czy_pierwsza($liczba)
{
    $ilosc_iteracji=0;
    if($liczba==2)
    {
        return "liczba jest pierwsza";
    }
    if($liczba%2==0){
        return "liczba nie jest pierwsza";
    }
    for($i=3; $i<sqrt($liczba);$i+=2)
        {
            $ilosc_iteracji++;
            if($liczba % $i ==0)
            {
                echo $ilosc_iteracji;
                return "liczba nie jest pierwsza";
            }
        }
    echo $ilosc_iteracji;
    return " liczba jest pierwsza";
}
echo czy_pierwsza(16127);