#include "draugr.h"

Draugr::Draugr() :m_frostResist(50){
    m_health = 100;
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
    cout << "Draugr (" << m_health << " health, "<< m_frostResist << "% frost resist) shouts:" << endl;
    cout << argh[shoutnumber] <<endl;
}



