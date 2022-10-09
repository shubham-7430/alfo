#include <iostream>
using namespace std;

class shop
{
public:
    int item_id[100];
    int price[100];
    void setprice();
    void display();
};
void shop ::setprice()
{
    int n, i;
    cout << "Enter the item ID";
    for (i = 1; i <= 4; i++)
    {
        cin >> item_id[i];
    }
    cout << "Enter the item Price";
    for (i = 1; i <=4; i++)
    {
        cin >> price[i];
    }
}
void shop ::display()
{
    for (int i = 1; i <= 4; i++)
    {
        cout << "Item id is:-" << item_id[i] << endl;
        cout << "Item price is:-" << price[i] << endl;
    }
}

int main()
{
    shop s1;
    s1.setprice();
    s1.display();
    return 0;
}
