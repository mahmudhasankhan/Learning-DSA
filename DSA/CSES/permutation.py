def main():
    n = int(input())

    if n == 1:
        print(n)
        return
    if n == 2 or n == 3:
        print("NO SOLUTION")
        return

    for i in range(1, n+1):
        if i % 2 == 0:
            print(i, end=" ")
    for i in range(1, n+1):
        if i % 2 != 0:
            print(i, end=" ")


if __name__ == "__main__":
    main()
