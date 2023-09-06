class Solution:
    def minimumSum(self, num: int) -> int:
        #put into array
        number = []
        number.append(num//1000)
        number.append( (num//100) % 10 )
        number.append( (num//10) % 10 )
        number.append(num % 10)

        #sort array
        number.sort()

        #fill up two arrays placing the lowest value in the most significant place
        first_number = []
        second_number = []
        first_number.append(number[0])
        second_number.append(number[1])
        first_number.append(number[2])
        second_number.append(number[3])

        #create two integer values from the two arrays
        first_integer = (first_number[0]*10) + first_number[1]
        second_integer = (second_number[0]*10) + second_number[1]

        return first_integer + second_integer