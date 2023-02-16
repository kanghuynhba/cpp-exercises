#include<bits/stdc++.h>
using namespace std;
double fat,totalcalo,calo,percenttotalcalo,percentcalo;
int main()
{
    ios_base::sync_with_stdio();
    cin>>fat>>totalcalo;
    calo=fat*9;
    if(fat<0 || (calo)>totalcalo || totalcalo<0)
    cout<<"The calories or fat grams were incorrectly entered!";
    else
    {
        percenttotalcalo=(totalcalo*30)/100;
        percentcalo=calo/totalcalo;
        if(calo<percenttotalcalo)
        {
            cout<<"The food is low in fat!"<<endl;
            cout<<setprecision(3)<<percentcalo;
        }
        else cout<<setprecision(3)<<percentcalo;
    }
}