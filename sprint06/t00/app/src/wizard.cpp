#include "wizard.h"

MightyWizard::MightyWizard(std::string &&name){
}

void MightyWizard::checkFood(FoodItem &Food){
deductFoodType(Food.gettype());
}
void MightyWizard::checkFood(FoodItem *Food){
deductFoodType(Food->gettype());

}
void MightyWizard::checkFood(std::nullptr_t nu){
    std::cout << "<wtf> . Ugh, not again!" << std::endl;
}

void MightyWizard::deductFoodType(std::string food){
    std::cout << food; 
    if (food == "ApplePie" || food == "Poison")
        std::cout <<". Ugh, not again!" <<std::endl;
    else
        std::cout <<". Mmm, tasty!" <<std::endl;
    
}