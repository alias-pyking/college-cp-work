#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    string temp;
    ifstream file1;
    ofstream file2;
    string tx1;
    string tx2;
    file1.open( "mfile.txt");
    file2.open( "mfile.txt", fstream::in | fstream::out | fstream::ate | ios::app);
    cout<<"Enter the text that you want to edit\n";
    getline(cin, tx1);
    cout<<"Enter the text to replace\n";
    getline(cin, tx2);
    while (getline(file1, temp))
      {
    if (temp.find(tx1)!=string::npos)
    {
        temp.replace(temp.find(tx1),tx1.length(),tx2);
        file2 << temp.find(tx2);
        cout<<"\nText has been replaced";
        break;
     }
    }
    file1.close();
    file2.close();
    return 0;
}
