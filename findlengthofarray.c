How to Find the Length of Array in C?

To find the length of the array we have to use sizeof() function.
The sizeof() function in C calculates the size in bytes of the passed variable or data type.

To calculate the length of array in C,

   first, calculate the total size of the array and then calculate the size of the data type. 
  After that divide the total size of the array/size of the data type.

Length of array = ( total size of array ) / ( size of data type )

int array[] = {10, 20, 30};
int size = sizeof(array) / sizeof(int);
The size of the data type is platform-dependent, therefore it is better to use the first element of the array.

Length of array = ( total size of the array ) / ( size of the first element of the array )

int array[] = {10, 20, 30};
int size = sizeof(array) / sizeof(array[0]);


LOGIC:


Calculate the size of the array using sizeof operator e.g. sizeof(arr).
Calculate the size of an int value using sizeof(int).
To get the length of the array( number of elements), divide total size of array by size of 1 int.
Array length = size of array/ size of 1 int


PROGRAM:



Program to calculate length of array in C
/*
* C program to get length of int array
*/

#include<stdio.h>
int main(){

	int Length  =0;

	int arr[] = {2,4,6,8,9,4};//6 elements

	printf("Size of int array:%d \n",sizeof(arr));
	printf("Size of 1 int value :%d \n",sizeof(int));

	//Calculate length of the array ( Number of elements)
	Length  = sizeof(arr)/sizeof(int);

	//display array length

	printf("So, array length is:%d",Length );

	return 0;
}

Output:
Size of int array:24
Size of 1 int value :4
So, array length is:6



PROGRAM2:

#include<stdio.h>
int main(){
    int len  =0;
    int arr[] = {2,4,6,8,9,4};//6 elements
    printf("C Program to calculate length of array(total Elements) \n");
    //sizeof(arr) in C calculate the total memory size
    printf("Size of Array is :%d \n",sizeof(arr));
    printf("Size of one int value is :%d \n",sizeof(int));
    //Here calculating length of array
    len  = sizeof(arr)/sizeof(int);
    printf("Length of Array is:%d",len);
    return 0;
} 
output:
C Program to calculate length of array(total Elements) 
Size of Array is :24 
Size of one int value is :4
