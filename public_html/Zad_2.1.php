<?php

function rzut_kostka()
{
    return rand(1,6);
}

for ($i = 0; $i<100; $i++)
{
    echo rzut_kostka();
    echo "<br />";
}