#include "draugr.h"
#include "algorithmUtils.h"
#include <regex>

static void validator(size_t idx, char *error) {
    if (error[idx] != '\0') {
        throw false;
    }
}

static int checknum(char* str){
    int num;
        size_t idx;
        num = stoi(std::string(str), &idx);
        validator(idx, str);
    return num;
}

void threeArguments(char **str, int shout,const std::string name1,
              const std::string name2){
    Draugr drag;
    drag.setName(std::move(name1));
    drag.shoutPhrase(shout);
    Draugr drag2(drag);
    drag2.setName(std::move(name2));
    drag2.shoutPhrase(shout);
    
}

void fourArguments(char **str,int shout,const std::string name1,
              const std::string name2,char **st){
    int health = checknum(st[3]);
    Draugr drag(health);
    drag.setName(std::move(name1));
    drag.shoutPhrase(shout);
    Draugr drag2(drag);
    drag2.setName(std::move(name2));
    drag2.shoutPhrase(shout);
} 


void fiveArguments(char **str,int shout,const std::string name1,
              const std::string name2,char **st){
    int health = checknum(st[3]);
    int resist = checknum(st[4]);
    Draugr drag(health,resist);
    drag.setName(std::move(name1));
    drag.shoutPhrase(shout);
    Draugr drag2(std::move(drag));
    drag2.setName(std::move(name2));
    drag2.shoutPhrase(shout);
}


int main(int argc, char **argv) {
    if (argc < 3 || argc > 5) {
         std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]\n";
         return 1;
    }
    int shout = checknum(argv[1]);
    if (!IsInRange(shout, 0, 8)){
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
     try {
        std::regex regular("(\\w+),(\\w+)");
        std::cmatch result;
        if (!(std::regex_match(argv[2], result, regular))) {
            std::cerr <<"Invalid names" <<endl;
            exit(1);
        }
        if (argc == 3) 
            threeArguments(argv, shout, result.str(1).c_str(),result.str(2).c_str());
        else if(argc == 4)
            fourArguments(argv, shout, result.str(1).c_str(),result.str(2).c_str(),argv);
        else if(argc == 5)
            fiveArguments(argv, shout, result.str(1).c_str(),result.str(2).c_str(),argv);
    }
    catch (...) {
        std::cerr <<"Error" <<endl;
        exit(1);
    }
    return 0;   
}
