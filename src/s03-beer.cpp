#include <iostream>
#include <string>
#include <cstdlib>

auto main(int argc, char* argv[]) -> int 
{
    auto temp = argv[1];
    if(temp)
    {
        auto const a = std::atoi(temp);
        for(int i=a;i>0;i--)
        {
         std::cout<<i<<" bottles of beer on the wall, no more bottles of beer.\n";
            std::cout<<"Take one down, pass it around, "<<i-1<<" bottles of beer on the wall..\n";   
        } 
        std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more,"<<99<<" bottles of beer on the wall...\n";
    }
    else
    {
        for(int i=99; i>0;i--)
        {
            std::cout<<i<<" bottles of beer on the wall, no more bottles of beer.\n";
            std::cout<<"Take one down, pass it around, "<<i-1<<" bottles of beer on the wall..\n";
        }
        std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall...\n";
    }
}