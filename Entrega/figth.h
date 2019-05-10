//
// Created by fabrizio on 5/10/19.
//

#ifndef PC2_FIGTH_H
#define PC2_FIGTH_H

#include "fighter.h"

class figth {
protected:
    fighter* a;
    fighter* b;
    fighter* winner;
    int score;
public:
    //figth(std::string p1, std::string p2);
    figth(fighter* _a,fighter* _b);
    void resultado();

};


#endif //PC2_FIGTH_H
