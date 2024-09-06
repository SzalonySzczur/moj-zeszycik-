#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("liczby.txt");
    vector<int> tab;
    int x;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<5; j++)
        {
            plik>>x;
            tab.push_back(x);
        }
    }

    plik.close();
    for(int i=0; i<5*10; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}
