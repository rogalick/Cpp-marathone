#pragma once
#include "wizard.h"
#include <map>

enum class FoodType {
    ApplePie,
    HoneyNut,
    Sweetroll,
    PoisonedFood,
    Invalid,
};

class FoodItem {
    public:
   virtual std::string gettype() = 0;
   FoodType type;
};

class ApplePie : public FoodItem {
 std::string gettype() override;
void setType();

};

class HoneyNut : public FoodItem{
 std::string gettype() override;
void setType();

};

class Sweetroll : public FoodItem{
 std::string gettype() override;
void setType();

};

class PoisonedFood : public FoodItem{
 std::string gettype() override;
void setType();

};