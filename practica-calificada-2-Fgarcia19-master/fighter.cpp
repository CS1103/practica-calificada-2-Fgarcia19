//
// Created by fabrizio on 5/10/19.
//

#include "fighter.h"
//#include "hijosAtacck.h"
//#include "hijosDefense.h"
#include "peleadores.h"
//
//fighter::fighter(std::string _tipo) {
//    if(_tipo=="bl"){
//        tipo=new brucelee();
//    };
//}

int fighter::atack() {
    int a=0;
    for(int i=0;i<ataque.size();i++){
        a=a+ataque[i]->getpower();
    }
    return a;
}
int fighter::defen() {
    int d=0;
    for(int i=0;i<defensa.size();i++){
        d=d+defensa[i]->getlevel();
    }
}