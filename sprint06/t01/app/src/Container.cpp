#include "Player.h"

Container::Container(bool isLocked, const LockpickDifficulty difficulty) :m_isLocked(isLocked),m_difficulty(difficulty){
 
}

bool Container::tryToOpen(LockpickDifficulty skill){
    if (skill >= lockDifficulty())
        return true;
    else
        return false;
    

}

std::string Barrel::name() const{
    return "Barrel";
}

std::string Chest::name() const{
    return "Chest";
}

std::string Safe::name() const{
    return "Safe";
}
bool Container::isLocked() const{
    return m_isLocked;
}

LockpickDifficulty Container::lockDifficulty() const{
return m_difficulty;
}