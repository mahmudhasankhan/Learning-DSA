def main():
    num = int(input())

    comp_list = [int(x) for x in input().split()]
    my_list = [x for x in range(1, num+1)]

    def helper_func(l1: list, l2: list) -> int:
        for x, y in zip(my_list, sorted(comp_list)):
            if x != y:
                return x
    x = helper_func(comp_list, my_list)
    if x is None:
        print(num)
    else:
        print(x)


if __name__ == "__main__":
    main()
