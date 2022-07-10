#include <iostream>
#include <string>
using namespace std;
#define NEWLINE cout<<endl;

char matrix[3][3] = {
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'}
};

class Player;
void drawTable();
bool checkWin();
void markMove(Player* p, int x);

class Player{

	
	string name;
	char mark;
	
	public:

		Player(string x, char y){
			name = x;
			mark = y;
		}	
		
		string getName(){return name;}
		char getMark(){return mark;}
};

int main(){

	Player player1("player1", 'X');
	Player player2("player2", 'O');
	Player* p1=&player1;
	Player* p2=&player2;

	cout << p1->getName();
	drawTable();
	
	int movecounter=0;
	
	while(checkWin()==false){
		int move;
		cin >> move;
		if(movecounter%2==0){
			markMove(p1, move);
			cout << p2->getName();
		}
		else{
			markMove(p2, move);
			cout << p1->getName();
		}
		system("clear");
		drawTable();
		movecounter++;
	}
	
	if(movecounter%2==0){cout << p2->getName() << " WIN!";}
	else{cout << p1->getName() << " WIN!";}

}


void drawTable(){
	system("clear");
	NEWLINE

	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<matrix[x][y];
		}
	cout<<endl;
	}

	NEWLINE
}

void markMove(Player* p, int x){
	switch(x){
		case 1: matrix[0][0] = p->getMark();
		break;
		case 2: matrix[0][1] = p->getMark();
		break;
		case 3: matrix[0][2] = p->getMark();
		break;
		case 4: matrix[1][0] = p->getMark();
		break;
		case 5: matrix[1][1] = p->getMark();
		break;
		case 6: matrix[1][2] = p->getMark();
		break;
		case 7: matrix[2][0] = p->getMark();
		break;
		case 8: matrix[2][1] = p->getMark();
		break;
		case 9: matrix[2][2] = p->getMark();
		break;
	}
}

bool checkWin(){
		
	if(matrix[0][0]=='O'&&matrix[0][1]=='O'&&matrix[0][2]=='O')
	{return true;}
								
	if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O')
	{return true;}

	if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O')
	{return true;}

	if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O')
	{return true;}

	if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O')
	{return true;}

	if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O')
	{return true;}

	if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O')
	{return true;}

	if(matrix[0][2]=='O'&&matrix[1][1]=='O'&&matrix[2][0]=='O')
	{return true;}


	if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X')
	{return true;}
								
	if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X')
	{return true;}

	if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X')
	{return true;}

	if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X')
	{return true;}

	if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X')
	{return true;}

	if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X')
	{return true;}

	if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
	{return true;}

	if(matrix[0][2]=='X'&&matrix[1][1]=='X'&&matrix[2][0]=='X')
	{return true;}

	else{return false;}
}









































