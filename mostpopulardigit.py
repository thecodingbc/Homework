num_of_nums = int(input())
counters = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for _ in range(num_of_nums):
    # Input each number as a string so it can be iterated through
    num = input()
    counters[int(num[0])] += 1
    counters[int(num[1])] += 1
    counters[int(num[2])] += 1

print(counters.index(max(counters)))


Example input:
6
445
627
894
125
562
244

Expected output:
4
