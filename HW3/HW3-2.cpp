//HW3-2
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    
    cout << "請輸入陣列大小(最多不超過100)： ";
    cin >> n;
    
    cout << "請輸入 " << n << " 個元素： ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cout << "反轉後的陣列： ";
    for (int i = n-1; i>=0; i--){
        cout << a[i];
        if(i > 0){
            std::cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
