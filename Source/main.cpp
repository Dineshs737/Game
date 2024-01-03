#include<iostream>
#include<conio.h>

#include<windows.h>
//#include <unistd.h>

#include"snake.h"

#define UP_KEY 38
#define DOWN_KEY 40
#define RIGHT_KEY 39
#define LEFT_KEY 37


//#include <unistd.h>

using namespace std;
#define WIDTH 40
#define HEIGHT 30


Snake snake({WIDTH/2,HEIGHT/2});

COORD defult_snake_pos=snake.Get_pos();


void board(){
   
    for(int i=0;i<=WIDTH+1;i++){

        cout<<"\t\t";

        for(int j=0;j<=HEIGHT+1;j++){

            if(i==0 || i==WIDTH+1 ||j==0 ||j==HEIGHT+1){

                cout<<"#";
            }
            else if(i==defult_snake_pos.Y&&j==defult_snake_pos.X){
                cout<<"o";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


}

int main(){
//
while(true){
Sleep(200);
board();

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
if(kbhit()){

    switch(getch()){

        case UP_KEY:
        snake .Set_dir('u');
        break;
        case DOWN_KEY:
        snake.Set_dir('d');
        break;
        case RIGHT_KEY:
        snake.Set_dir('r');
        break;
        case LEFT_KEY:
        snake.Set_dir('l');

    }
}
snake.move_snake();


}


    return 0;
}