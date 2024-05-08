#include <iostream>
using namespace std;

void assign();
bool checkRow(char symbol);
bool checkCol(char symbol);
bool checkDiag(char symbol);
void showgame();
void input();
bool check(char symbol);

const int gridsize = 3;
char array[gridsize][gridsize];
int counter = 2 ;

int main()
{
    int count = 0;
    assign();
    showgame();
    while (count < gridsize*gridsize)
    {
        cout<< endl;
        input();
        cout<< endl;
        system("CLS");
        showgame();

        if(check('O'))
        {
            count=gridsize*gridsize;
        }
        if(check('X'))
        {
            count=gridsize*gridsize;
        }

        count++;
    }
}

void assign()
{
    for (int x = 0 ; x < gridsize ; x++)
    {
        for (int y = 0 ; y < gridsize ; y++)
        {
            array[x][y]= '-';
        }
    }
}

bool checkRow( char symbol)
{
    for (int x = 0 ; x < gridsize ; x++)
    {
        int count = 0;
        for (int y = 0 ; y < gridsize ; y++)
        {
            if ( array[x][y] == symbol)
            {
                count++;
            }
        }
        if (count == gridsize)
        {
            return true;
        }
    }
    return false;
}
bool checkCol(char symbol)
{
    for (int y = 0 ; y < gridsize ; y++)
    {
        int count = 0;
        for (int x = 0 ; x < gridsize ; x++)
        {
            if ( array[x][y] == symbol)
            {
                count++;
            }
        }
        if (count == gridsize)
        {
            return true;
        }
    }
    return false;
}
bool checkDiag(char symbol)
{
    int count = 0;

    for (int x=0 ; x < gridsize ; x++)
    {
        if (array[x][x] == symbol)
        {
            count++;
        }
        if (count == gridsize)
        {
            return true;
        }
    }
    count = 0;
    for (int x=0 , y=2 ; x<gridsize ; x++ , y--)
    {
        if (array[x][y] == symbol)
        {
            count++;
        }
        if (count == gridsize)
        {
            return true;
        }
    }
    return false;
}

void showgame()
{
    cout<< " \t" << "\t" << "A" << "\t" << "B" << "\t" << "C"<<"\n";
    cout << "\t" << " ___________________________"<< "\n";
    cout << "\t" << "|                           |"<< "\n";
    for (int x = 0 ; x < gridsize ; x++)
    {
        cout<< x << "\t" << "|";
        for (int y = 0 ; y < gridsize ; y++)
        {
            cout << "\t" << array[x][y] << "   |";
        }
        cout<< "\n" << "\t" << "|___________________________|"<< "\n";

    }
}
void input()
{
    string z;
    string enter;
    int y;
    
    if(counter%2 == 0)
    {
        cout<< "Enter Player 1 =";
        cin>> enter;

        int x = enter[0];
        x = x-48;

        z = enter[1];
        if(z == "A")
        y = 0;
        else if(z == "B")
        y = 1;
        else if(z == "C")
        y = 2;
    
        array[x][y] = 'O';
        counter++;
    }
    else if(counter%2 != 0)
    {
        cout<< "Enter Player 2 =";
        cin>> enter;

        int x = enter[0];
        x = x-48;

        z = enter[1];
        if(z == "A")
        y = 0;
        else if(z == "B")
        y = 1;
        else if(z == "C")
        y = 2;
    
        array[x][y] = 'X';
        counter++;
    }
}
bool check(char symbol)
{
    if(checkRow(symbol))
    {
        if(symbol == 'O')
        {
            cout<< "************************Player 1 Wins************************"<<endl;
            return true;
        }
        else if(symbol == 'X')
        {
            cout<< "************************Player 2 Wins************************"<<endl;
            return true;
        }
    }
    else if(checkCol(symbol))
    {
        if(symbol == 'O')
        {
            cout<< "************************Player 1 Wins************************"<<endl;
            return true;
        }
        else if(symbol == 'X')
        {
            cout<< "************************Player 2 Wins************************"<<endl;
            return true;
        }
    }
    else if(checkDiag(symbol))
    {
        if(symbol == 'O')
        {
            cout<< "************************Player 1 Wins************************"<<endl;
            return true;
        }
        else if(symbol == 'X')
        {
            cout<< "************************Player 2 Wins************************"<<endl;
            return true;
        }
    }
    return false;
}
