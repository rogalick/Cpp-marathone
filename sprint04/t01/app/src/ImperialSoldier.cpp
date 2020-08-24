#include "ImperialSoldier.h"
#include "Sword.h"
#include "StormcloakSoldier.h"

ImperialSoldier::ImperialSoldier() {
    m_health = 100;
}
ImperialSoldier::~ImperialSoldier() {
    delete m_weapon;
}
void ImperialSoldier::setWeapon(Sword* sword) {
    m_weapon = sword;
}
void ImperialSoldier::attack(StormcloakSoldier& enemy) {
    std::cout << "Imperial soldier attacks and deals ";
    if (enemy.getHealth() < m_weapon->getDamage())
        std::cout << enemy.getHealth();
    else 
        std::cout << m_weapon->getDamage();
    std::cout << " damage" <<std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
void ImperialSoldier::consumeDamage(int amount){
    std::cout << "Imperial soldier consumes ";
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
int ImperialSoldier::getHealth() const {
    return m_health;
}
