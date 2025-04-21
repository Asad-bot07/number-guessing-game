#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class op
{
    int n;
    public:
    op(int x)
    {
        n=x;
    }
    int check(int num,int c)
    {
        if(n>num)
        cout<<"You guessed too high"<<endl<<"Attempt left : "<<3-c<<endl;
        else if(n<num)
        cout<<"You guessed too low"<<endl<<"Attempt left : "<<3-c<<endl;
        else
        return -9999;
        return 0;
    }
};
int main()
{
    int ch,c,tmp,g;
    srand(time(0));
    while(1)
    {
        cout<<"\t\t---------------WELCOME---------------"<<endl;
        cout<<"\t\t       Enter 1 to play the game"<<endl;
        cout<<"\t\t       Enter 2 to exit the game"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:g=rand()%100+1;
                   c=0;
                   cout<<"You will get 3 attempt to guess the correct number\nALL THE BEST!!\n";
                   for(int i=1;i<4;i++)
                   {
                    cout<<"Enter number : ";
                    cin>>tmp;
                    op ob(tmp);
                    if(ob.check(g,i)==-9999)
                    {
                        cout<<"Congratulations on winning the game!!"<<endl;
                        c++;
                        break;
                    }
                   }
                   if(c==0)
                   cout<<"Sorry you lost :(,better luck next time"<<endl<<"The correct guess was "<<g<<endl;
                   break;
            case 2:exit(0);
            default:cout<<"INVALID INPUT\nTry again!!"<<endl;
        }
    }
}