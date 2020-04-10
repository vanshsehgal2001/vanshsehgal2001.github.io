#include<iostream>
#include<stdlib>
using namespace std;

int main(){
	char ch;
	int choice;
	int mywins=0;
	int mylosses=0;
	int draws=0;
	int cwins=0;
	int closses=0;
	int count=1;
	int n;
	cout<<"SO HOW MANY ROUNDS DO U WANT TO PLAY??";
	cin>>n;	
	do{
		cout<<"*******************************************************************************"<<endl;
		cout<<"				ROCK PAPER SCISSORS	"<<endl;
		cout<<"*******************************************************************************"<<endl;
		cout<<"PRESS 1 FOR ROCK"<<endl;
		cout<<"PRESS 2 FOR PAPER"<<endl;
		cout<<"PRESS 3 FOR SCISSORS"<<endl;	
		cout<<endl;
			
		cout<<"SO NOW MAKE A CHOICE OUT OF 1 2 AND 3......"<<endl;
		cin>>choice;
	
		cout<<"SO YOU CHOSE---->>>>>";
		if(choice==1){
			cout<<choice<<" "<<"ROCK"<<endl;
		}			
		if(choice==2){
			cout<<choice<<" "<<"PAPER"<<endl;
		}
		if(choice==3){
			cout<<choice<<" "<<"SCISSORS"<<endl;
		}
		srand(time(NULL));
		int computer_choice=rand()%3 +1;
		cout<<"COMPUTER CHOSE---->>>>>>";
		if(computer_choice==1){
			cout<<computer_choice<<" "<<"ROCK"<<endl;
		}			
		if(computer_choice==2){
			cout<<computer_choice<<" "<<"PAPER"<<endl;
		}
		if(computer_choice==3){
			cout<<computer_choice<<" "<<"SCISSORS"<<endl;
		}
		

		if(choice==1&&computer_choice==2){
			cout<<"YOU LOSE THIS ROUND!!! BETTER LUCK NEXT TIME"<<endl;
			mylosses++;
			cwins++;
		}
		else if(choice==1&&computer_choice==3){
			cout<<"CONGRATULATIONS!!! YOU WON THIS ROUND"<<endl;
			mywins++;
			closses++;
		}
		else if(choice==2&&computer_choice==1){
			cout<<"CONGRATULATIONS!!! YOU WON THIS ROUND"<<endl;
			mywins++;
			closses++;
		}
		else if(choice==2&&computer_choice==3){
			cout<<"YOU LOSE THIS ROUND!!! BETTER LUCK NEXT TIME"<<endl;
			mylosses++;
			cwins++;
		}
		else if(choice==3&&computer_choice==1){
			cout<<"YOU LOSE THIS ROUND!!! BETTER LUCK NEXT TIME"<<endl;
			mylosses++;
			cwins++;
		}
		else if(choice==3&&computer_choice==2){
			cout<<"CONGRATULATIONS!!! YOU WON THIS ROUND"<<endl;
			mywins++;
			closses++;
		}
		else if((choice==1&&computer_choice==1)||(choice==2&&computer_choice==2)||(choice==3&&computer_choice==3)){
			cout<<"WELL WELL WELL IT'S A DRAW!!!"<<endl;
			draws++;
		}
	count++;

	}while(count<=n);
		cout<<"***************SCORE***************"<<endl;
		cout<<endl;
		cout<<"YOUR WINS:"<<" "<<mywins<<endl;
		cout<<"YOUR LOSSES"<<" "<<mylosses<<endl;
		cout<<"COMPUTER WINS:"<<" "<<cwins<<endl;
		cout<<"COMPUTER LOSSES:"<<" "<<closses<<endl;
		cout<<"DRAWS"<<" "<<draws<<endl;

		cout<<endl;
	if(n%2==0){	
		if(cwins==mywins){
			cout<<"SO THE GAME WAS A DRAW!!! NONE OF YOU WON!!";
		}
		else if(mywins>cwins){
			cout<<"CONGRATULATIONS!! YOU WON THE GAME!!";
		}
		else{
			cout<<"BAD LUCK!! YOU LOSE!!";
		}
	}
	else{
		if(cwins==mywins){
			cout<<"SO THE GAME WAS A DRAW!!! NONE OF YOU WON!!";
		}	
		else if(mywins>cwins){
			cout<<"CONGRATULATIONS!! YOU WON THE GAME!!";
		}
		else{
			cout<<"BAD LUCK!! YOU LOSE!!";
		}
	}
}




















