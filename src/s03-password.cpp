#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int 
{
    if(argv[1])
    {
    auto password = std::string{};
    do
    {
        std::cout << "Password: \n";
        std::getline (std::cin, password);
    }
    while(argv[1]!=password);
    std::cout << "OK! \n";
    }
    else
    {
        std::cout << "Podaj poprawne haslo \n";
    }
}