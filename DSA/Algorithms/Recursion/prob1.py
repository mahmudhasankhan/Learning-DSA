"""
    Write a recursive function that given an input n sums all non-negative
    integers up to n
"""


def sum_nonnegative(n: int) -> int:
    if n == 0:
        return n
    return n + sum_nonnegative(n-1)


def main():
    res = sum_nonnegative(4)
    print(res)


if __name__ == "__main__":
    main()
