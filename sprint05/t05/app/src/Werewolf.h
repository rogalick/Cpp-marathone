#pragma once
#include "Wolf.h"
#include "Human.h"

class Werewolf : public Human, public Wolf{
public:
    Werewolf();
    ~Werewolf();
};