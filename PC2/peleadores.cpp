//
// Created by fabrizio on 5/10/19.
//

#include "peleadores.h"

brucelee::brucelee():fighter() {
    ataque.push_back(new punch());
    ataque.push_back(new saber());
    ataque.push_back(new firearm);
    defensa.push_back(new elude);
    defensa.push_back(new armor);
}

chucknorris::chucknorris():fighter(){
    ataque.push_back(new punch());
    ataque.push_back(new firearm());
    defensa.push_back(new elude());
    defensa.push_back(new armor());
    defensa.push_back(new shield());
}

jason::jason():fighter() {
    ataque.push_back(new punch());
    ataque.push_back(new firearm());
    defensa.push_back(new elude());
    defensa.push_back(new shield());
}
