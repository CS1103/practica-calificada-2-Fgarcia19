//
// Created by fabrizio on 5/10/19.
//

#include "figth.h"
#include <iostream>
#include "peleadores.h"
//figth::figth(std::string p1, std::string p2) {
//    if(p1=="bl") {
//        a = new brucelee();
//    }
//    else if(p1=="cn") {
//        a = new chucknorris();
//    }
//    else if(p1=="j"){
//        a=new jason();
//    }
//
//    if(p2=="bl") {
//        a = new brucelee();
//    }
//    else if(p2=="cn") {
//        a = new chucknorris();
//    }
//    else if(p2=="j"){
//        a=new jason();
//    }
//std::cout<<"done";
//}
figth::figth(fighter *_a, fighter *_b) {
    a=_a;
    b=_b;
    //int score1,score2;

}

void figth::resultado() {
    int score1,score2;
    score1=a->defen()-b->atack();
    score2=b->defen()-a->atack();
    //std::cout<<"pelea";

    if(score1>score2){
      //  winner=a;
        std::cout<<"ganador p1";
    }
    else {
        //winner=b;
        std::cout<<"ganador p2";
    }
    //else winner=nullptr;

}