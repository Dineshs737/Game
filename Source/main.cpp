#include<iostream>

#include<windows.h>
#include <unistd.h>
//#include <unistd.h>

using namespace std;
#define WIDTH 40
#define HEIGHT 30

int x=20,y=20;

void board(){
   
    for(int i=0;i<=WIDTH+1;i++){

        cout<<"\t\t";

        for(int j=0;j<=HEIGHT+1;j++){

            if(i==0 || i==WIDTH+1 ||j==0 ||j==HEIGHT+1){

                cout<<"#";
            }
            else if(x==j&&y==i){
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
Sleep(500);
board();
x++;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
}

    return 0;
}