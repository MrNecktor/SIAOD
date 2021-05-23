#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> coins;
    int len;
    int a;
    int ans=0;

    cout<< "Введите кол-во монет"<<endl;
    cin >>len;

    cout <<"Введите монеты через enter"<<endl;

    for (int i=0; i<len; ++i)
    {
        cin>>a;
        coins.push_back(a);
    }

    sort(coins.begin(), coins.end());

    while (!coins.empty())
    {
        coins.erase(coins.end()-1);
        ans+= *(coins.end()-1);
        coins.erase(coins.end()-1);
        coins.erase(coins.begin());
    }
    cout<<ans;
    return 0;
}