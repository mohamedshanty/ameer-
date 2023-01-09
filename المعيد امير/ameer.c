#include <stdio.h>

//1-C Program to Reverse a Number

//int main() {
//
//  int n, reverse = 0, remainder;
//
//  printf("Enter an integer: ");
//  scanf("%d", &n);
//
//  while (n != 0) {
//    remainder = n % 10;
//    reverse = reverse * 10 + remainder;
//    n /= 10;
//  }
//
//  printf("Reversed number = %d", reverse);
//
//  return 0;
//}



//2-write a program that allow user to input the number of seconds and then convert
//these seconds into days,hours,minutes and remaining seconds


//int main(){
//	
//	int inputSecond;
//	
//	int hours,minutes,seconds;
//	int remainingSeconds;
//
//	int secondsInHour = 60 * 60;
//	int secondsInMinute = 60;
//
//	printf("Enter seconds : ");
//	scanf("%d",&inputSecond);
//
//	hours = (inputSecond/secondsInHour);
//
//	remainingSeconds = inputSecond - (hours * secondsInHour);
//	minutes = remainingSeconds/secondsInMinute;
//
//	remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
//	seconds = remainingSeconds;
//
//	printf("%d hour\n%d minutes\n%d seconds",hours,minutes,seconds);
//}



//3-C Program to Convert Binary to Decimal

//int main()
//{
//    int binary, decimal = 0, base = 1, remainder;
//    
//    printf("Enter the Binary Number = ");
//    scanf("%d", &binary);
//
//    int temp = binary;
//    while(temp > 0)
//    {
//        remainder = temp % 10;
//        decimal = decimal + remainder * base;
//        temp = temp / 10;
//        base = base * 2;
//    }
//
//    printf("The Binary Value  = %d\n", binary);
//    printf("The Decimal Value = %d\n", decimal);
//
//    return 0;
//}



//4- Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

//int main(){  
//    long int n,i,t=9;
//	int sum =0;
//	printf("Input the number or terms :");
//	scanf("%ld",&n);
//	for (i=1;i<=n;i++)
//	{ sum +=t;
//	  printf("%ld   ",t);
//	  t=t*10+9;
//	}
//	printf("\nThe sum of the series = %d \n",sum);
//}



//5-Write a program in C to find the prime numbers within a range of numbers.

//void main(){
//    int num,i,ctr,stno,enno;
//
//    printf("Input starting number of range: ");
//    scanf("%d",&stno);
//
//    printf("Input ending number of range : ");
//    scanf("%d",&enno);
//    printf("The prime numbers between %d and %d are : \n",stno,enno);
//  
//    for(num = stno;num<=enno;num++)
//       {
//         ctr = 0;
//
//         for(i=2;i<=num/2;i++)
//            {
//             if(num%i==0){
//                 ctr++;
//                 break;
//             }
//        }
//        
//         if(ctr==0 && num!= 1)
//             printf("%d ",num);
//    }
//printf("\n");  
//}
 


//6-C Program for Fibonacci Series Using for Loop

//int main()
//{
//  int n, nbr1 = 0, nbr2 = 1, next, i;
// 
//  printf("Enter the number of terms: ");
//  scanf("%d", &n);
// 
//  printf("The first %d terms of the Fibonacci series are: \n", n);
// 
//  for (i = 0; i < n; i++)
//  {
//    if (i <= 1)
//      next = i;
//    else
//    {
//      next = nbr1 + nbr2;
//      nbr1 = nbr2;
//      nbr2 = next;
//    }
//    printf("%d\n", next);
//  }
// 
//  return 0;
//}



//7-Suppose that you are asked to write a program for reading 4 numbers from the user
//.and determining the maximum value of these numbers

//int main(void)
//{
//    int first, second, third, fourth;
//    printf("Enter four integers (separated by space): ");
//    scanf("%d %d %d %d", &first, &second, &third, &fourth);
//
//    if((first>second) && (first>third) && (first>fourth))
//        printf("\nFirst number is largest");
//        
//    else if((second>first) && (second>third) && (second>fourth))
//        printf("\nSecond number is largest");
//        
//    else if((third>second) && (third>first) && (third>fourth))
//        printf("\nThird number is largest");
//        
//    else if((fourth>second) && (fourth>third) && (fourth>first))
//        printf("\nFourth number is largest");
//
//    if((first<second) && (first<third) && (first<fourth))
//        printf("\nFirst number is smallest");
//        
//    else if((second<first) && (second<third) && (second<fourth))
//        printf("\nSecond number is smallest");
//        
//    else if((third<second) && (third<first) && (third<fourth))
//        printf("\nThird number is smallest");
//        
//    else if((fourth<second) && (fourth<third) && (fourth<first))
//        printf("\nFourth number is smallest");
//
//}


//8-Write a C program computing the equation: R-x/I! + x/2! + x/3! + x/4! + x/5!
//
//The program should contain the following:
//
//1. Declaration for a function computing the factorial. (5 points)
//
//2. Declaration for a function computing the power. (5 points) 3. Declaration for the main function that enables the user to
//
//input the value of x and calls the factorial and power functions to compute the result of the equation.


// Function to calculate the factorial of a number
//int factorial(int n)
//{
//int result = 1 , i;
//for ( i = 1; i <= n; i++)
//{
//result *= i;
//}
//return result;
//}
//
//// Function to calculate the power of a number
//int power(int base, int exponent)
//{
//int result = 1 , i;
//for ( i = 0; i < exponent; i++)
//{
//result *= base;
//}
//return result;
//}
//
//int main()
//{
//// Declare variables
//int x, R, result = 0 , i;
//
//// Get input from user
//printf("Enter the value of x: ");
//scanf("%d", &x);
//printf("Enter the value of R: ");
//scanf("%d", &R);
//
//// Calculate the result of the equation using the factorial and power functions
//for ( i = 1; i <= 5; i++)
//{
//    result += (x / factorial(i)) + power(-1, i + 1);
//}
//
//// Add R to the result
//result += R;
//
//// Print the result
//printf("Result: %d", result);
//
//return 0;
//}
