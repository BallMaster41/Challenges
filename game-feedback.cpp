#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: \n";
    cin >> name;

    string username;
    cout << "Enter your username: \n";
    cin >> username;

    string clanTag;
    cout << "Enter your clanTag: \n";
    cin >> clanTag;

    int xp;
    cout << "Enter the amout of xp currently have: \n";
    cin >> xp;

    cout << " \n";

    cout << "Your name is " << name << " and your in-game name is [" << clanTag << "]" << username << "\n";
    cout << "You have " << xp << " xp\n";
    
    int level = xp / 100;
    int nextLevel = level + 1;
    int requiredxp = nextLevel * 100 - xp;

    cout << "Your current level is " << level << "\n";
    cout << "You need " << requiredxp << " xp to reach level " << nextLevel << "\n";

}
