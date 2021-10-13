#include <iostream>
#include "C:\Users\omerf\Documents\git\oop-basics-with-c-\libs\human.h

    int human::getHeight(){
        return height;
    }
    void human::setHeight(int height){
        this->height = height;
    }
    int human::getWeight(){
        return weight;
    }
    void human::setWeight(float weight){
        this->weight = weight;
    }
    void human::eat(int kcal){
        weight += kcal / 7000;
    }
    int meal::getKcal(){
        return kcal;
    }
    void meal::setKcal(int kcal){
        this->kcal = kcal;
    }
    int meal::getGram(){
        return gram;
    }
    void meal::setGram(int gram){
        this->gram = gram;
    }

