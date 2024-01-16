def main():
    n = int(input())
    l = [int(x) for x in input().split()]
    step = 0
    for i in range(n):
        for k in range(1, n-1):
            if l[i] > l[k]:
                step += 1
                temp = l[i]
                l[i] = l[k]
                l[k] = temp
    print(step)


if __name__ == "__main__":
    main()
