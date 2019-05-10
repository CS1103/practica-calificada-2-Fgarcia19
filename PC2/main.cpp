#include <iostream>
#include "hijosAtacck.h"
#include "hijosDefense.h"
#include "fighter.h"
#include "peleadores.h"
#include "figth.h"
int main() {
////    attack* x=new punch();
////    std::cout<<x->getpower();
////    defense* y=new armor();
////    std::cout<<y->getlevel()<<std::endl;
////
    fighter* b=new brucelee();
    std::cout<<b->atack()<<std::endl;
    std::cout<<b->defen()<<std::endl;
////
////    fighter* c=new chucknorris();
////    std::cout<<c->atack()<<std::endl;
//    std::cout<<c->atack()<<std::endl;

    //fighter* j=new jason();
   // std::cout<<j->atack()<<std::endl;
  //  std::cout<<j->atack()<<std::endl;
    //figth pelea("bl","ch");
  //pelea.resultado();
}