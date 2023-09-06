class Solution:
    def countBits(self, n: int) -> List[int]:
        #deal with the first value
        myArray = []
        for i in range(4):
            if n < i:
                return myArray
            if i == 0:
                myArray.append(0)
            if i == 1:
                myArray.append(1)
            if i ==2: 
                myArray.append(1)
            if i == 3:
                myArray.append(2)

        offset = 4
        for i in range(4, n+1):
            if offset * 2 == i:
                offset *= 2
            myArray.append(1 + myArray[i-offset])

        return myArray
            
        