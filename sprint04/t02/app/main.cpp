#include "dragonborn.h"
#include "algorithmUtils.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]\n";
        return 1;
    }
    Dragonborn drag;
    Dragonborn::Actions act;
    std::map<std::string, Dragonborn::Actions> acts = {
        {"shout",Dragonborn::Actions::Shout},
        {"magic",Dragonborn::Actions::Magic},
        {"weapon",Dragonborn::Actions::Weapon}
    };
    try {
        act = acts.at(std::string(argv[1]));
    }
    catch(...) {
        std::cout << "Invalid actions\n";
        return 1;
    }
    drag.executeAction(act);
}
