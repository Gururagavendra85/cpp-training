#pragma once
#include <iostream>
class Rectangle {
    // Write your code here
    private:
        long long width, height;
    public:
       Rectangle() : width(1.0), height(1.0){std::cout<<"Rectangle created with default dimensions.\n";}
       Rectangle(int x, int y): width(x), height(y){std::cout<<"Rectangle created with custom dimensions.\n";}

       void setHeight(double h);
       void setWidth(double w);

       long long getArea();
       long long getPerimeter();
       void printDimensions ()const;

       ~Rectangle();
};


long long Rectangle::getArea(){
    return width*height;
}

long long Rectangle::getPerimeter(){
    return 2*(width+height);
}

void Rectangle::setHeight(double h){
    if(h<0){
        height = 0;
    }else{
        height = h;
    }
}

void Rectangle::setWidth(double w){
    if(w<0){
        width = 0;
    }else{
        width = w;
    }
  
}

void Rectangle::printDimensions ()const{
    std::cout<<"Width: "<<width<<", Height: "<<height<<"\n"; 
}

Rectangle::~Rectangle(){
    std::cout<<"Deleting rectangle.\n";
}