#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int value;
	int yourmoney=0;
	int n=0;
	char ch='y';
	double increase;
	int maxamount=yourmoney;
	int round=0;
	int wins=0;
	while(ch=='y'||ch=='Y'){
		cout<<"************ GAME OF LUCK *************"<<endl;
		cout<<endl;
		cout<<"Enter the money u want to start with!!!!"<<endl;
		cin>>yourmoney;

		//cout<<"Enter the amount by which u want to increase the money if you are lucky!!!"<<endl;
		//cin>>increase;
		
		cout<<"Enter your lucky number(Select a number from 1 to 12)"<<endl;
		cin>>value;
		cout<<endl;
		if(value>12){
			cout<<"Enter a valid value"<<endl;
			break;
		}
		while(yourmoney>1){
			srand(time(NULL));
			int dice1=rand()%6 +1;
			int dice2=rand()%6 +1;
			if(dice1+dice2==value){
				yourmoney=yourmoney*2;
				n++;
				wins++;
			}
			else{
				yourmoney=yourmoney-(0.2*yourmoney);
				n++;
			}
			if(yourmoney>maxamount){
				maxamount=yourmoney;
				round=n;
			}
			cin.ignore();
			cout<<"Dice-1: "<<dice1<<endl;
			cout<<"Dice-2: "<<dice2<<endl;
		
			cout<<"At the end of Round "<<n<<" U Have Rupees = "<<yourmoney<<endl;
			cout<<endl;
			if(wins>=3){
				wins=0;			
			}
		}
		cout<<"So you lost all of your money in "<<n<<" Rounds and Now you are in debt of Rupees = "<<abs(yourmoney)<<endl;
		cout<<endl;

		cout<<"You had maximum money equal to "<<maxamount<<" in the round "<<round<<endl<<endl;

		cout<<"Do you want to play again??"<<endl<<endl;
		cout<<"If Yes-->> tap Y or y"<<endl<<endl;
		cout<<"If Not-->> tap any button on keyboard"<<endl;
		cin>>ch;
		if(ch=='y'||ch=='Y'){
			yourmoney=0;
			maxamount=0;
			n=0;
		}
		cout<<endl;
	}
}

















