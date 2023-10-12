int hammingWeight(uint32_t n) {
    int count = 0;
    int i;
    int bitValue = 32;
/*
    //validate n is of type uint32_t, if not return -1
    if(! (typeof(n) == uint32_t) )
        return -1;
*/

    for(i=0; i < bitValue; i++)
    {
        //itterate through each position in n 
        //each itteration isolate the specific bit of interest
        //if bit is set, increase count by 1
        if(n & (1U<<i) )
            count++;
    }
    
    return count;
}