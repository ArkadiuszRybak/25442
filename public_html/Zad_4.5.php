<?php
function print_grid($tablica)
{
    for($y=0;$y<sizeof($tablica);$++)
    {
        for($x =0;$x<sizeof($tablica);$x++)
        {
            echo $tablica[y][x];
            echo " ";
        }echo "<br />";
    }
}
function check_win($tablica)
{
    for ($i=0;$i<3;$i++)
    {
        if($tablica[0][$i]==$tablica[1][$i]==$tablica[2][$i]&&tablu)
            {
                return $tablica[0]
            }
    }
}

$grid = [[" "," "," "],[" "," "," "],[" "," "," "]];

$tura =1;
while(true)
{
    switch ($tura%2)
    {
        case 1:
        {
            //zapytaj o inputX
            $grid[][]="X";
        }
        case 2:
        {
            //zapytaj o input O
            $grid[][] = "O";
        }
        print_grid($grid);


    }


}

