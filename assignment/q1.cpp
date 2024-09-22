#include<iostream>
using namespace std;
class Product {
private:
    string productName;
    float price;
    int quantity;
public:
    Product(string name,float prc,int qty){
        productName=name;
        price=prc;
        quantity=qty;
    }
    void display(){
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price: " <<price<<"$"<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"-------------------------------------"<<endl;
    }
};
int main() {
    Product products[2][2]={
        {Product("Iphone 15 Pro Max",999.99,100),Product("Iphone 16 Pro Max",1299.99,50)},
        {Product("AirPods Pro 2",249.99,75),Product("Apple Watch",399.99,30)}
    };
    for (int i=0;i<2;i++){
        cout<<"Shelf No. : "<<i+1<<endl;
        cout<<"___________________________________________"<<endl;
        for (int j=0; j<2;j++){
            products[i][j].display();
        }
    }
    return 0;
}


