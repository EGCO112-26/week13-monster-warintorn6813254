#ifndef monster_h
#define monster_h

#include <iostream>
#include <string>
using namespace std; // เพื่อให้ใช้ string, cout ได้โดยตรง

class monster {
private:
    string name;
    unsigned int hp, potion;

public:
    void Attack(monster &);
    void heal();
    monster(string, int = 10, int = 1); // ประกาศ Prototype
    ~monster();
};

monster::~monster(){
    cout<<"Bye bye " << name<<" hp:"<<hp<<endl;
}

// นิยามการทำงานของ Constructor
monster::monster(string n = "jpang ", int h, int p) {
    name = n;
    potion = p; // อย่าลืมเก็บค่า potion
    
    // กำหนด HP ไม่ให้เกิน 200
    if (h > 200) hp = 200;
    else hp = h;

    cout << "Monster " << name << " Eiei" << endl;
}

#endif