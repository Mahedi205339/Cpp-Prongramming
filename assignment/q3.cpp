
// #include<iostream>
// using namespace std;
// class Square;
// class Rectangle {
// private:
//     int length,width;
// public:
//     Rectangle(int l,int w){
//         length=l;
//         width=w;
//     }
//     void showDetails()
//     {
//         cout<<"Length of the rectangle: "<<length<<endl;
//         cout<<"Width of the rectangle: "<<width<<endl<<endl;
//     }
//     friend void printArea(const Rectangle *rect1, const Square *sqr1);
//     friend class Square;
//     friend void increaseSide(const Rectangle *rect1);
// };
// class Square {
// private:
//     int side;
// public:
//     Square(int s){
//         side=s;
//     }
//     friend void printArea(const Rectangle *rect1, const Square *sqr1);
//     void increaseSide(const Rectangle *rect1){
//         cout<<"Side of the square after increasing: "<<(side+=rect1->length)<<endl;
//     }
//     void showDetails()
//     {
//         cout<<"Side of the square: "<<side<<endl<<endl;
//     }
// };
// void printArea(const Rectangle *rect1, const Square *sqr1){
//     cout<<"Area of the rectangle: "<<rect1->length*rect1->width<<" square units."<<endl;
//     cout<<"Area of the square: "<<sqr1->side*sqr1->side<<" square units."<<endl<<endl;
// }
// int main() {
//     Rectangle rect1(5,6);
//     Square sqr1(6);
//     rect1.showDetails();
//     sqr1.showDetails();
//     printArea(&rect1,&sqr1);
//     sqr1.increaseSide(&rect1);
//     return 0;
// }
