#include "draugr.h"
#include "algorithmUtils.h"


static void validator(size_t idx, char *error) {
    if (error[idx] != '\0') {
        throw false;
    }
}

int main(int argc, char **argv) {
    if (argc < 2 || argc > 4) {
         std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]\n";
         return 1;
    }
    int sd;
    int fd;
    int gd;
     try {
         size_t idx;
         sd = stoi(std::string(argv[1]), &idx);
         validator(idx, argv[1]);
         if (argc > 2){
            fd = stoi(std::string(argv[2]), &idx);
            validator(idx, argv[2]);
            if (argc == 4){
                gd = stoi(std::string(argv[3]), &idx);
                validator(idx, argv[3]);
            }
        }
         if (!IsInRange(sd, 0, 8))
            throw false;
     }
     catch(...) {
         std::cerr << "Invalid shoutNumber\n";
         return 1;
     }
     if(gd > 10000){
         std::cerr << "error\n"; 
         return 1;
     }
    if (argc == 2){ 
        Draugr drag;
        drag.shoutPhrase(sd);
    }
    if (argc == 3) {
        Draugr drag(fd);
        drag.shoutPhrase(sd);
    }
    if (argc == 4) {
    Draugr drag(fd,gd);
    drag.shoutPhrase(sd);
    }
   
}
