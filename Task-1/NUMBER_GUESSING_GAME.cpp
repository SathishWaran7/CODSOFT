#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_to_guess = rand();
    int guess;
    cin>>guess;
    while(num_to_guess != guess)
    {
        if(abs(num_to_guess - guess) < 10 )
        {
            cout<<"Guessed number almost matches the random number"<<endl;
            cin>>guess;
        }    
        else if(guess<num_to_guess)
        {
            cout<<"Guessed number is too low"<<endl;
            cin>>guess;
        }
        else
        {
            cout<<"Guessed number is too high"<<endl;
            cin>>guess;
        }        
    }
    cout<<"Number guessed is correct";
    
}
