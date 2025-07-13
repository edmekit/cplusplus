#include <iostream>

using namespace std;
int i, j;
char text;
int s(string text);

int main() {

    s("Go to hell");
    for (i =0; i < 5; i++) 
    {
        for (j=0; j < 5; j++)
        {
            cout << "*";
        } cout << endl;
    } 
    return 0;
}


int s(string text){
    string name = "James";
    cout << text << ", " << name << endl;
}