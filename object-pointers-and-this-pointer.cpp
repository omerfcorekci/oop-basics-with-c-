#include <iostream>
using namespace std;
class meal{
	public:
		int kcal;
		int price;
		int weight;
};
class human{
	public:
		float weight;
		int height;
		int age;
		void eating(meal weight){
			this->weight += (float) weight.kcal/7000;
		}
};

int main(){
	meal sandwich;
	sandwich.kcal = 233;
	sandwich.price = 10;
	sandwich.weight = 100;
	human john,*ptr_j;
	ptr_j = &john;
	ptr_j->height = 180;
    ptr_j->weight = 70;
    ptr_j->age = 20;
    cout << "john's height : " << ptr_j->height << "\njohn's weight : " << ptr_j->weight << "\njohn's age : " << ptr_j->age << endl; 
    ptr_j->eating(sandwich);
    cout << "john's height : " << ptr_j->height << "\njohn's weight : " << ptr_j->weight << "\njohn's age : " << ptr_j->age << endl; 
	return 0;
}
