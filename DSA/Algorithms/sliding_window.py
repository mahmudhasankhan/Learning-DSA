"""__summary__:
Sliding window algorithm
Question: Find Maximum sum of k sub arrays in O(n) time.
"""


class Solution:
    def sliding_window(self, sub_array_size: int, array: list[int]) -> int:

        if sub_array_size > len(array):
            return None

        list_of_max = []
        window_sum = sum(array[0:sub_array_size])
        list_of_max.append(window_sum)

        for index in range(len(array) - sub_array_size):
            val = list_of_max[index] - array[index] + array[index + sub_array_size]
            list_of_max.append(val)

        return max(list_of_max)


if __name__ == "__main__":
    l1 = [4, 2, 3, 5, 1, 2]
    obj = Solution()
    print(obj.sliding_window(3, l1))
