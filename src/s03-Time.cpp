#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

struct Time
{
    public:
    int godzina, minuta, sekunda;
    enum time_of_day_ {rano, dzien, wieczor, noc, error};

    Time(int h, int m, int s)
    {
        this->godzina = h;
        this->minuta = m;
        this->sekunda = s;
    }

    std::string const to_string()
    {
        auto minuty = std::ostringstream{};
        auto sekundy = std::ostringstream{};
        auto godziny = std::ostringstream{};
        if(godzina<10)
            {godziny<<'0'<<godzina<<':';}
        else
            {godziny<<godzina<<':';}
        if(minuta<10)
            {minuty<<'0'<<minuta<<':';}
        else
            {minuty<<minuta<<':';}
        if(sekunda<10)
            {sekundy<<'0'<<sekunda;}
        else
            {sekundy<<sekunda;}
        return godziny.str()+minuty.str()+sekundy.str();
    }

    auto next_hour()->void
    {
        godzina = (godzina + 1) % 24;
    }
    auto next_minute()->void
    {
        if(minuta+1==60)
        {
            minuta = 0;
            next_hour();
        }
        else
        {
            minuta++;
        }
    }
    auto next_second()->void
    {
        if(sekunda+1==60)
        {
            sekunda = 0;
            next_minute();
        }
        else
        {
            sekunda++;
        }
    }
    auto time_of_day()->time_of_day_
    {
        if(godzina>=6&&godzina<=11)
        {
            return rano;
        }
        if(godzina>=12&&godzina<17)
        {
            return dzien;
        }
        if(godzina>=17&&godzina<22)
        {
            return wieczor;
        }
        if(godzina>=0&&godzina<6||godzina>=22)
        {
            return noc;
        }
        else
        {
            return error;
        }
    }

    auto to_string(time_of_day_ x)->std::string
    {
        if(x==rano)
        {
            return "rano";
        }
        else if(x==dzien)
        {  
            return "dzien";
        }
        else if(x==wieczor)
        {  
            return "wieczor";
        }
        else if(x==noc)
        {
            return "noc";
        }
        else if(x==error)
        {
            return "error";
        }
        else
        {
            return "error";
        }
    }
    auto count_seconds() const -> uint64_t
    {
        return godzina*3600+minuta*60+sekunda;
    }
    auto count_minutes() const -> uint64_t
    {
        return godzina*60+minuta;
    }
    auto time_to_midnight() const -> Time {
        Time time_to_mn(0,0,0);
        if(sekunda>0)
        {
            time_to_mn.sekunda = 60 - sekunda;
            time_to_mn.minuta = 59 - minuta;
            time_to_mn.godzina = 23 - godzina; 
        }       
        else if(minuta>0)
        {
            time_to_mn.minuta = 60 - minuta;
            time_to_mn.godzina = 23 - godzina;
        }
        else
            time_to_mn.godzina = 24 - godzina;
        return time_to_mn;
    }
};
auto main()->int
{
    auto czas1=Time(11,22,56);
    std::cout<<czas1.to_string()<<std::endl;
    czas1.next_second();
    std::cout<<czas1.to_string()<<std::endl;
    std::cout<<czas1.to_string(czas1.time_of_day())<<std::endl;
    std::cout<<czas1.count_seconds()<<std::endl;
    std::cout<<czas1.count_minutes()<<std::endl;
    std::cout<<czas1.time_to_midnight().to_string() << "\n";

}