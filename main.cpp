#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream theFile("players.txt");

    int id;
    string name;
    double money;

    while(theFile >> id >> name >> money){
        cout << id << " , " << name << " , " << money << endl;
    }
    return 0;
}
