#pragma once
#include <iostream>



template<typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    return (val >= from && val <= to);
}

class Sword;
class StormcloakSoldier;

class ImperialSoldier final {
    public:
    ImperialSoldier();
    ~ImperialSoldier();

    void setWeapon(Sword* sword);
    void attack(StormcloakSoldier& enemy);
    void consumeDamage(int amount);
    int getHealth() const;

    private:
        Sword* m_weapon;
        int m_health;
};