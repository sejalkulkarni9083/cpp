#include <iostream>

using namespace std;

class point{
    public:
        int x;
        int y;
        point(){
            x = 0;
            y = 0;
        }
        point(int xx){
            x = xx;
            y = 0;

        Point(int xx, int yy){
            x = xx;
            y = yy;
        }
};

class Shape{
    protected:
    string color;
    int thickness;

};

class Line:Shape{
    public:
        point  * ptrStartPoint;
        point  * ptrEndPoint;

        Line(point * ptrpt1, point *ptrpt2){
            ptrStartPoint = ptrpt1;
            ptrEndPoint = ptrpt2;
        }
};                     


int main(){

    point start;
    point end;

}