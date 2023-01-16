#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "输入公差：";
    cin >> y;
    cout << endl << "输入最大值：";
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
        cout << "只能输入正整数。";
    }
    cout << endl;

    system("pause");

    return 0;
}
