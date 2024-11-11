#include <bits/stdc++.h>
using namespace std;
void prg(vector<float>x)
{
    int n = x.size();
    float sumx = 0;
    for(int i = 0; i<n; i++)
    {
        sumx += x[i];
    }
    float mx = sumx/n;
    float varx = 0;
    for(int i = 0; i<n; i++)
    {
        varx += pow(x[i]-mx,2);
    }
    varx = varx/n;
    float sdx = sqrt(varx);
    float alpha = 0.05;
    float val_right = 8.91;
    float val_left = 32.85;
    //cout<<val_left<<" "<<val_right<<endl;
    float left_interval1 = (n-1)*varx/val_left;
    float right_interval1 = (n-1)*varx/val_right;
    cout<<"95% confidence interval around Variance is : "<<left_interval1<<" "<<right_interval1<<endl;
    float left_interval2 = (n-1)*sdx/val_left;
    float right_interval2 = (n-1)*sdx/val_right;
    cout<<"95% confidence interval around Standard Deviation is : "<<left_interval2<<" "<<right_interval2<<endl;
}
int main()
{
    vector<float>arr1 = {2.02,1.94,2.09,1.95,1.98,2.00,2.03,2.04,2.08,2.07,1.99,1.96,1.99,1.95,1.99,1.99,2.03,2.05,2.01,2.03};
    vector<float>arr2 = {581,581,580,583,581,577,577,578,580,582,581,581,577,582,579,580,579,582,578,579};
    prg(arr1);
    cout<<endl;
    prg(arr2);
    return 0;
}
