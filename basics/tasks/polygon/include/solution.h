#pragma once

// Write your solution here
class Polygon{
protected:
    int width;
    int height;
public:
    virtual int getArea()=0; //Abstract base class
};

class Rectangle: public Polygon{
    public:
    Rectangle(int width,int height){
        this->width = width;
        this->height = height;
        
    }

    int getArea() override{
        return width*height;
    }
};


class RightTriangle:public Polygon{
    public:
    RightTriangle(int width,int height){
        this->width = width;
        this->height = height;  
    }

    int getArea() override{
        return 0.5*(width*height);
    }
};