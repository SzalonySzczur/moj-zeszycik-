#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
vector<int> liczby;

int main()
{
    ifstream plik("dane_ulamki.txt");
    int temp;
    int i=0;
    while(!plik.eof())
    {
        plik >> temp;
        liczby.push_back(temp);
        cout<<liczby[i];
        if(i%2==0)
        {
            cout<<" ";
        }
        else
        {
            cout<<endl;
        }
        i++;
    }
    plik.close();

    return 0;
}
