#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int *arr, int s, int e)
{
    cout <<" s=" << s << " e=" << e << endl;

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
    cout<<"--------Merge process ends here--------"<<endl;
}
void mergesort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    cout << "mid=" << mid << " s=" << s << " e=" << e << endl;
    if (s >= e)
    {
        return;
    }
    mergesort(arr, s, mid);
    cout << "mid=" << mid << " s=" << s << " e=" << e << endl;
    mergesort(arr, mid + 1, e);
    cout << "mid=" << mid << " s=" << s << " e=" << e << endl;
    cout << "--------Merging processs starts--------" << endl;
    merge(arr, s, e);
    print(arr, 0, 5);
}

int main()
{

    int arr[6] = {6, 5, 4, 3, 2, 1};
    int n = 6;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}