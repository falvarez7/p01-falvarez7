#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int main() {
int guess;
srand (time(NULL) );
int randomNumber;
randomNumber = rand()%10+1;


cout<<"Let's play a game."<<endl<<"Guess a number from 1 to 10."<<endl;
/*cout<<randomNumber<<endl;*///Allows for testing of the game.
cin>>guess;
    if(randomNumber==guess){
        cout<<"You guessed correctly! You win!"<<endl;}
    else if(randomNumber<guess){
        int less;
        less = guess - randomNumber;
        cout<<"You were off by "<<less<<". Sorry, you lose. "<<endl;}

    else{
        int more;
        more = randomNumber-guess;
        cout<<"You were off by "<<more<<". Sorry, you lose. "<<endl;}

return 0;}

