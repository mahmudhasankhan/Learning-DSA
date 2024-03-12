
def main():
    n = int(input())

    if (n*(n+1)//2) % 2 != 0:
        print("NO")
    else:
        print("YES")
        setA, setB = set(), set()
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


def clever_way():
    n = int(input())
    if (n*(n+1)//2) % 2 != 0:
        print("NO")
    else:
        listA, listB = [], []
        print("YES")
        if n % 2 == 0:
            for i in range(n//2):
                if i % 2 == 0:
                    listA.append(i+1)
                    listA.append(n-i)
                else:
                    listB.append(i+1)
                    listB.append(n-i)
        else:
            for i in range((n-1)//2):
                if i % 2 == 0:
                    listA.append(i+1)
                    listA.append(n-i-1)
                else:
                    listB.append(i+1)
                    listB.append(n-i-1)
            if len(listA) > len(listB):
                listB.append(n)
            else:
                listA.append(n)

        print(len(listA))
        print(*listA)
        print(len(listB))
        print(*listB)


if __name__ == "__main__":
    # main()
    clever_way()
