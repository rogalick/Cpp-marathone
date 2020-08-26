#pragma once
#include "food.h"
#include <iostream>
#include <string>
class FoodItem;

class AbstractWizard {
    protected:
    virtual void deductFoodType(std::string food) = 0;
};

class MightyWizard : public AbstractWizard {
    public:
    void checkFood(std::nullptr_t nu);
    void checkFood(FoodItem &Food);
    void checkFood(FoodItem *Food);
    MightyWizard(std::string &&name);
    void deductFoodType(std::string food) override;
    private:
};