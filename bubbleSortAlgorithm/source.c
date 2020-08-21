#include "stdio.h "
void scan(int* arr, int size)
{
    int count;// is used as  counter
    for (count = 0; count < size; count++)//loop all numbers in array  
    {
        printf("arr[%d]=", count);//print this to user 
        scanf("%d", arr + count);//get input from user
    }
}
void bubble_sort(int* arr, int size) {
    int count1;//is used as counter for outer loop 
    int count2;// is used as counter for inner loop 
    int temp;//is used to stor tmporary value to swap
    for (count1 = 0; count1 < size - 1; count1++) //loop all elements in array except the last element
    {
        for (count2 = count1 + 1; count2 < size; count2++) // loop all elements in array after an element from outer array  
        {
            if (arr[count1] > arr[count2])//check if the next number is less than the current number 
            {
                temp = arr[count1];//temp will hold value of the current number 
                arr[count1] = arr[count2];//current number will be equal to next  number 
                arr[count2] = temp;//next number will hold be equal to previous/ current number
            }
        }
    }
}

void print(int* arr, int size)
{
    int count;// is used as  a counter 
    printf("\n=======================================================\n");// print equals to console
    for (count = 0; count < 10; count++)// llop all elements array 
    {
        printf("arr[%d]=%d\n", count, arr[count]);//print each element in array 
    }
}
int main(void) {
    int arr[10];//declae array 
    printf("enters numbers to be sorted \n");//print this message to user 
    scan(arr, 10);//initialize array from user 
    bubble_sort(arr, 10);// sort all number asending 
    print(arr, 10);// print all array elements 
}