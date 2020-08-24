#pragma once
#include <iostream>
#include "Soldier.h"
template<typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    return (val >= from && val <= to);
}

class Sword;
class StormcloakSoldier;

class ImperialSoldier final : public Soldier {
public:
    ImperialSoldier();
    ~ImperialSoldier();
};