#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    const double PERCENT10=.10;
    const double PERCENT15=.15;
    const double PERCENT20=.20;
    double bill=0.0;
    cout<<"Enter bill amount: "<<endl;
    cin>>bill;
    double total10=PERCENT10*bill;
    double total15=PERCENT15*bill;
    double total20=PERCENT20*bill;
    cout<<"Total for first tip (10%)"<<total10<<endl;
    cout<<"Total for first tip (15%)"<<total15<<endl;
    cout<<"Total for first tip (20%)"<<total20<<endl;
	cout<<"End"<<endl;
    system("pause");
	return 0;
}//end of program
