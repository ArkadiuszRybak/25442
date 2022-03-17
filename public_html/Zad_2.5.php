<?php
function trojkat($podstawa,$wysokosc)
{
    return $podstawa*$wysokosc/2;
};
function prostokat($podstawa, $wysokosc)
{
    return $podstawa*$wysokosc;
};
function trapez($a, $b, $wysokosc)
{
    return ($a + $b) * $wysokosc / 2;
};

$figura = "trapez";
$podstawa = "12";
$wysokosc = "2";
$a = "10";
$b ="71";

switch($figura)
{
    case("trojkat"):
    {
        echo trojkat($podstawa, $wysokosc);
        break;
    }
    case("prostokat"):
    {
        echo prostokat($podstawa, $wysokosc);
        break;
    }
    case("trapez"):
    {
        echo trapez($a, $b, $wysokosc);
        break;
    }


}
