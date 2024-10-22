#include <iostream>
using namespace std;

class Shape{
  public:
  void shape() {
    cout<<"This is a shape"<<endl;
  }
};

class Polygon: public Shape {
  public:
  void polygon () {
    cout<<"polygon is a shape"<<endl;
  }
};

class Rectangle: public Polygon {
  public:
  void rectangle () {
    cout<<"polygon is a rectangle"<<endl;
  }
};

class Triangle: public Rectangle {
  public:
  void triangle () {
    cout<<"polygon is a triangle"<<endl;
  }
};

class Square: public Triangle {
  public:
  void square () {
    cout<<"polygon is a square"<<endl;
  }
};

int main(){
  Square mySquare;
  
  mySquare.square();
  mySquare.triangle();
  mySquare.rectangle();
  mySquare.polygon();
  mySquare.shape();
  
return 0;
}