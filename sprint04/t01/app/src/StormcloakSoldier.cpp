#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Axe.h"


StormcloakSoldier::StormcloakSoldier() {
    m_health = 100;
}
StormcloakSoldier::~StormcloakSoldier() {
    delete m_weapon;
}
void StormcloakSoldier::setWeapon(Axe* axe) {
    m_weapon = axe;
}
void StormcloakSoldier::attack(ImperialSoldier& enemy) {
    std::cout << "StormcloakSoldier attacks and deals ";
    if (enemy.getHealth() < m_weapon->getDamage())
        std::cout << enemy.getHealth();
    else 
        std::cout << m_weapon->getDamage();
    std::cout << " damage" <<std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
void StormcloakSoldier::consumeDamage(int amount){
    std::cout << "StormcloakSoldier soldier consumes ";
    if (m_health < amount) {
        std::cout << m_health;
        m_health = 0;
    }
    else {
        std::cout << amount;
        m_health -= amount;
    }
    std::cout << " of damage" <<std::endl;
}
int StormcloakSoldier::getHealth() const {
    return m_health;
}
