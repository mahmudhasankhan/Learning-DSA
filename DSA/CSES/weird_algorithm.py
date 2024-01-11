def main():
    number = int(input("Enter a number: "))
    # print(num)

    l = []
    l.append(number)
    while number != 1:
        if number % 2 == 0:
            number = number // 2
            l.append(number)
        else:
            number = (number * 3) + 1
            l.append(number)
    print(l)


if __name__ == "__main__":
    main()
