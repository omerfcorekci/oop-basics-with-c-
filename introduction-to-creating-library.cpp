#include <iostream>
#include "C:\Users\omerf\Documents\git\oop-basics-with-c-\libs\human.h"

using namespace std;
int main(){
    human john;
    john.setHeight(185);
    john.setWeight(80);
    cout << john.getHeight() << " " << (float) john.getWeight() << endl;;
    meal sandwich;
    sandwich.setKcal(200);
    john.eat(sandwich.getKcal());
    cout << john.getHeight() << " " << (float) john.getWeight() << endl;
    return 0;
}
