#include <iostream>
using namespace std;
class rectangle{
    public:
        int widht;
        int height;
        int findOfArea(){
            return widht*height;
        }
        int findOfPerimeter(){
            return (widht+height)*2;
        }
};
int main(){
    rectangle exp1,exp2;
    exp1.widht=50; exp1.height=100;
    exp2.widht=150; exp2.height=200;
    cout << exp1.findOfArea() << " " << exp1.findOfPerimeter() << "\n" << exp2.findOfArea() << " " << exp2.findOfPerimeter() << endl;
    return 0;
}