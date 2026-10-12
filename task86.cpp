#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
    long long num = 0;

    while (n != 0) {
        int r = n % 10;

        long long next = num * 10 + r;

        if (next > INT_MAX || next < INT_MIN)
            return 0;

        num = next;
        n /= 10;
    }

    return (int)num;
}

int main() 
{
    cout << rev(153);
    return 0;
}