#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout<<fixed<<setprecision(10);
    float pi = 3.141213141516;
    float pi2 = 3.141213141516;

    if ((pi == pi2))
        cout << "teng";
    else
        cout << "teng emas" << endl;

    return 0;
}