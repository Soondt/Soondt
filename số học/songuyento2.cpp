#include<iostream>
using namespace std;
int solve(int n){
    int k = 2, sum = 0;
    while (n > 1){
        while (n % k == 0){
            sum += k;
            n /= k;
        }
        k++;
    }
    return sum;
}
int factorSum(int n)
{
    while (n != solve(n))
        n = solve(n);
    return n;
}
int main ()
{
    int n ;
    cin >>  n ;
    cout << factorSum(n);
    return 0;
}