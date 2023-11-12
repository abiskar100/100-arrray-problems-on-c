#include<stdio.h>

int main(){
   int qn,restart;
   do{
   printf("choose a random number from 1 to 100\n");
   scanf("%d",&qn);
      
   switch (qn)
   {
   case 1:
    printf("1. Write a program in C to store elements in an array and print them.");
    break;
   
   case 2:
    printf("2. Write a program in C to read n number of values in an array and display them in reverse order.");
    break;

    case 3:
    printf("3. Write a program in C to find the sum of all elements of the array.");
    break;

    case 4:
    printf("4. Write a program in C to copy the elements of one array into another array.");
    break;

    case 5:
    printf("5. Write a program in C to count the total number of duplicate elements in an array.");
    break;

    case 6:
    printf("6. Write a program in C to print all unique elements in an array.");
    break;

    case 7:
    printf("7. Write a program in C to merge two arrays of the same size sorted in descending order.");
    break;

    case 8:
    printf("8. Write a program in C to count the frequency of each element of an array.");
    break;

    case 9:
    printf("9. Write a program in C to find the maximum and minimum elements in an array.");
    break;

    case 10:
    printf("10. Write a program in C to separate odd and even integers into separate arrays.");
    break;

    case 11:
    printf("11. Write a program in C to sort elements of an array in ascending order.");
    break;

    case 12:
    printf("12. Write a program in C to sort the elements of the array in descending order.");
    break;

    case 13:
    printf("13. Write a program in C to insert the values in the array (sorted list).");
    break;

    case 14:
    printf("14. Write a program in C to insert values in the array (unsorted list).");
    break;

    case 15:
    printf("15. Write a program in C to delete an element at a desired position from an array.");
    break;

    case 16:
    printf("16. Write a program in C to find the second largest element in an array.");
    break;

    case 17:
    printf("17. Write a program in C to find the second smallest element in an array.");
    break;

    case 18:
    printf("18. Write a program in C for a 2D array of size 3x3 and print the matrix.");
    break;

    case 19:
    printf("19. Write a program in C for adding two matrices of the same size.");
    break;

    case 20:
    printf("20. Write a program in C for the subtraction of two matrices.");
    break;

    case 21:
    printf("21. Write a program in C for the multiplication of two square matrices.");
    break;

    case 22:
    printf("22. Write a program in C to find the transpose of a given matrix.");
    break;

    case 23:
    printf("23. Write a program in C to find the sum of the right diagonals of a matrix.");
    break;

    case 24:
    printf("24. Write a program in C to find the sum of the left diagonals of a matrix.");
    break;

    case 25:
    printf("25. Write a program in C to find the sum of rows and columns of a matrix.");
    break;

    case 26:
    printf("26. Write a program in C to print or display the lower triangular of a given matrix.");
    break;

    case 27:
    printf("27. Write a program in C to print or display an upper triangular matrix.");
    break;

    case 28:
    printf("28. Write a program in C to calculate the determinant of a 3 x 3 matrix.");
    break;

    case 29:
    printf("29. Write a program in C to accept a matrix and determine whether it is a sparse matrix.");
    break;

    case 30:
    printf("30. Write a program in C to accept two matrices and check whether they are equal.");
    break;

    case 31:
    printf("31. Write a program in C to check whether a given matrix is an identity matrix.");
    break;

    case 32:
    printf("32. Write a program in C to find a pair with given sum in the array.");
    break;

    case 33:
    printf("33. Write a program in C to find the majority element of an array.");
    break;

    case 34:
    printf("34. Write a program in C to find the number occurring odd number of times in an array.");
    break;

    case 35:
    printf("35. Write a program in C to find the largest sum of contiguous subarrays in an array.");
    break;

    case 36:
    printf("36. Write a program in C to find the missing number in a given array. There are no duplicates in the list.");
    break;

    case 37:
    printf("37. Write a program in C to find the pivot element of a sorted and rotated array using binary search.");
    break;

    case 38:
    printf("38. Write a program in C to merge one sorted array into another sorted array.");
    break;

    case 39:
    printf("39. Write a program in C to rotate an array by N positions");
    break;

    case 40:
    printf("40. Write a program in C to find the ceiling in a sorted array.N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x.");
    break;

    case 41:
    printf("41. Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sroted array.");
    break;

    case 42:
    printf("42. Write a program in C to find the smallest missing element in a sorted array.");
    break;

    case 43:
    printf("43. Write a program in C to print the next greatest elements in a given unsorted array. Elements for which no superior element exists, consider the next greatest element as -1.");
    break;

    case 44:
    printf("44. Write a program in C to find the two repeating elements in a given array.");
    break;

    case 45:
    printf("45. Write a program in C to find two elements whose sum is closest to zero.");
    break;

    case 46:
    printf("46. Write a program in C to find the smallest positive number missing from an unsorted array.");
    break;

    case 47:
    printf("47. Write a program in C to find a subarray with a given sum from the given array.");
    break;

    case 48:
    printf("48. Write a program in C to find out if a given integer x appears more than n/2 times in a sorted array of n integers.");
    break;

    case 49:
    printf("49. Write a program in C to find the majority element of an array.");
    break;

    case 50:
    printf("50. Write a program in C to print a matrix in spiral form.");
    break;

    case 51:
    printf("51. Write a program in C to find the maximum circular subarray sum of a given array.");
    break;

    case 52:
    printf("52. Write a program in C to count the number of triangles that can be formed from a given array.");
    break;

    case 53:
    printf("53. Write a program in C to find the number of times a given number appears in an array.");
    break;

    case 54:
    printf("54. Write a program in C to sort an array of 0s, 1s and 2s.");
    break;

    case 55:
    printf("55. Write a program in C to check whether an array is a subset of another array.");
    break;

    case 56:
    printf("56. Write a program in C to return the minimum number of jumps to reach the end of the array.");
    break;

    case 57:
    printf("57. Write a program in C to find the minimum element in a sorted and rotated array.");
    break;

    case 58:
    printf("58. Write a program in C to move all zeroes to the end of a given array.");
    break;

    case 59:
    printf("59. Write a program in C to return the counting sort of an array.");
    break;

    case 60:
    printf("60. Write a program in C to find the row with the maximum number of 1s.");
    break;

    case 61:
    printf("61. Write a program in C to find the maximum product subarray in a given array.");
    break;

    case 62:
    printf("62. Write a program in C to find the largest subarray with an equal number of 0s and 1s.");
    break;

    case 63:
    printf("63. Write a program in C to replace every element with the greatest element on its right side.");
    break;

    case 64:
    printf("64. Write a program in C to find the median of two sorted arrays of the same size.");
    break;

    case 65:
    printf("65. Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].");
    break;

    case 66:
    printf("66. Write a program in C to count the number of inversions in a given array.");
    break;

    case 67:
    printf("67. Write a program in C to search for an element in a row wise and column wise sorted matrix.");
    break;

    case 68:
    printf("68. Write a program in C to return the maximum sum such that no two elements are adjacent.");
    break;

    case 69:
    printf("69. Write a program in C to find the maximum difference between any two elements such that the larger element appears after the smaller number.");
    break;

    case 70:
    printf("70. Write a program in C to find two numbers that occur an odd number of times in an array.");
    break;

    case 71:
    printf("71. Write a program in C to find the median of two sorted arrays of different sizes.");
    break;

    case 72:
    printf("72. Write a program in C to return only the unique rows from a given binary matrix.");
    break;

    case 73:
    printf("73. Write a program in C to print all unique elements of an unsorted array.");
    break;

    case 74:
    printf("74. Write a program in C to find the sum of the upper triangular elements of a matrix.");
    break;

    case 75:
    printf("75. Write a program in C to find the sum of the lower triangular elements of a matrix.");
    break;

    case 76:
    printf("76. Write a program in C to find the largest number possible from the set of given numbers.");
    break;

    case 77:
    printf("77. Write a program in C to generate random permutations of array elements.");
    break;

    case 78:
    printf("78. Write a program in C to find four array elements whose sum is equal to a given number.");
    break;

    case 79:
    printf("79. Write a program in C to sort n numbers in the range from 0 to n^2.");
    break;

    case 80:
    printf("80. Write a program in C to count all distinct pairs for a specific difference.");
    break;

    case 81:
    printf("81. Write a program in C to find the maximum repeating number in a given array.");
    break;

    case 82:
    printf("82. Write a program in C to print all possible combinations of r elements in a given array.");
    break;

    case 83:
    printf("83. Write a program in C to find a pair with the given difference.");
    break;

    case 84:
    printf("84. Write a program in C to find the minimum distance between two numbers in a given array.");
    break;

    case 85:
    printf("85. Write a program in C to count all possible paths from top left to bottom right of a m X n matrix.");
    break;

    case 86:
    printf("86. Write a program in C to find the equilibrium index of an array.");
    break;

    case 87:
    printf("87. Write a program in C to find the maximum element in an array that is first increasing and then decreasing.");
    break;

    case 88:
    printf("88. Write a program in C to find the maximum n – m such that array[n] > array[m] from a given array[].Given an array arr[], find the maximum j – i such that arr[j] > arr[i]");
    break;

    case 89:
    printf("89. Write a program in C to find the largest square sub-matrix with all 1s.");
    break;

    case 90:
    printf("90. Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]].");
    break;

    case 91:
    printf("91. An unsorted array of a specific size is given. Write a program in C to find the minimum length of a subarray such that sorting this subarray makes the whole array sorted.");
    break;

    case 92:
    printf("92. Write a program in C that checks whether the elements in an unsorted array appear consecutively or not.");
    break;

    case 93:
    printf("93. Write a program in C to rearrange positive and negative numbers alternatively in a given array.N.B.: If positive numbers are more they appear at the end and for also negative numbers, they too appear in the end of the array.");
    break;

    case 94:
    printf("94. Write a program in C to find the largest element of each and every contiguous subarray of size k from a given array.");
    break;

    case 95:
    printf("95. Write a program in C to segregate 0s and 1s in an array.");
    break;

    case 96:
    printf("96. Write a program in C to segregate even and odd elements in an array.");
    break;

    case 97:
    printf("97. Write a program in C to find the index of the first peak element in a given array.");
    break;

    case 98:
    printf("98. Write a program in C to return the largest span found in the leftmost and rightmost appearances of the same value (values are inclusive) in a given array.");
    break;

    case 99:
    printf("99. Write a program in C to return true if an array can be split in such a way that the left side of the splitting is equal to the sum of the right side");
    break;

    case 100:
    printf("100. Write a program in C to return the number of clumps (a series of 2 or more adjacent elements of the same value) in a given array.");

   default:
   printf("invalid input");
    break;
   }
   printf("\n");
   printf("again ? choose 1 for yes and 0 for no ");
   scanf("%d",&restart);
   }
   while(restart==1);
   return 0;
}