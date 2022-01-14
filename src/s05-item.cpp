#include <iostream>
#include <string>

class Creature
{
    public:
	std::string nazwa;
	int zycie;
	Creature(std::string n, int z) : nazwa(n), zycie(z){}
};
class Item
{
	public:
	virtual void use_on(Creature& x) = 0;
	virtual int strength() const = 0;
    // auto use_on(Creature&) -> void; 
    // auto strength() const -> int;
};
class Weapon : public Item
{
	public:
	void use_on(Creature& x){
	x.zycie -= strength();
	}
	int strength() const
    {
	    return 0;
	}
    
};
class Potion : public Item
{
	public:
	void use_on(Creature& x){
        x.zycie += strength();
	}
	int strength() const
    {
	    return 2;
	}
};
class Sword : public Weapon
{
	void use_on(Creature& x)
    {
	x.zycie -= strength();
		std::cout<<"uzyto miecz \n pkt zycia: "<<x.zycie;
	}
	int strength() const
    {
	    return 2;
	}
};
class Axe : public Weapon
{
	void use_on(Creature& x)
    {
	x.zycie -= strength();
		std::cout<<"uzyto toporu   pkt zycia: "<<x.zycie<<std::endl;
	}
	int strength() const
    {
	    return 2;
	}
};
class Bow : public Weapon
{
	void use_on(Creature& x)
    {
	x.zycie -= strength();
		std::cout<<"uzyto luku  pkt zycia: "<<x.zycie;
	}
	int strength() const
    {
	    return 2;
	}
};
class Health_potion : public Potion
{
	public:
	int uzycia = 0;
	void use_on(Creature& x){
		if(uzycia < 2)
        {
            x.zycie += strength();
			std::cout<<"uzyto poty   pkt zycia: "<<x.zycie<<std::endl;
			this->uzycia++;
		}
		else{
			std::cout<<"nie uzyto poty   pkt zycia: "<<x.zycie<<std::endl;
			this->uzycia++;
		}
   	}
	int strength() const
    {
	    return 2;
	}
};
auto main()->int
{
    Creature creature_1("creature",712);
    Item* pota = new Health_potion();
    Item* topor = new Axe();
    topor->use_on(creature_1);
    pota->use_on(creature_1);
    topor->use_on(creature_1);
    topor->use_on(creature_1);
    pota->use_on(creature_1);
    pota->use_on(creature_1);    
}
