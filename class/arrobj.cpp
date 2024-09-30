#include <iostream>
using namespace std;

class ShopItem
{
    int if;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int p, q;
    int size = 2;
    ShopItem *ptr = new ShopItem[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;

        // dereference the pointer
        // both method are same here

        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {

        cout << "Item number: " << i + 1 << endl;
        ptr->getData();
        ptr++;
    }

    return 0;
}