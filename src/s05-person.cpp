#include <iostream>
#include <string>

class Person
{
    public:
    std::string name, surname;
    Person(std::string imie,std::string nazwisko)
    {
        this -> name = imie;
        this -> surname = nazwisko;
    }
    virtual std::string to_string() const = 0;
};
class Mr : public Person
{
    public:
    Mr(std::string name, std::string surname) : Person(name, surname){}
    
    auto to_string() const -> std::string
    {
        return "Mr " + name + " " + surname + "\n";
    }

};
class Mrs : public Person
{
    public:
    Mrs(std::string name, std::string surname) : Person(name, surname){}
    
    auto to_string() const -> std::string
    {
        return "Mrs " + name + " " + surname + "\n";
    }

};
class King : public Person
{
    public:
    King(std::string name, std::string surname) : Person(name, surname){}
    
    auto to_string() const -> std::string
    {
        return "King " + name + " " + surname + "\n";
    }

};
class Queen : public Person
{
    public:
    Queen(std::string name, std::string surname) : Person(name, surname){}
    
    auto to_string() const -> std::string
    {
        return "Queen " + name + " " + surname + "\n";
    }

};


class Greeting
{
	public:
	virtual std::string greet(Person const& x) = 0;
};
class Hello : public Greeting
{
	std::string greet(Person const& x)
    {
		return "Hello " + x.to_string();
	}
};
class Good_evening : public Greeting
{
	std::string greet(Person const& x)
    {
		return "Good_evening " + x.to_string();
	}
};
class Farewell : public Greeting
{
	std::string greet(Person const& x)
    {
		return "Farewell " + x.to_string();
	}
};

auto who_is_it(Person const& person)->std::string
{
	return person.to_string();
}

auto main() -> int
{
    Person* person_1 = new Mr("person1","first");
    Person* person_2 = new Mrs("person2","second");
    Person* person_3 = new King("person3","third");
    Person* person_4 = new Queen("person4","fourth");
    
    //std::cout<<arek->to_string();     dlaczego po prostu nie tak?
    std::cout<<who_is_it(*person_1);
    std::cout<<who_is_it(*person_2);
    std::cout<<who_is_it(*person_3);   
    std::cout<<who_is_it(*person_4);   
    Greeting* hello = new Hello();
	Greeting* good_evening = new Good_evening();
	Greeting* farewell = new Farewell();
	std::cout << hello->greet(*person_1);
	std::cout << good_evening->greet(*person_1);
	std::cout << farewell->greet(*person_1);
    
}