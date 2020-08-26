#include "food.h"
std::string ApplePie::gettype(){
    return "ApplePie";
}

std::string HoneyNut::gettype(){
    return "HoneyNut";
}

std::string Sweetroll::gettype(){
    return "Sweetroll";
}

std::string PoisonedFood::gettype(){
    return "Poison";
}
void ApplePie::setType(){
    type =FoodType::ApplePie;
}
void HoneyNut::setType(){
    type =FoodType::HoneyNut;
}
void Sweetroll::setType(){
    type =FoodType::Sweetroll;
}
void PoisonedFood::setType(){
    type =FoodType::PoisonedFood;
}