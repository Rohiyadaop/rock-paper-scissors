#include<iostream>
#include<ctime>
#include<cstdlib>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
using namespace std;
int main(){
	// rock beats scissor 
	// scissors beats paper
	// paper beats rock 
	srand((unsigned int )time(NULL));
	int guess_num = (rand()%100)+1;
	int player_throw=0;
	int ai_throw=0;
	bool draw = false;
	do{
		cout<<"select your throw. "<< endl;
		cout<<"1) ROCK "<< endl;
		cout<<"2) PAPER "<< endl;
		cout<<"1) SCISSORS "<< endl;
		cout <<"selection: ";
		cin>> player_throw;
		
		cout<<endl;
		ai_throw= (rand()%3)+1;
		if(ai_throw==ROCK){
			cout<<"ai throws ROCK "<<endl;
		}else if(ai_throw==PAPER){
			cout<<"ai throws PAPER "<<endl;
		}else if(ai_throw==SCISSORS){
			cout<<"ai throws SCISSORS "<<endl;
		}
		draw = false ;
		if(player_throw == ai_throw){
			draw = true ;
			cout<<"Draw ! play again! "<< endl;
			
		}else if (player_throw == ROCK && ai_throw == SCISSORS){
			cout<<"rock beats scissor ** YOU WIN !! **"<< endl;
		}else if (player_throw == ROCK && ai_throw == PAPER){
			cout<<"PAPER beats ROCK ** YOU LOSE !!** "<< endl;
		}else if (player_throw == PAPER && ai_throw == ROCK){
			cout<<"PAPER beats ROCK ** YOU WIN !! **"<< endl;
		}else if (player_throw == PAPER && ai_throw == SCISSORS){
			cout<<"SCISSORS  beats PAPER ** YOU LOSE !! **"<< endl;
		}else if (player_throw == SCISSORS && ai_throw == ROCK){
			cout<<"ROCK  beats SCISSORS ** YOU LOSE !! **"<< endl;
		}else if (player_throw == SCISSORS && ai_throw == PAPER){
			cout<<"SCISSORS  beats PAPER ** YOU WIN !! **"<< endl;
		}
		
	}while(draw);
	return 0;
}
