#include <iostream>
using namespace std;
int main() {
        cout<<"Welcome to Number Guessing Game!!"<<endl;
        int N=100;
        srand(time(0)); 
        int randomnum=rand()%N;
        while(true){
            cout<<"Enter your Guess: "<<endl;
            int x;
            cin>>x;
            if(x==randomnum){cout<<"Congrats! you guessed the right number"; break;}
            else if(x<randomnum) cout<<"Enter a greater number"<<endl;
            else cout<<"Enter a lesser number"<<endl;
        }
}
