#include <bits/stdc++.h>
using namespace std;
void prg1()
{
    vector<int>arr = {38,40,47,44,46,43,49,53};
    int sum = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++)
    {
        sum += arr[i];
    }
    float mean = (float)sum/n;
    cout<<"Mean : "<<mean<<endl;
    int abssum = 0;
    for(int i = 0; i<n; i++)
    {
        abssum = abssum + pow(arr[i]-mean,2);
    }
    float variance = (float)abssum/n;
    cout<<"Variance : "<<variance<<endl;
    float coeffofvar = pow(variance,0.5)/mean;
    cout<<"Coefficient of Variance : "<<coeffofvar<<endl;
}
void prg2()
{
    int marks1 = 460, marks2 = 480;
    float sd1 = 4.6, sd2 = 2.4;
    float mean1 = marks1/5;
    float mean2 = marks2/5;
    float coeff1 = sd1/mean1;
    float coeff2 = sd2/mean2;
    if(coeff1==coeff2)
    {
        cout<<"Both are equally consistent"<<endl;
    }
    else if(coeff1>coeff2)
    {
        cout<<"B is more consistent"<<endl;
    }
    else
    {
        cout<<"A is more consistent"<<endl;
    }
}
int main()
{
    prg1();
    cout<<endl;
    prg2();
}
