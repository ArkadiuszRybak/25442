#include <iostream>
#include<cstdlib>
#include<ctime>
#include <string>  

void print(std::string list[30][30])
{   std::cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n\n";
    for(int y=0;y<30;++y)
    {   
        if(y<9)
            std::cout<< y+1<<"    ";
        else
            std::cout<<y+1<<"   ";
        for(int x=0;x<30;++x)
        {
            std::cout<<list[y][x]<<"  ";
        }std::cout<<std::endl;
    }
}
enum Options 
{
    OptionZ,
    OptionP, 
    OptionF,
    Option_Invalid,
};
Options resolveOption(std::string input) 
{
    if( input == "Z" ) return OptionZ;
    if( input == "P" ) return OptionP;
    if( input == "F" ) return OptionF;
    return Option_Invalid;
}
void gameover(int invis[32][32],std::string vis[30][30])
{   std::cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n\n";
    for(int y=0;y<30;++y)
    {
        if(y<9)
            std::cout<< y+1<<"    ";
        else
            std::cout<<y+1<<"   ";
        for(int x=0;x<30;++x)
        {

            if(vis[y][x]=="X" && invis[y+1][x+1]==1)
            {
                std::cout<<"+  ";
            }
            else if(vis[y][x]!="X" && invis[y+1][x+1]==1)
            {
                std::cout<<"*  ";
            }
            else
            {
                std::cout<<"   ";
            }
        }std::cout<<std::endl;
    }
}

auto main() -> int
{
    int invisible_grid [32][32];
    std::string visible_grid [30][30];
    std::fill(invisible_grid[0], invisible_grid[0] + 32 * 32, 0);
    std::fill(visible_grid[0], visible_grid[0] + 30 * 30, " ");
    srand(time(0));
    int bombs[15];
    int secured_bombs=0;
    for(int i = 0; i<15; i++) 
    {
      bombs[i]=rand()%900;
      //std::cout<< bombs[i]%30+1<<","<<bombs[i]/30+1<<" ";
      invisible_grid[bombs[i]/30+1][bombs[i]%30+1]=1;
    };
    int x,y;
    std::string action;

    while(true)
    {
        while(true)
        {
            while (std::cout << "podaj współrzędne i polecenie \n" && !(std::cin >> x>>y>>action)) 
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "zły input \n";
            }
            if(x<1||x>30||y<1||y>30)
                std::cout<<"podaj współrzędne w przedziale <0,30>\n";
            else
                break;
            
        }
        switch (resolveOption(action))
        {
            case OptionZ:
            {

                if(invisible_grid[y][x]==1&&visible_grid[y-1][x-1]==" ")
                {
                    ++secured_bombs;
                }
                //std::cout<<secured_bombs;
                visible_grid[y-1][x-1]="X";
                if(secured_bombs==15)
                {
                    std::cout<<"!!!WYGRANA!!!";
                    return 0;
                }
                else
                {
                    print(visible_grid);
                    break;
                }
            }   
            case OptionP:
            {
                if(visible_grid[y-1][x-1]=="X")
                {
                    std::cout<<"oznaczyłeś te pole jako bombę jeśli chcesz je odkryć najpierw usuń oznaczenie polecieniem F\n";
                    break;
                }
                if(invisible_grid[y][x]==1)
                {
                    std::cout<<"GAME OVER"<<"\n";
                    gameover(invisible_grid,visible_grid);
                    return 0;
                }
                else 
                {
                    if(invisible_grid[y-1][x-1]+invisible_grid[y-1][x]+invisible_grid[y-1][x+1]+invisible_grid[y][x-1]+invisible_grid[y][x+1]+invisible_grid[y+1][x-1]+invisible_grid[y+1][x]+invisible_grid[y+1][x+1]==0)
                    {
                        visible_grid[y-1][x-1] = ".";
                    }
                    else
                    {
                        visible_grid[y-1][x-1]=std::to_string(invisible_grid[y-1][x-1]+invisible_grid[y-1][x]+invisible_grid[y-1][x+1]+invisible_grid[y][x-1]+invisible_grid[y][x+1]+invisible_grid[y+1][x-1]+invisible_grid[y+1][x]+invisible_grid[y+1][x+1]);
                    }
                    print(visible_grid);
                    break;

                }
            } 
            case OptionF:
            {

                if(invisible_grid[y][x]==1&&visible_grid[y-1][x-1]=="X")
                {
                    --secured_bombs;
                }
                visible_grid[y-1][x-1]=" ";
                //std::cout<<secured_bombs;
                print(visible_grid);
                break;
            }
            case Option_Invalid:
            {
                std::cout<<"złe polecenie Podaj polecenie: Z-oznaczenie jako bomba, P-sprawdzenie, F-odznaczenie pola oznaczonego jako bomba\n";
                break;
            }
            default:
            {
                std::cout<<"coś poszło nie tak spróbuj ponownie";
                return 0;
            }
        }
    }
}
