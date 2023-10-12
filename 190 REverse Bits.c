/*Reverse bits of a given 32 bits unsigned integer.*/




uint32_t reverseBits(uint32_t n) {
    //input n will have 32 bits 
    //task is to reverse the order of bits in the uint32_t type variable n

    //possible way to accomplish is to start with a blank 32 bit int value
    //then loop through each of bits 
    //      now my question would be, how can I access the individual bits in the int value?
    //      I know that I can OR things, but does that accomplish it?
    //      I can isolate a single bit in the variable by doing an AND bitwise operator, with the specific position that I want to isolate, in this situation if the result is non-zero I know the value was a 1, and if the result is 0 then the bit was a 0


    uint32_t result = 0;

    //loop through each of the places in the n input and check if it is equal to 1
    //store the result in the opposite place as the current location

    int i = 0;
    for(i; i < 32; i++)
    {
        //(statement) ? If true : If false;

        if(n & (1U << i))        //take n and go through each of the elements
        {
            //if true, we need to set the corrosponding bit to be 1
            result |= (1U << 31-i);
        }
    }

    return result;
    
}