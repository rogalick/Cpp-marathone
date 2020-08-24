#include "draugr.h"


Draugr::Draugr():Draugr::Draugr(50,100){};
Draugr::Draugr(int resist):Draugr::Draugr(resist,100){};

Draugr::Draugr(int resist, double health) :m_frostResist(resist){
    m_health = health;
    cout << "Draugr with " << m_health <<" health and " << m_frostResist << "% frost resist was born!" <<endl;
};
void Draugr::shoutPhrase(int shoutnumber) const{
    map<int,string> argh= {
        {0,"Qiilaan Us Dilon!"}, 
        {1,"Bolog Aaz, Mal Lir!"},
        {2,"Kren Sosaal!"},
        {3,"Dir Volaan!"},
        {4,"Aar Vin Ok!"},
        {5,"Unslaad Krosis!"},
        {6,"Faaz! Paak! Dinok!"},
        {7,"Aav Dilon!"},
        {8,"Sovngarde Saraan!"}
    };
     cout << "Draugr " << m_name << " (" << m_health << " health, "<< m_frostResist << "% frost resist) shouts:" << endl;
     cout << argh[shoutnumber] <<endl;
}



Draugr::Draugr(Draugr& other) : m_health(other.m_health), m_frostResist(other.m_frostResist) {
    std::cout << "Draugr with " << m_health << " health and " << m_frostResist;
    std::cout << "% frost resist was born!" << std::endl;
    std::cout << "Copy constructor was called" << std::endl;
}


Draugr::Draugr(Draugr&& other) : m_health(other.m_health), m_frostResist(other.m_frostResist) {
    std::cout << "Draugr with " << m_health << " health and " << m_frostResist;
    std::cout << "% frost resist was born!" << std::endl;
    std::cout << "Move constructor was called" << std::endl;
}

void Draugr::setName(const std::string&& name) {
    m_name = name;
}
