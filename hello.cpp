#include<iostream>
#include<string>
using namespace std;

int main()
{
    int listLength;

    cout << "Welcome! How long do you want your list to be?" << endl;
    cin >> listLength;

    string* topList = new string[listLength];

    cin.ignore();

    int numOfItems = listLength;

    for (int i=0; i<listLength; i++) {
        cout << "Place " << numOfItems << "\nEnter a song: " << endl;
        getline(cin, topList[i]);
        numOfItems--;
    }

    printf("\n");

    for (int i=0; i<listLength; i++) {
        cout << "Top: " << topList[i] << endl;
    }
    return 0;
}