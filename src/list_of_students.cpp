#include <iostream>
#include <string>
#include <sstream>
#include <vector>

struct Student 
{
    std::string imie;
    std::string nazwisko;
    std::string indeks;
            int semestr;
          float srednia;

    Student(std::string imie_, std::string nazwisko_, std::string indeks_, int semestr_, float srednia_)
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
auto print_listofstudents(std::vector<Student> x,int y)
{
    for(int i=0;i<x.size();i++)
    {
        if(y==1)
            std::cout<<i<<". ";
        std::cout<<x[i].to_string()<<std::endl;
    }std::cout<<std::endl;
}
int main()
{
    std::vector<Student> listastudentow;
    int action;
    listastudentow.push_back(Student{"arkadiusz","rybak","s25442",1,3.2});
    std::string imie, nazwisko, indeks;
    int semestr, ktory_usunac;
    float srednia;
    while(action != 9)
    {
        std::cout<<"1. wyświetl listę studentów \n2. dodaj studenta\n3. usuń studenta\n9. zamknij program\n";
        std::cin>>action;
        switch(action)
        {
            case 1:
                print_listofstudents(listastudentow,0);
                break;
            case 2:
                std::cout<<"podaj imie nazwisko indeks semestr i średnią\n";
                std::cin>>imie>>nazwisko>>indeks>>semestr>>srednia;
                listastudentow.push_back(Student{imie,nazwisko,indeks,semestr,srednia});
                break;
            case 3:
                std::cout<<"krórego studenta chcesz usunąć? \n";
                print_listofstudents(listastudentow,1);
                std::cin>>ktory_usunac;
                listastudentow.erase(listastudentow.begin()+ktory_usunac);
                break;
            case 9:
                break;
            default:
                break;
        }
    }    
    
    
    
    
    
    
    
    
    
    
    
    
    // int i = 0;
    // while(i<4)
    // {
    //     std::string imie, nazwisko, indeks;

    //     int semestr;
    //     float srednia;
    //     std::cin>>imie>>nazwisko>>indeks>>semestr>>srednia;
    //     listastudentow.push_back(Student{imie,nazwisko,indeks,semestr,srednia});
    //     i++;
    // }
    // for(int i=0;i<listastudentow.size();i++)
    // {
    //     std::cout<<listastudentow[i].to_string()<<std::endl;
    // }
} 

