#include<iostream>
using namespace std;

// Function to convert km to miles
void kmtomiles(){
	double km, Miles=0.621 ;
	cout<<"enter the distane in km: ";
	cin>>km;
	cout<<"Result in miles: "<<Miles*km <<endl;	
}

// Function to convert celsius to fahrenheit
void tempcon(){
	float celsius , fahrenheit;
	cout<<"enter the temperature in celsius: ";
	cin>>celsius;
	fahrenheit = (celsius*9/5)+32;
	cout<<"temperature in fahrenheit is : "<<fahrenheit <<endl;
	
}

// Function to convert seconds to hour, mint, sec
void time(){
	int totalsec, hour, mint , sec;
	cout<<"enter the time in seconds : ";
	cin>>totalsec;
	hour = totalsec/3600;
	mint = (totalsec % 3600)/60;
	sec = totalsec % 60;
	cout<<totalsec <<" seconds is equal to "<<hour <<"h , "<<mint <<" mint , "<<sec <<" second"<<endl;
}

int main(){
	int choice;
	cout<<"\nWhich conversion you want to perform: \n";
    cout<<"1.Convert Kilometers to Miles \n";     //(1 Km = 0.621 Miles)
    cout<<"2.Convert Celsius to Fahrenheit \n";     //(F = (C × 9/5) + 32)
    cout<<"3.Convert Seconds into Hours, Minutes & Seconds \n";
    cin>>choice;
    switch(choice){
    	case 1:
    	    kmtomiles();
    		break;
    	case 2:
    		tempcon();
    		break;
    	case 3:
			time();
			break;
		default:
			cout<<"invalid choice !!!";   			
	}
	return 0;
}
