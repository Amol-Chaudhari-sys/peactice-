#include <iostream>
using namespace std;

void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void numtriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void numtriangle2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void revtriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void revnumtriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void striangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " * ";
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << "   ";
        }
        cout << endl;
    }
}
void revstriangle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * (n + 1) - (2 * i + 1); j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        cout << endl;
    }
}
void rhumbus(int n)
{
    striangle(n);
    revstriangle(n);
}
void halfrhumbus(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 0; j < star; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void binarytri(int n)
{
    for (int i = 0; i <= n; i++)
    {
        int k = 1;
        if (i % 2 == 0)
        {
            k = 0;
        }
        else
            k = 1;
        for (int j = 0; j < i; j++)
        {

            cout << " " << k << " ";
            k = 1 - k;
        }
        cout << endl;
    }
}
void binumtri(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "   ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}
void triangle2(int n)
{
    int m = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " " << m << " ";
            ++m;
        }
        cout << endl;
    }
}
void abctri(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}
void invabctri(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + (n - i - 1); j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}
void abctri2(int n)
{
    for (char i = 0; i < n; i++)
    {
        char k = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << k;
        }
        cout << endl;
    }
}
void sabctri(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "   ";
        }
        char ch = 'A';
        int br = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << " " << ch << " ";
            if (j <= br)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "   ";
        }
        cout << endl;
    }
}
void abctri3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}
void square2(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " * ";
        }
        space += 2;
        cout << endl;
    }
    space = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < space; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        space -= 2;
        cout << endl;
    }
}
void butterfly(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << " * ";
        }

        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << " * ";
        }
        if (i < n)
            space -= 2;
        else
            space += 2;
        cout << endl;
    }
}
void hsquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << " * ";
            }
            else
                cout << "   ";
        }
        cout << endl;
    }
}
void numtri(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << " " << (n - min(min(left, right), min(top, down))) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter length :" << endl;
    cin >> n;
    square(n);
    triangle(n);
    numtriangle(n);
    numtriangle2(n);
    revtriangle(n);
    revnumtriangle(n);
    striangle(n);
    revstriangle(n);
    rhumbus(n);
    halfrhumbus(n);
    binarytri(n);
    binumtri(n);
    triangle2(n);
    abctri(n);
    invabctri(n);
    abctri2(n);
    sabctri(n);
    abctri3(5);
    square2(n);
    butterfly(n);
    hsquare(n);
    numtri(n);
}