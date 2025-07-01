#pragma once

class Rectangle {
    // Write your code here
    private:
        long long width, height;
    public:
       void setWidth(double w);
       void setHeight(double h);
       long long getArea();
       long long getPerimeter();
};

void Rectangle::setWidth(double w){
    if(w<0){
        width = 0;
    }else{
        width = w;
    }
  
}
void Rectangle::setHeight(double h){
    if(h<0){
        height = 0;
    }else{
        height = h;
    }
}

long long Rectangle::getArea(){
    return width*height;
}

long long Rectangle::getPerimeter(){
    return 2*(width+height);
}
