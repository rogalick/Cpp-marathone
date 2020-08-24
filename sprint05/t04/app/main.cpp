#include <iostream>
#include <sstream>
#include "ImperialSoldier.h"
#include "StormcloakSoldier.h"
#include "Sword.h"
#include "Axe.h"
#include "Soldier.h"
#include "Weapon.h"

static void validator(size_t idx, char *error) {
    if (error[idx] != '\0') {
        throw false;
    }
}

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        return 1;
    }
    int sd, ad;
    try {
        size_t idx;
        sd = stoi(std::string(argv[1]), &idx);
        validator(idx, argv[1]);
        ad = stof(std::string(argv[2]), &idx);
        validator(idx, argv[2]);
        if (!IsInRange(sd, 10, 20) || !IsInRange(ad, 10, 20))
            throw false;
    }
    catch(...) {
        std::cerr << "Damage has to bein a range of 10-20 points.\n";
        return 1;
    }
    Sword sword(sd);
    Axe axe(ad);
    ImperialSoldier imperial;
    StormcloakSoldier storm;
    storm.setWeapon(&axe);
    imperial.setWeapon(&sword);
    std::cout << "\n***The battle has begun!***\n\n";
     while (true) {
         storm.attack(imperial);
         imperial.attack(storm);
         std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>\n";
         if (storm.getHealth() <= 0) {
             std::cout << "Imperial has won!" << std::endl << std::endl;
             return 0;
         }
         else if(imperial.getHealth() <= 0){
             std::cout << "Stormcloack has won!" <<std::endl << std::endl;
             return 0;
         }
         
     }    
}
