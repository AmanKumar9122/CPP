#include<iostream>
using namespace std;
class Shape {  
  public:  
// All the functions of both square and rectangle are clubbed together in a single class.  
void width(int w) {  
shape_width = w;  
}  
void height(int h) {  
shape_height = h;  
}  
int areaOfSquare(int s) {  
return 4 * s;  
}  
int areaOfRectange(int l, int b) {  
return (l * b);  
}  
protected:  
int shape_width;  
int shape_height;  
};  
int main (){
Shape R;  
R.width(5);  
R.height(10);  
cout<<"The area of rectangle"<<areaOfRectangle(); 
}