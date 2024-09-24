// HW1-2

#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
    string c, studentNumber, Name;
    
    std::cout << "請輸入班級： ";
    cin >> c;
    std::cout << "請輸入學號： ";
    cin >> studentNumber;
    std::cout << "請輸入姓名： ";
    cin >> Name;
    
    std::cout << c << ", " << studentNumber << ", " << Name << endl;
    
    return 0;
}
