#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "���빫�";
    cin >> y;
    cout << endl << "�������ֵ��";
    cin >> z;
    cout << endl;

    if (y > 0)
    {
        for (x = 1; x <= z; x = x + y)
        {
            cout << x << ", ";
        }
    }
    else
    {
        cout << "ֻ��������������";
    }
    cout << endl;

    system("pause");

    return 0;
}
