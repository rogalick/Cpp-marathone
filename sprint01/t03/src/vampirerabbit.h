#include <iostream>
#include <map>
#include <string>
#include <list>
#include <random>

#include <unistd.h>
#include <time.h>

enum class Gender
{
    Male,
    Female
};

struct Rabbit
{
    Gender gender;
    bool isVampire;
    int age;
};

void randrabbit(int sum, std::map<int, int>& map,
                std::list<Rabbit>& l_rbb);
void oldRabbit(std::list<Rabbit>& l_rbb);
void dierabbit(std::map<int, int>& map,
                std::list<Rabbit>& l_rbb);
void setvampire(std::map<int, int>& map,
                std::list<Rabbit>& l_rbb);