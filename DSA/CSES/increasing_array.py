def main():
    n = int(input())
    l = [int(x) for x in input().split()]
    moves = 0
    for i in range(1, n):
        if l[i] < l[i-1]:
            diff = l[i-1] - l[i]
            l[i] += diff
            moves += diff
    print(moves)


if __name__ == "__main__":
    main()
