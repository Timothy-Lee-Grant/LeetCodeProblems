public class Solution {
    public string LongestCommonPrefix(string[] strs) 
    {
      //load first word in as the prefix
      //this will be modified with each itteration through the strs array of words
      //each itteration will take away those letters which are not common
      //if none in common, prefix will be filled with an empty string
      string prefix = strs[0];

      //Go through each of the words in the strs array
      for (int i = 1; i < strs.Length; i++)
      {
        //currentPrefix will be the commonality between the absolute prefix (which is the prefix up until the current word in the strs array) and the commonality which the current word has with the absolute prefix.
        //the initial currentPrefix will be an empty sting because as of now, we have not determined anything to be in common with the absolute prefix and the current word which is the ith element in the strs word.
        string currentPrefix = string.Empty;

        //Go through each of the letters in the ith word of the strs array
        //Each letter should match with our current total prefix, if there is one letter that breaks the chain of matches, the prefix needs to be updated to only contain those elements which are common to ALL of the words.
        for (int j = 0; j < strs[i].Length; j++) 
        {
          //if the letter in the ith word is more than our absolute prefix, there is nothing more to check and we are unable to add any more letters to the prefix (because it is not common to all), so break.
          if (j >= prefix.Length) break;

          //check to see if the jth letter in the ith word is the same as the jth letter in our absolute prefix, if the letter is the same, then that letter can be added to the currentPrefix for this particular word. If the letter is different, the chain is broken and we are no longer able to check more letters in the word (in which case break)
          if (strs[i][j] == prefix[j])
              currentPrefix += strs[i][j];
          
          else
            break;
        }

        //update the absolute prefix to be only the common between the previous absolute prefix and the current word which was just investigated
        prefix = currentPrefix;
      }

      //Once all words have been checked, return the string variable of the absulute prefix between all of the words in the strs array.
      return prefix;
    }
}