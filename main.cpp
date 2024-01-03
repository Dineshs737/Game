#include<iostream>

#include<windows.h>

using namespace std;
#define WIDTH 50
#define HEIGHT 30

void board(){

    for(int i=0;i<=WIDTH+1;i++){

        cout<<"\t\t";

        for(int j=0;j<=HEIGHT+1;j++){

            if(i==0 || i==WIDTH+1 ||j==0 ||j==HEIGHT+1){

                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


}

int main(){

    board();

    return 0;
}