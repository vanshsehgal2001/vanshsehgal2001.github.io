#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int value;
	double yourmoney;
	int n=0;
	char ch='y';
	double increase;
	int maxamount=yourmoney;
	int round=0;
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
		while(yourmoney>0){
			srand(time(NULL));
			int dice1=rand()%6 +1;
			int dice2=rand()%6 +1;
			if(yourmoney>50){
				srand(time(NULL));
				increase=rand()%9 + 1;
			}
			else if(yourmoney<=50 && yourmoney>=30){
				srand(time(NULL));
				increase=rand()%6 +1;
			}
			else{
				srand(time(NULL));
				increase=rand()%3 +1;
			}
			if(dice1+dice2==value){
				yourmoney+=increase;
				n++;
			}
			else{
				yourmoney-=increase;
				n++;
			}
			if(yourmoney>maxamount){
				maxamount=yourmoney;
				round=n;
			}
			cin.ignore();
		cout<<"At the end of Round "<<n<<" U Have Rupees = "<<yourmoney<<endl;
		cout<<endl;
		}
		cout<<"So you lost all of your money in "<<n<<" Rounds and Now you are in debt of Rupees = "<<abs(yourmoney)<<endl;
		cout<<endl;

		cout<<"You had maximum money equal to "<<maxamount<<" in the round "<<round<<endl<<endl;

		cout<<"Do you want to play again??"<<endl<<endl;
		cout<<"If Yes-->> tap Y or y"<<endl<<endl;
		cout<<"If Not-->> tap any button on keyboard"<<endl;
		cin>>ch;
		cout<<endl;
	}
}


















