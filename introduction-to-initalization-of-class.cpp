#include <iostream>
using namespace std;
class human{
    public:
        int height;
        int weight;
        int age;
};
int main(){
    human john;
    john.height = 180;
    john.weight = 70;
    john.age = 20;
    cout << "john's height : " << john.height << "\njohn's weight : " << john.weight << "\njohn's age : " << john.age << endl; 
    return 0;
}
