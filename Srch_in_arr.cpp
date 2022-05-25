#define _Searching_in_array_
#define _code_prectice_2020_
#define _cpp_Aditya_2020_
#define _Linear_and_binary_search_
#include <iostream>

using namespace std;

int linear_search(int x, int arr[], int key);
int binary_search(int n, int arr[], int key);
void last();

int main()
{

    int n;
    cout << "Enter the number of array you want: ";
    cin >> n;

    int az[n];
    for (int i = 0; i < n; i++)
    {
        cin >> az[i];
    }

    int findx;
    cout << "Enter the number to find: ";
    cin >> findx;

    int x;
            
    cout << "Enter 1 to use Linear search: " << endl;
    cout << "Enter 2 to use Binary Search: " << endl;
    cout<< "Your Selection: ";

    cin >> x;

    switch (x)
    {
    case 1:
        cout<<linear_search(n, az, findx)<<endl;
        last();
        break;
    case 2:
        cout<<binary_search(n, az, findx)<<endl;
        last();
        break;
    default:
        cout << "Enter a valud option>>";
        main();
    }

    return 0;
}

int linear_search(int x, int arr[], int key)
{
    for (int j = 0; j < x; j++)
    {
        if (arr[j] == key)
        {
            return j;
        }
    }
    return -1;
}

int binary_search(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= key)
        {
            if (arr[i] <= key)
            {
                return i;
            }
        }
    }
    return -1;
}

void last(){
    int x;
    cout<<"Press 1 to continue: "<<endl;
    cout<<"Press any number to exit: "<<endl;
    cin>>x;
    if (x==1)
    {
        main();
    }
    else{
        exit(1);
    }
    
}

// Created with ♥ by @Aditya-20