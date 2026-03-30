//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("Yew",14,1);
    monster m2("Volk",10,2),m4("First",11,2);
    monster x[4]={{"Jojo ",5},{"Jiji ",7}};
    
    p=new monster("Looloool ",10,50);
    delete p;//destructor p
    return 0;//destructor x,m4,m2,m1
}
