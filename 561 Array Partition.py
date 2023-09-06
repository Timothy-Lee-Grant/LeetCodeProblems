class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        '''
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                if nums[i] < nums[j]:
                    temp = nums[i]
                    nums[i] = nums[j]
                    nums[j] = temp
        '''
        self.mergeSort(nums)
        #nums.sort()
        
        sum_value = 0
        for i in range(0, len(nums), 2):
            sum_value += min(nums[i], nums[i+1])

        return sum_value

    
    def mergeSort(self, nums):
        if len(nums) <= 1:
            return
        
        left_array = nums[:len(nums)//2]
        right_array = nums[len(nums)//2:]

        self.mergeSort(left_array)
        self.mergeSort(right_array)

        #merge two arrays
        i = 0
        j = 0
        k = 0
        while i < len(left_array) and j < len(right_array):
            if left_array[i] > right_array[j]:
                nums[k] = right_array[j]
                j += 1
            else:
                nums[k] = left_array[i]
                i += 1
            
            k += 1

        while i < len(left_array):
            nums[k] = left_array[i]
            k+=1
            i+=1
        
        while j < len(right_array):
            nums[k] = right_array[j]
            k+=1
            j+=1