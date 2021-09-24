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
		void setWidht(int x){
			if(x>=0)
				widht = x;
			else 
				widht = 0;
		}
		int getHeight(){
			return height;
		}
		void setHeight(int x){
			if(x>=0)
				height = x;
			else
				height = 0;
		}
        int findOfArea(){
            return widht*height;
        }
        int findOfPerimeter(){
            return (widht+height)*2;
        }
};
int main(){
    rectangle exp1,exp2;
    exp1.setWidht(50);
	exp1.setHeight(100);
    exp2.setWidht(150); 
	exp2.setHeight(200);
	cout << "Height of Rectangle 1 : " << exp1.getHeight() << "\nWidht of Rectangle1 : " << exp1.getWidht() << "\nHeight of Rectangle 2 : " << exp2.getHeight() << "\nWidht of Rectangle 2 : " << exp2.getWidht() << endl;
    cout << "Area and Perimeter of Rectangle1 : " << exp1.findOfArea() << " " << exp1.findOfPerimeter() << "\nArea and Perimeter of Rectangle2 : " << exp2.findOfArea() << " " << exp2.findOfPerimeter() << endl;
    return 0;
}

