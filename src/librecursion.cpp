/** @file librecursion.cpp
 * @brief Recursive function implementations for Assignment Recursion:
 *   Writing and Understanding Recursive Functions
 *
 * @author Jane Programmer
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Recursion
 * @date   June 1, 2021
 *
 * Implement several functions using both iteration and recursion.
 * For more practice with using basic C/C++ arrays, we will
 * write functions taking arrays as input to be manipulated.
 *
 * This file contains the actual implementation of the functions
 * and code you are required to complete for Assignment Recursion.
 * Make sure you modify the file header information to be correct
 * for the code you are creating.
 */
#include "List.hpp"

// In this assignment you will not be given the function documentation
// comments ahead of time.  But you are required to write function
// documentation for all of your functions for this assignment.  You must
// use the function comment block format you have seen in previous
// assignments, including giving a name, short description, and
// documenting parameters and return value using @param and @returns
// tags respectively.

/** @brief Sum values of array using iteration
 *
 * Given a reference to a List, along with a beginning index and an ending index,
 * the function will return the sum of the values using iteration.
 *
 * @param list A reference to a List object which will be providing the data to sum.
 * @param begin An integer for the beginning index of the list.
 * @param end An integer for the ending index of the list.
 *
 * @returns int Returns the sum of the values in the List from the beginning
 * index to the ending index that is passed into the function.
 */
int sumIterative(List& list, int begin, int end)
{
  int sum = 0;
  for (int i = begin; i <= end; i++)
  {
    sum = sum + list[i];
  }
  return sum;
}

/** @brief Sum values of array using recursion.
 *
 * Given a reference to a List, along with a beginning index and an ending index,
 * the function will return the sum of the values using recursion.
 *
 * @param list A reference to a List object which will be providing the data to sum.
 * @param begin An integer for the beginning index of the list.
 * @param end An integer for the ending index of the list.
 *
 * @returns int Returns the sum of the values in the List from the beginning
 * index to the ending index that is passed into the function.
 */
int sumRecursive(List& list, int begin, int end)
{
  // base cases
  if (begin > end)
  {
    return 0;
  }
  if (begin == end)
  {
    return list[begin];
  }

  return (list[begin] + sumRecursive(list, begin + 1, end));
}

/** @brief Reverses the value in an array using iteration.
 *
 * Given a reference to a List, along with a beginning index and an ending index,
 * the function will reverse the order of the list.
 *
 * @param list A reference to a List object which will be providing the data to reverse.
 * @param begin An integer for the beginning index of the list.
 * @param end An integer for the ending index of the list.
 */
void reverseIterative(List& list, int begin, int end)
{
  if (begin < end)
  {
    for (int i = begin; i < end; i++)
    {
      swap(list[i], list[end]);
      end--;
    }
  }
}