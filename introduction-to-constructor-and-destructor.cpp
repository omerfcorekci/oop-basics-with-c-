#include <iostream>
using namespace std;
class human{
    private:
        int height;
        int weight;
	public:
		human(){ //constructor
			height = 70;
			weight = 2;
		}
		human(int height,int weight){
			this->height = height;
			this->weight = weight;
		}
		int getWeight(){
			return weight;
		}
		int getHeight(){
			return height;
		}
		/* ~human(){ //destructor
		
		} */
};
int main(){
    human john;
    cout << "john's height : " << john.getHeight() << "\njohn's weight : " << john.getWeight() << endl; 
    human adam(180,70);
    cout << "adam's height : " << adam.getHeight() << "\nadam's weight : " << adam.getWeight() << endl; 
    return 0;
}
