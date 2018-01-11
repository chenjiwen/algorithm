/*
 *bubble sort
 *
 */

void bubble_sort(int a[], int length)
{
    int i = 0, j = 0;
    for(i = 0; i < length - 1; i++)
        for(j = i; j < length - 1; j++)
        {
            int temp = 0;
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }  
}
