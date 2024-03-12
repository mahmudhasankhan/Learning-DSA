def main():
    n = int(input())
    res = 1
    while n > 0:
        res = res * 2 % (10**9+7)
        n -= 1
    print(res)

# Time complexity: 0(n)
# Space complexity: 0(1)


if __name__ == "__main__":
    main()
