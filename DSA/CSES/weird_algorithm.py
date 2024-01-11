def main():
    number = int(input())
    # print(num)
    while number != 1:
        print(number, end=" ")
        if number % 2 == 0:
            number = number // 2
        else:
            number = (number * 3) + 1
    print(number)


if __name__ == "__main__":
    main()
