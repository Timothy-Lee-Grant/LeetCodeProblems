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

int strStr(char * haystack, char * needle){

    int index = -1;
    int needleIndex = 0;
    int i;
    bool found = false;

    //given two strings
    while(index < strlen(haystack) )
    {
        if(haystack[index] == needle[needleIndex])
        {
            found = true;
            for(i = 0; i < strlen(needle); i++)
            {
                if(haystack[index+i] != needle[needleIndex+1])
                    found = false;
            }
        }
        if (found == true)
            return index;
    }
    
    return index;

}