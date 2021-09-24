#include <iostream>
using namespace std;
class rectangle{
    private:
        int widht;
        int height;
    public:
    	int getWidht(){
    		return widht;
		}
		void setWidht(int widht){
			if(widht>=0)
				this->widht = widht;
			else 
				widht = 0;
		}
		int getHeight(){
			return height;
		}
		void setHeight(int height){
			if(height>=0)
				this->height = height;
			else
				height = 0;
		}
        rectangle operator+(const rectangle& x){
        	rectangle newop;
        	newop.height = this->height + x.height;
        	newop.widht = this->widht + x.widht;
        	return newop;
		}
};
int main(){
	rectangle exp1,exp2,sumOfRectangles;
	exp1.setWidht(70); exp1.setHeight(150);
	exp2.setWidht(60); exp2.setHeight(100);
	sumOfRectangles = exp1 + exp2;
	cout << "sum of 2 rectangles' height : " << sumOfRectangles.getHeight() << "\n weight : " << sumOfRectangles.getWidht() << endl;
	return 0;
}
