#include <iostream>
#include <string>

struct Cos 
{
    std::string nazwa;
    Cos(std::string a)
    {
        this->nazwa = a;
    }
    ~Cos()
    {
        std::cout<<"DESTRUCTION! "<<nazwa<<std::endl;
    }
};
auto main()->int 
{
    Cos a ("losowe slowo");
}
