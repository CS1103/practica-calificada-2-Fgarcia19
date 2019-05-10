//
// Created by fabrizio on 5/10/19.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <iostream>
#include "hijosDefense.h"
#include "hijosAtacck.h"
#include <vector>

class fighter {
protected:
    std::vector<attack*> ataque;
    std::vector<defense*> defensa;
    //fighter* tipo;
public:
    fighter()= default;
    virtual int atack();
    virtual int defen();
};


#endif //PC2_FIGHTER_H
