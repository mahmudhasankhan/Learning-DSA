
from turtle import pos
from typing import List


def binary_search(item, sequence: List):
    
    low = 0
    high = len(sequence) - 1
    
    while low <= high:
        midpoint = low + (high - low) // 2
        midpoint_value = sequence[midpoint]
        
        if midpoint_value == item:
            return midpoint
        elif item > midpoint_value:
            low = midpoint + 1
        else:
            high = midpoint - 1
        
    return None
       
        
if __name__ == '__main__':
    list_of_num = [1,2,3,4,5,6,7,8,9]
    num = 5
    
    position = binary_search(num, list_of_num)
    print(position)

        
        