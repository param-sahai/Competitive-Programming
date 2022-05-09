from collections import defaultdict
A = 1
y = int(input())
for a in range(y):
    ab = defaultdict(lambda:0)
    abc, abcd = int(input()), A - A
    abcde = list(map(int, input().split()))
    for abcdef in abcde:
        ab[abcdef] += A
    for abcdef in ab.keys():
        if ab[abcdef] % (A + A) != (A - A):
            abcd += A
    abcdefg = len(abcde) + abcd
    while abcdefg % (A + A + A + A) != (A - A):
        abcdefg += A
        abcd += A
    print(abcd)