#include<iostream>

using namespace std;
#define WIDTH 50
#define HEIGHT 30

board(){

    for(int i=0;i<=WIDTH+1;i++){

        for(int j=0;j<=HEIGHT+1;j++){

            if(i==0 || i==HEIGHT+1 ||j==0 ||j==WIDTH+1){

                cout<<"#"<<endl;
            }
        }
    }


}

int main(){

    return 0;
}