#include<bits/stdc++.h>
using namespace std;
long long C(int a, int b)
{
    if (b > a) return 0;
    if (b == 0 || b == a) return 1;
    b = min(b, a - b);
    long long res = 1;
    for (int i = 0; i < b; ++i) {
        res = res * (a - i) / (i + 1);
    }
    return res;
}
float fact(int k)
{
    if(k==1 || k==0)
        return 1;
    return k*fact(k-1);
}
float PMF(float i, float p)
{
    return C(4,i)*(float)pow(p,i)*pow(1-p,4-i);
}
float Poisson(float lambda, int k)
{
    return pow(exp(1),-1*lambda)*pow(lambda,k)/fact(k);
}
void prg1()
{
    vector<int>cnt = {0,1,2,3};
    vector<int>freq = {36,40,22,2};
    float expect = 0;
    for(int i = 0; i<cnt.size(); i++)
    {
        expect = expect + cnt[i]*freq[i];
    }
    expect = expect/100.0;
    //cout<<expect<<endl;
    float P = expect/4;
    //cout<<P<<endl;
    cout<<"Binomial Distribution"<<endl;
    float currf = 100*PMF(0,P);
    cout<<"For "<<0<<" Heads : "<<currf<<endl;
    for(int i = 1; i<4; i++)
    {
        float newf = (4-i)*P*currf/(i*(1-P));
        cout<<"For "<<i<<" Heads : "<<100*PMF(i,P)<<endl;
        currf = newf;
    }
}
void prg2()
{
    vector<int>cnt = {0,1,2,3,4};
    vector<int>freq = {211,90,19,5,0};
    float expect = 0;
    float sum = 0;
    for(int i = 0; i<cnt.size(); i++)
    {
        expect = expect + cnt[i]*freq[i];
        sum = sum + freq[i];
    }
    expect = expect/sum;
    float currf = sum*Poisson(expect,0);
    //cout<<expect<<endl;
    cout<<"Poisson Distribution"<<endl;
    cout<<"For "<<0<<" Mistakes per page : "<<currf<<endl;
    for(int i = 1; i<5; i++)
    {
        float newf = currf*expect/i;
        cout<<"For "<<i<<" Mistakes per page : "<<newf<<endl;
        currf = newf;
    }
}
int main()
{
    prg1();
    cout<<endl<<endl;
    prg2();
    return 0;
}
