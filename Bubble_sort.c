# include<stdio.h>      // header file

void bubbleSort_232028_prasanna_shakya(int *array_232028, int n);   // function declaration

int main()      // main function
{
int array_232028[] ={4, 21, 8, 6, 4, 2, 14, 9, 7, 11, 3};   // array initialization (declaration)
int n = 11;     // size of array
printf("Array before sorting :\n");     // print array element
for (int i=0; i<n; i++)     // for loop
{
printf("%d\t",array_232028[i]);     // print element of array
}
bubbleSort_232028_prasanna_shakya(array_232028, n);     // function call
printf("\nArray after sorting :\n");    // print sorted array element
for (int i=0; i<n; i++)     // loop
{
printf("%d\t",array_232028[i]);     // print element of sorted array
}
return 0;
}
void bubbleSort_232028_prasanna_shakya(int *array_232028, int n)    // function definition
{
int temp;   // integer variable declaration
for(int i=0; i<n-1; i++)    // outer for loop
{
for(int j=0; j<n-1-i; j++)      // inner for loop
{
if(array_232028[j]>array_232028[j+1])   // if condition
{
temp = array_232028[j];         // swapping
array_232028[j] = array_232028[j+1];
array_232028[j+1] = temp;
}
}
}
}