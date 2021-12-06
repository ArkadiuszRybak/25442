#include <iostream>
#include <string>

struct Struktura 
{
    int zmienna;
    Struktura(int a )
    {
        this->zmienna = a;
    }
    auto return_this()->Struktura*
    {
        return this;
    }
};
auto main()->int
{
    Struktura test(3);
    std::cout<<test.return_this()<<std::endl;
    std::cout<<&test<<std::endl;
}
