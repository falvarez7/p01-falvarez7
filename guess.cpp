#include <cstdlib>
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
//cout<<randomNumber<<endl;
cin>>guess;
if(randomNumber==guess){
cout<<"Holy Moly! Your guess of "<<guess<<" was correct!"<<endl;}
else if(randomNumber<guess){
int less;
less = guess - randomNumber;
cout<<"Dang! You were close. You missed by "<<less<<endl;}
else
{ int more;
more = randomNumber-guess;
cout<<"Dang! You were close. You missed by "<<more<<endl;}



return 0;}

