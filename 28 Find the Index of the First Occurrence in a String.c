/*
Description:

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/

#include <stdio.h>
#include <string.h>

int findSubstring(char* haystack, char* needle) {
  //declare variables
  int haystackLength = strlen(haystack);
  int needleLength = strlen(needle);
  int haystackIndex;
  int needleIndex;
  int found;

  //approach will be to loop through the string of haystack
  //if the first character in needle is found with-in haystack, a secondary loop will trigger
  //inside the secondary loop, the elements will continue to increase by 1 in both strings
  //  if both of the elements do not match eachother, then the inner loop breaks
  //. if no break and the entire needle string is found, then a match was found, return starting index which the inner loop started at

  for(haystackIndex = 0; haystackIndex < haystackLength; haystackIndex++)
  {
    for(needleIndex = 0; needleIndex < needleLength; needleIndex++)
    {
      //set found to be true, turn false if elements don't match
      found = 1;
      if(haystack[haystackIndex + needleIndex] != needle[needleIndex])
      {
        //elements don't match, so change found to false and break out of the inner loop
        //keep trying each of the elements in the haystack (outter loop)
        found = 0;
        break;
      }
    }

    //if the found variable is set to true, return the index which first matched the needle
    if(found == 1)
      return haystackIndex;
  }

  //all elements in haystack have been searched, no match found, return -1
  return -1;
}

int main() {
    char haystack[] = "sadbutsad";
    char needle[] = "sad";

    int index = findSubstring(haystack, needle);

    printf("The first occurrence of \"%s\" in \"%s\" is at index %d.\n", needle, haystack, index);

    return 0;
}