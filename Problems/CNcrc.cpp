#include <iostream>
using namespace std;
int xor1(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    return 1;
}
void crc(int a[], int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        a[i] = xor1(a[i], b[i] * a[0]);
    }
}
void display(int code[], int l1)
{
    for (int i = 0; i < l1; i++)
    {
        cout << code[i] << " ";
    }
    cout << endl;
}
int main()
{
    int code[20];
    int data[] = {1, 0, 0, 1, 0, 1, 1, 1, 0};
    int div[] = {1, 1, 0, 1};
    int i, n, k;
    n = sizeof(data) / sizeof(int);
    k = sizeof(div) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        code[i] = data[i];
    }
    for (int i = n; i < n + k - 1; i++)
    {
        code[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        crc(&code[i], &div[0], k);
    }

    display(code, n + k - 1);
    for (int i = 0; i < n; i++)
    {
        code[i] = data[i];
    }

    for (int i = 0; i < n; i++)
    {
        crc(&code[i], &div[0], k);
    }
    display(code, n + k - 1);
}