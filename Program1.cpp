//WAP to find largest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int A[10],n,i,j,temp;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for(i=0;i<n;i++)
        cin >> A[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout << "The second largest no. is: " <<A[1];
    cout << "The second minimum no. is: " <<A[n-2];
    return 0;
}

