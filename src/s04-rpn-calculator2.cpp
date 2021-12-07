#include <iostream>
#include <string>
#include <cmath>


auto main(int argc, char *argv[]) -> int
{
    for(int i=2; i<argc; i+=2)
    {
        std::string znak = std::string(argv[i]);
        if(znak.compare("+")!=0&&znak.compare("-")!=0&&znak.compare("x")!=0&&znak.compare("/")!=0&&znak.compare("//")!=0&&znak.compare("%")!=0&&znak.compare("^")!=0&&znak.compare("sqrt")!=0)//option+z zeby sie zwinelo
        {
            std::cout<<"zapisz dzialanie w postaci: LICZBA dzialanie LICZBA dzialanie LICZBA itd. Pamietaj jednak zeby po sqrt nie podac liczby, poniewaz jest to pierwiastek kwadratowy\n";
            return 0;
        }
        else if(znak.compare("sqrt")==0)
        {
            i--;
        }
    }
        float wynik=atof(argv[1]);
        for(int i=2; i<argc; i+=2)
        {
            if(std::string(argv[i]).compare("+")==0)
            {
                wynik+=atof(argv[i+1]);
            }
            else if(std::string(argv[i]).compare("-")==0)
            {
                wynik-=atof(argv[i+1]);
            }
            else if(std::string(argv[i]).compare("x")==0)
            {
                wynik*=atof(argv[i+1]);
            }
            else if(std::string(argv[i]).compare("/")==0)
            {
                wynik/=atof(argv[i+1]);
            }
            else if(std::string(argv[i]).compare("//")==0)
            {
                wynik=std::round(wynik/atof(argv[i+1]));
            }
            else if(std::string(argv[i]).compare("%")==0)
            {
                wynik=int(wynik)%atoi(argv[i+1]);
            }
            else if(std::string(argv[i]).compare("^")==0)
            {
                wynik=std::pow(wynik, atoi(argv[i+1]));
            }
            else if(std::string(argv[i]).compare("sqrt")==0)
            {
                wynik=std::sqrt(wynik);
                i-=1;
            }
        }
    std::cout<<wynik<<std::endl;
    
}