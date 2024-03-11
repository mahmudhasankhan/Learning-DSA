# total number of ways to place to knights on a n*n chessboard
# for first knight => n^2
# for second knight => n^2 - 1
# total number of ways to place two knights on a chessboard
# (n*n)(n*n - 1) / 2

# the total number of ways to place two knights that can attack eachother on a n*n chessboard
# for 2 by 3 region: (n-1)(n-2)
# for 3 by 2 region: (n-2)(n-1)
# both region combined into: 2(n-1)(n-2)
# for a 2 by 3 region, there's always two ways to attack each other
# also for 3 by 2 region, there are two ways to attack each other
# therefore, final permutation to place two knights that they can attack one another on a n*n chessboard
# 4(n-1)(n-2)

def main():
    N = int(input())
    n = 1
    while N > 0:
        totalPositions = (n*n)*(n*n-1)//2
        attackPositions = 4*(n-1)*(n-2)
        print(totalPositions-attackPositions, end="\n")
        N -= 1
        n += 1


if __name__ == "__main__":
    main()
