#include<bits/stdc++.h>

using namespace std;

int main()
{   int counter=0;
    string username; cin>>username;

    set<char>UnicLibrary(begin(username), end(username));

    if(UnicLibrary.size()%2!=0)
    {cout<<"IGNORE HIM!";}

    else
    {cout<<"CHAT WITH HER!";}
    

    return 0;
}