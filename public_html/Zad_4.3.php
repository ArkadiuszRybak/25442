<?php

function tabliczka_mnozenia($a)
{
    for($y=1;$y<=$a;$y++)
    {
        for($x=1;$x<=$a;$x++)
        {
            echo $y * $x;
            if($y * $x<10)
            {
                echo "&nbsp";
                echo "&nbsp";
                echo "&nbsp";
            }else{
                echo "&nbsp";

            }
        }echo "<br />";
    }
}
tabliczka_mnozenia(6);