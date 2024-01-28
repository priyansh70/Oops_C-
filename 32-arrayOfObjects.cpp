#include <bits/stdc++.h>
using namespace std;

class ShopItems
{
    int id;
    int price;

public:
    void setData(int id, int price)
    {
        this->id = id;
        this->price = price;
    }

    void getData()
    {
        cout << "Code of this item is " << id << endl
             << "Price of this ites is : " << price << endl;
    }
};

int main()
{
    // int *arr new int[6];
    int size = 3;
    ShopItems *items = new ShopItems[size]; // array of ShopItems with size of 3
    ShopItems *item = items;
    // cout << items << endl;
    // cout << &items << endl;

    for (int i = 0; i < size; i++)
    {
        int id, price;
        cout << "Enter the ID and Price of Item No." << i + 1 << endl;
        cin >> id >> price;

        item->setData(id, price);
        item++;
    }

    item = items;
    for (int i = 0; i < size; i++)
    {
        item->getData();
        item++;
    }

    return 0;
}