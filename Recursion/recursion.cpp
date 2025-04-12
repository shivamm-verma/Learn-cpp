#include <iostream>
using namespace std;

int count = 0;
void recurs(int cnt)
{
    if (cnt == 5)
        return;
    cout << "count: " << cnt << endl;
    cnt++;
    recurs(cnt);
}

int main()
{
    recurs(count);
}