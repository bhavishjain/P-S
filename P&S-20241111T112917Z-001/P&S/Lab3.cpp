#include <bits/stdc++.h>
using namespace std;
void prg()
{
    vector<pair<int,float>>arr;
    float n = 20;
    float sum = 0;
    for(int i = 1; i<=n/2; i++)
    {
        float num1 = i, num2 = -1*i;
        float curr1 = cos((pow(num1,4))/abs(num1));
        float curr2 = cos((pow(num2,4))/abs(num2));
        arr.push_back({num1,curr1});
        arr.push_back({num2,curr2});
        sum = sum + curr1 + curr2;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<"x : "<<arr[i].first<<"   f(x) : "<<arr[i].second<<endl;
    }
    float mean = sum/n;
    cout<<"Mean : "<<mean<<endl;
    float abssum = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        abssum = abssum + pow(abs(mean-arr[i].second),2);
    }
    float variance = abssum/n;
    cout<<"Variance : "<<variance<<endl;
    float sd = pow(variance,0.5);
    float coeff = sd/mean;
    cout<<"Coefficient of Variation : "<<coeff<<endl;

}
int main()
{
    prg();
    return 0;
}
