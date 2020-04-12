#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

char array[10]={'1','2','3','4','5','6','7','8','9'};

	//MAKING BOARD OF TIC TAC TOE
void gameboard(){
	cout<<"********************** TIC TAC TOE ***************************"<<endl;
	cout<<"		  MADE BY: VANSH SEHGAL	  "<<endl;

	
	cout<<"		"<<array[0]<<"	|    	"<<array[1]<<"  	|  	"<<array[2]<<endl;
	cout<<"	     ___________|_______________|__________"<<endl;

		
	cout<<"	     ___________|_______________|__________"<<endl<<endl;
	cout<<"		"<<array[3]<<"	|    	"<<array[4]<<"  	|  	"<<array[5]<<endl;
	cout<<"	     ___________|_______________|__________"<<endl;

		
	cout<<"	     ___________|_______________|__________"<<endl<<endl;;
	cout<<"		"<<array[6]<<"	|    	"<<array[7]<<"  	|  	"<<array[8]<<endl;
	cout<<"	     ___________|_______________|__________"<<endl;
	cout<<"	     ___________|_______________|__________"<<endl;
	cout<<"			|		|	"<<endl;
	
}
	//FUNCTION FOR DECIDING THE WINNER OF THE GAME

bool winner(){
	if(array[0]==array[1]&&array[1]==array[2]){
		return true;
	}
	if(array[0]==array[3]&&array[3]==array[6]){
		return true;
	}
	if(array[0]==array[4]&&array[4]==array[8]){
		return true;
	}
	if(array[1]==array[4]&&array[4]==array[7]){
		return true;
	}
	if(array[2]==array[5]&&array[5]==array[8]){
		return true;
	}
	if(array[6]==array[7]&&array[7]==array[8]){
		return true;
	}
	if(array[2]==array[4]&&array[4]==array[6]){
		return true;
	}
	if(array[3]==array[4]&&array[4]==array[5]){
		return true;
	}
	else{
		return false;	//WHEN EITHER GAME IS NOT OVER OR GAME IS DRAW
	}
}

	//FUNCTION FOR PLAYING WITH THE BOT

void playwithbot(){
	string player;
	int chance=1,tchk=0;
	char p;
	char comp;
	bool result=false;
	int num;
	char character;
	int check=1;	
	cout<<"Player-->> Enter your name: "<<endl;
	cin>>player;
	
	cout<<player<<" "<<"choose a character from X or 0 to start with"<<endl;
	cin>>p;

	if(p=='X'||p=='x'){
		comp='O';
	}	
	else if(p=='0'||p=='o'||p=='O'){
		comp='X';
	}
	
	cout<<"So You have "<<p<<" "<<"and Computer has "<<comp<<endl;

	srand(time(NULL));
	chance=0;

	do{
		//system("clear");
		//gameboard();
		if(tchk%2==0){
			chance=0;
		}
		else{
			chance=1;
		}
		if(chance==0){
			cout<<player<<" "<<"Enter a valid Number from the board"<<endl;
			cin>>num;
		}		
		else{
			cout<<"It's Computer's Turn!"<<endl;
			for(int i=0;i<9;i++){	
				num=rand()%9 + 1;				//THIS IS THe ELSE U NEED TO CHECK 
				if(num==(i+1) && (array[i]=='X'||array[i]=='O')){
					continue;
				}
				else
				break;
			}
			
		}
		
		system("clear");
		if(chance==0){
			character=p;
		}
		else{
			character=comp;
		}

		// CONDITIONS FOR CHECKING AND THEN PUTTING IN THE BOARD
		if(array[0]=='1'&&num==1){
			array[0]=character;
		}

		
		else if(array[1]=='2'&&num==2){
			array[1]=character;
		}

	
		else if(array[2]=='3'&&num==3){
			array[2]=character;
		}

		
		else if(array[3]=='4'&&num==4){
			array[3]=character;
		}

		
		else if(array[4]=='5'&&num==5){
			array[4]=character;
		}

		
		else if(array[5]=='6'&&num==6){
			array[5]=character;
		}

		
		else if(array[6]=='7'&&num==7){
			array[6]=character;
		}

		
		else if(array[7]=='8'&&num==8){
			array[7]=character;
		}

		
		else if(array[8]=='9'&&num==9){
			array[8]=character;
		}
		else{
			if(tchk%2==0){
				cout<<" "<<"it's an invalid number.Try again"<<endl;
				tchk--;
			}		
		}
		gameboard();
		result=winner();

		if(result==false){
			if(array[0]!='1'&&array[1]!='2'&&array[2]!='3'&&array[3]!='4'&&array[4]!='5'&&array[5]!='6'&&array[6]!='7'&&array[7]!='8'&&array[8]!='9')
			{
				check=0;	//IF CHECK=0 THEN GAME IS DRAW	
			}
		}
		tchk++;
	}while(result==false&&check==1);
	system("clear");
	gameboard();
	if(result==true){
		tchk--;
		if(tchk%2==0){
			cout<<player<<":"<<"Congratulations You Won!!!!"<<endl;
		}
		else{
			cout<<"Computer Won!!!!"<<endl;
		}
	}
	if(check==0){
		cout<<"It's a Draw!!"<<endl;
	}

}
	//FUNCTION FOR PLAYING WITH FRIEND

void playwithfriend(){
	string player1;
	string player2;
	int chance=1;
	char p1;
	char p2;
	bool result=false;
	int num;
	char character;
	int check=1;
	gameboard();

	cout<<"Player 1 -> Enter Your Name: "<<endl;
	cin>>player1;
	cout<<"Player 2 -> Enter Your Name: "<<endl;
	cin>>player2;
	cout<<player1<<" "<<"choose a character out of X or 0 to start with"<<endl; 
	cin>>p1;
	

	//CREDENTIALS OF PLAYER 2
	if(p1=='x'||p1=='X'){
		p2='0';
	}
	else if(p1=='O'||p1=='0'||p1=='o'){
		p2='X';
	}
	srand(time(NULL));
	chance=rand()%2;
	do{
		//system("clear");
		//gameboard();
		if(chance%2==0){
			chance=0;
		}
		else{
			chance=1;
		}
		if(chance==0){
			cout<<player1<<" "<<"Enter a valid Number from the board"<<endl;
			cin>>num;
		}		
		else{
			cout<<player2<<" "<<"Enter a valid Number from the board"<<endl;
			cin>>num;
		}
		system("clear");
		if(chance==0){
			character=p1;
		}
		else{
			character=p2;
		}

		if(array[0]=='1'&&num==1){
			array[0]=character;
		}

		
		else if(array[1]=='2'&&num==2){
			array[1]=character;
		}

	
		else if(array[2]=='3'&&num==3){
			array[2]=character;
		}

		
		else if(array[3]=='4'&&num==4){
			array[3]=character;
		}

		
		else if(array[4]=='5'&&num==5){
			array[4]=character;
		}

		
		else if(array[5]=='6'&&num==6){
			array[5]=character;
		}

		
		else if(array[6]=='7'&&num==7){
			array[6]=character;
		}

		
		else if(array[7]=='8'&&num==8){
			array[7]=character;
		}

		
		else if(array[8]=='9'&&num==9){
			array[8]=character;
		}
		else{
			if(chance==0){
				cout<<player1<<" "<<"it's an invalid number.Try again"<<endl;
				chance--;
			}		
			else{
				cout<<player2<<" "<<"it's an invalid number. Enter again"<<endl;
				chance--;
			}	
		}
		gameboard();
		result=winner();

		if(result==false){
			if(array[0]!='1'&&array[1]!='2'&&array[2]!='3'&&array[3]!='4'&&array[4]!='5'&&array[5]!='6'&&array[6]!='7'&&array[7]!='8'&&array[8]!='9')
			{
				check=0;	
			}
		}
		chance++;
	}while(result==false&&check==1);
	system("clear");
	gameboard();
	if(result==true){
		chance--;
		if(chance==0){
			cout<<player1<<":"<<"Congratulations You Won!!!!"<<endl;
		}
		else{
			cout<<player2<<":"<<"Congratulations You Won!!!!"<<endl;
		}
	}
	if(check==0){
		cout<<"It's a Draw!! None Of You Won!!!"<<endl;
	}


}

int main(){
	int option;
	gameboard();

	cout<<"Would you like to play with the bot or with your friend??"<<endl;
	cout<<"Press 1 to play with bot	    Press 2 to play with your friend"<<endl;
	cin>>option;

	if(option==1){
		playwithbot();
	}
	else{
		playwithfriend();
	}
	cout<<"----------------------------------THANK YOU-------------------------------------"<<endl;
}



































