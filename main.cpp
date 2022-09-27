#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    int n;
    string s;

    cin>>n>>s;

    vector <char> partidas (s.begin(), s.end());

    int winAnton = count(partidas.begin(), partidas.end(), 'A');
    int winDanik = n-winAnton;

    if(winAnton > winDanik){
        cout<<"Anton";
    }else if(winAnton == winDanik){
        cout<<"Friendship";
    }else{
        cout<<"Danik";
    }

    return 0;
}
