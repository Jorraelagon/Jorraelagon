#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int> phonebook;
    int n;
    cout<<"Enter number of Entries , Do you want to enter"<<"\n";
    cin>>n;
    cout<<"Enter Name and phone number with single space (example :- Saurabh 1234567890)"<<"\n";
    for(int i=0;i<n;i++){
        int m;
        string str;
        cin>>str>>m;
        phonebook.insert(pair<string,int>(str,m));
    }
    map<string,int>::iterator itr;
    cout<<"Enter the name of person"<<"\n";
    string str;
    while(cin>>str){
    itr=phonebook.find(string(str));
    if(itr!=phonebook.end())
    cout<<itr->first<<" "<<itr->second
        <<"\n";
        else
        cout<<"Not found"<<"\n";
    }
    return 0;
}
