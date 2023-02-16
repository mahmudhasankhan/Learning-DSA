def binary_search(item: int, sequence: list) -> int:

    low = 0
    high = len(sequence) - 1

    while low <= high:
        midpoint = low + (high - low) // 2
        midpoint_value = sequence[midpoint]

        if midpoint_value == item:
            return midpoint
        if item > midpoint_value:
            low = midpoint + 1
        else:
            high = midpoint - 1

    return None


if __name__ == "__main__":
    list_of_num = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    VAR = 5

    position = binary_search(VAR, list_of_num)
    print(position)
