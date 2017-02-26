#include <iostream>
using namespace std;

int main(){
	cout<<"============================================="<<endl;
	cout<<"|   1 US Dollar = 13000 Indonesian Rupiah   |"<<endl;
	cout<<"============================================="<<endl;
	double dollarValue;
	cout<<"Check price (in $):  ";
	cin>> dollarValue;
	double rupiahValue = dollarValue * 13000;
	cout<<"The price is equal to Rp."<<rupiahValue<<endl;
	cout<<"thank you."<<endl;
	return 0;
}
