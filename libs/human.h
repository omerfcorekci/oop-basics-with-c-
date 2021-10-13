#include <iostream>
using namespace std;
class human{
    private:
        int height;
        float weight;
    public:
        int getHeight();
        void setHeight(int height);
        int getWeight();
        void setWeight(float weight);
        void eat(int kcal);
};
class meal{
    private:
        int kcal;
        int gram;
    public:
        int getKcal();
        void setKcal(int kcal);
        int getGram();
        void setGram(int gram);
};
