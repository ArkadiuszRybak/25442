#include <iostream>
#include <string>
#include <sstream>

struct student 
{
    std::string imie;
    std::string nazwisko;
    std::string indeks;
            int semestr;
          float srednia;

    student(std::string imie_, std::string nazwisko_, std::string indeks_, int semestr_, float srednia_)
    {
        this->imie = imie_;
        this->nazwisko = nazwisko_;
        this->indeks = indeks_;
        this->semestr = semestr_;
        this->srednia = srednia_;
    }

    std::string const to_string()
    {
        auto dane = std::ostringstream{};
        dane<<imie<<' '<<nazwisko<<' '<<indeks<<' '<<semestr<<' '<<srednia;
        return dane.str();
    }

};
int main()
{
    auto arek =student{"Arkadiusz","Rybak","s25442",1,0};
    std::cout<<arek.to_string()<<std::endl; 

    return 0;
}
