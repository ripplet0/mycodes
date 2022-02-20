#include<iostream>
#define MAX 10
using namespace std;
class bubbsort
{
    int arr[MAX],i,n;
    public:
    void getdata();
    void showdata();
    void sortlogic();
};
void bubbsort::getdata()
{
    cout<<"Enter the limit: ";
    cin>>n;
    cout<<"Enetr the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void bubbsort::showdata()
{
    cout<<"Elements after bubblesorting";
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
void bubbsort::sortlogic()
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cout<<"\n arr[j]="<<arr[j]<<"arr[j+1]="<<arr[j+1];
            }
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"***Bubble sort***\n";
    bubbsort obj;
    obj.getdata();
    obj.showdata();
    obj.sortlogic();
}