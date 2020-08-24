#pragma once

#include <functional>
#include <map>
#include <iostream>

using namespace std;

class Draugr {
    public: 
        Draugr(); 
        Draugr(int resist);
        Draugr(int resist, double health);
        
        void shoutPhrase (int shoutNumber) const;

        void setName(const std::string&& name);

        Draugr(Draugr& other);
        Draugr(Draugr&& other);

    private:
        std::string m_name;
        double m_health;
        const int m_frostResist;
    };