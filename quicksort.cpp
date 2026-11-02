#include <iostream>
using namespace std;

partition(int arr[10,1,6,13,5,12], int lb, int ub)
{
pivot = arr[lb]
 start=lb+1;
 end=ub;
while(start<end)
{
    while(arr[start]<= pivot)

    start ++;

while(arr[end]> pivot){
    end --;
}
swap (arr[start],arr[end]);
}
swap(arr[start],arr[end]);
return end;
}
