#include <stdio.h>
#include<conio.h>
struct Search
{
    int arr[40];
    int size;
};

int linearSearch(int size, int Element, int arr[])
{
    int i = 0;
    while (i != (size + 1))
    {
        if (arr[i] == Element)
        {
            return i;
        }
        i++;
    }
    return -1;
}
int binarySearch(int size, int Element, int arr[])
{
    int low, mid, high;
    low = 0;
    high = size;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (Element == arr[mid])
        {
            return mid;
        }
        else if (Element < arr[mid])
        {
            high = (mid - 1);
        }
        else
        {
            low = (mid + 1);
        }
    }
    return -1;
}
int main()
{
    int searchElement;
    struct Search s;
    printf("Enter size of array\n");
    scanf("%d", &s.size);
    printf("Enter array elements \n");
    for (int i = 0; i <= s.size; i++)
    {
        scanf("%d", &s.arr[i]);
    }

    for (int i = 0; i <= s.size; i++)
    {
        printf("%d ", s.arr[i]);
    }
    printf("\nEnter Element for search in above array \n");
    scanf("%d", &searchElement);
    //  int result = linearSearch(s.size,searchElement,s.arr);
    int result = binarySearch(s.size, searchElement, s.arr);
    if (result >= 0)
    {
        printf("Entered Element for search is in the array at index %d\n", result);
    }
    else
    {
        printf("Entered Element for search is not in array%d\n", result);
    }
    getch();
    
    return 0;
}