#include <iostream>
using namespace std;

int main()
{
    //اینجا متغیر های n1 , n2 , n3 , i , number رو تعریف میکنیم و مقدار n1 رو 0 مقدار n2 رو 1 قرار دادیم
    int n1 = 0, n2 = 1, n3, i, number;
    cout << "Enter the number of elements: ";
    // اینجا مقدار number رو از ورودی کاربر میگیریم
    cin >> number;
    // اینجا اعداد 0 و 1 رو که مقدایر اول دنباله فیبوناچی هستند رو چاپ میکنیم
    cout << n1 << " " << n2 << " "; 
    // اینجا وارد یه حلقه میشیم که اول مقدار i رو برابر 2 قرار میدیم و هربار یکی بهش اضافه میکنیم و مقدار n3 رو برابر مجموع n1 , n2 قرار میدیم
    //و مقدار n1 رو برابر n2 و مقدار n2 رو برابر مقدار جدیدمون یعنی n3 قرار میدیم تا یه مرحله تو دنباله بریم جلو

    for (i = 2; i < number; ++i) 
        {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
        //اینجام هم مقدار 0 رو برمیگردونیم تا تابع تموم شه
    return 0;
}