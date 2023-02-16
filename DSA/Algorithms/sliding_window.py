"""__summary__:
Sliding window algorithm -> taken from youtube
Question: Find Maximum sum of k sub arrays in O(n) time.
"""


class Solution:
    def sliding_window(self, k: int, array: list[int]) -> list[int]:
        # Sum up the first subarray and add it to the result
        curr_sub_array = sum(array[:k])
        result = [curr_sub_array]

        # To get each subsequent subarray, add the next value
        # in the list and remove the fist value

        for i in range(1, len(array) - k + 1):
            curr_sub_array = curr_sub_array - array[i - 1]
            curr_sub_array = curr_sub_array + array[i + k - 1]

            result.append(curr_sub_array)

        return max(result)


if __name__ == "__main__":
    l1 = [4, 2, 3, 5, 1, 2]
    obj = Solution()
    print(obj.sliding_window(3, l1))
