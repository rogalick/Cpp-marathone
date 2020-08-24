#include "draugr.h"
#include "algorithmUtils.h"


static void validator(size_t idx, char *error) {
    if (error[idx] != '\0') {
        throw false;
    }
}

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]\n";
        return 1;
    }
    int sd;
    try {
        size_t idx;
        sd = stoi(std::string(argv[1]), &idx);
        validator(idx, argv[1]);
        
        if (!IsInRange(sd, 0, 8))
            throw false;
    }
    catch(...) {
        std::cerr << "Invalid shoutNumber\n";
        return 1;
    }
    Draugr drag;
    drag.shoutPhrase(sd);
   
}
