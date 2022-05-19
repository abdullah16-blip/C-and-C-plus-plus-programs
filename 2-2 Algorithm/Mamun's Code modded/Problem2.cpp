#include <iostream>
using namespace std;
int main()
{
    int test, size_Arr;
    int Arr[50010];
    cin >> test;
    while (test--)
    {
        cin >> size_Arr;
        for (int i = 0; i < size_Arr; i++)
        {
            cin >> Arr[i];
        }
        int count = 0;
        for (int i = 0; i < size_Arr - 2; i++)
        {
            for (int j = i + 2; j < size_Arr; j++)
            {
                if (Arr[i] == Arr[j])
                {
                    cout << "YES" << endl;
                    count++;
                    break;
                }
            }
            if (count != 0)
                break;
        }
        if (count == 0)
            cout << "NO" << endl;
    }
}