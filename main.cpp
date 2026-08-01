#include <iostream>
using namespace std;
int win(char user , char comp){
    if((user=='r' && comp=='p')||(user=='p'&&comp=='s')||(user=='s'&&comp=='r'))return 0;
    else if ((user=='p' && comp=='r')||(user=='s'&&comp=='p')||(user=='r'&&comp=='s'))return 1;
    else return 2;
}
int main(){
    char choice='y';
    do{
    char userChoice;
    cout<<"Rock Papers or Scissors?(r,p,s)\n";
    cin>>userChoice;
    char computerChoice ;
    int val = rand()%3;

    if(val==0)computerChoice='r';
    else if(val==1)computerChoice='p';
    else computerChoice='s';

    if(win(userChoice,computerChoice)==0)cout<<"You lost\n";
    else if(win(userChoice,computerChoice)==1)cout<<"You won\n";
    else cout<<"Draw\n";

    cout<<"Continue?(y/n):";
    cin>>choice;
    }while(choice=='y');
}
