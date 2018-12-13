//
// Created by 26794 on 2018/12/13.
//
/*折半查找*/
int Binary_Search(int a*,int n,int key)
{
int low,high,mid;
low=1;     /*定义最底下标为记录首位*/
high=n;    /*定义最高下标为记录末位*/
while(low<=high)
{
mid=(low+high)/2;    /*折半*/
if(key<a[mid])
high=mid-1;
if(key>a[mid])
low=mid+1;
else
return mid;
}
return 0;
}
