
def main():
    n = int(input())
    sum = n*(n+1)//2
    setA, setB = set(), set()

    if sum % 2 != 0:
        print("NO")
        return
    print("YES")
    num_list = [x for x in range(1, n+1)]
    if n % 2 == 0:
        j = n - 1
        k = 0
        while j > k:
            setA.add(num_list[j])
            setA.add(num_list[k])
            j -= 1
            k += 1
            setB.add(num_list[j])
            setB.add(num_list[k])
            j -= 1
            k += 1
    else:
        j = n - 2
        k = 0
        while j > k:
            if j < k:
                break
            setA.add(num_list[j])
            setA.add(num_list[k])
            j -= 1
            k += 1
            if j < k:
                break
            setB.add(num_list[j])
            setB.add(num_list[k])
            j -= 1
            k += 1
        setB.add(num_list[n-1])

    print(len(setA))
    print(*setA)
    print(len(setB))
    print(*setB)


if __name__ == "__main__":
    main()
