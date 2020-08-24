#include "draugr.h"
#include "algorithmUtils.h"
int main(int argc, char const *argv[])
{
    Draugr d1;
    d1.setName("Death Overlord");
    d1.shoutPhrase(3);
    //Draugr d2 = d1;
    Draugr d3(10.10, 30);
    d3.shoutPhrase(4);
    //Draugr d4 = std::move(d3);
    return 0;
}

