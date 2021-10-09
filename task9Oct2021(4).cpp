#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
int arr[size]= {1,2,3,4,15};
for(int i = 0 ; i < size; i++)
{
    if(arr[i]%3==0 && arr[i]%5 == 0)
    cout <<arr[i] <<" = ture" << endl;
    else 
    {
        cout << arr[i] <<" = false" << endl;
    }


}
return 0;
}