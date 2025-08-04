#include <iostream>

using namespace std;
int i, j;
char text;
int s(string text);

int main() {

    s("Go to hell");

    return 0;
}


int s(string text){
    int num;
    string name = "James";
    cout << text << ", " << name << endl;
    cout << "What do you want"<< endl;
    cin >> num;
    for (i =0; i < num; i++) 
    {
        for (j=0; j < num; j++)
        {
            cout << " * ";
        }cout << endl;
    }

    for (i = 0; i < num; i++) 
    {
        cout << string(num - i, ' ');
        for (int j = 0; j <= i; j++) cout << "* ";
        cout << endl;
    }
    
    for (i = num; i >= 0; i--)
    {
        cout << string(num - i, ' ');
        for (int j = 0; j <= i; j++) cout << "* ";
        cout << endl;
    }   
}

