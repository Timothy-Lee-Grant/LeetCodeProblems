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
    int index = 0;
    int needleIndex = 0;
    int i;
    int found = 0;
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);
    char currentHaystackChar;
    char currentNeedleChar;

    //given two strings
    while(index < haystackLen)
    {
        currentHaystackChar = haystack[index];
        currentNeedleChar = needle[needleIndex];

        if(currentHaystackChar == currentNeedleChar)
        {
            found = 1;
            for(i = 0; i < needleLen; i++)
            {
                if(haystack[index + i] != needle[needleIndex + i])
                    found = 0;
            }
        }
        if (found == 1)
            return index;
    }

    return index;
}

int main() {
    char haystack[] = "sadbutsad";
    char needle[] = "sad";

    int index = findSubstring(haystack, needle);

    printf("The first occurrence of \"%s\" in \"%s\" is at index %d.\n", needle, haystack, index);

    return 0;
}