#include <iostream>

using namespace std;

int main()
{
    double totalBill, tip10, tip15, tip20;
    cout<<"Enter total bill\n";
    cin>>totalBill;
    tip10=totalBill*.1;
    tip15=totalBill*.15;
    tip20=totalBill*.2;
    cout<<"The 10 percent tip is $"<<tip10<<endl;
    cout<<"The 15 percent tip is $"<<tip15<<endl;
    cout<<"The 20 percent tip is $"<<tip20<<endl;
    return 0;
}
