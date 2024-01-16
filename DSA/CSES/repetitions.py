# ATTCGGGA
# ans -> 3

def hashmap_way():
    s = input()
    hmap = {}
    for c in s:
        if c in hmap:
            hmap[c] += 1
        else:
            hmap[c] = 1
    key = max(zip(hmap.values(), hmap.keys()))[0]
    print(key)


def main():
    s = input()
    curr, res = 1, 1
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            curr += 1
        else:
            curr = 1
        res = max(res, curr)
    print(res)


if __name__ == "__main__":
    main()
