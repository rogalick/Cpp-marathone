#pragma once

#include <functional>
#include <map>
#include <iostream>

using namespace std;

class Draugr {
    public:
        Draugr(); 
        void shoutPhrase (int shoutNumber) const;

    private:
        double m_health;
        const int m_frostResist;
    };