word = input()

letters = []
frequency = []

for letter in word:
    if letter not in letters:
        letters.append(letter)
        frequency.append(1)
    else:
        i = letters.index(letter)
        frequency[i] += 1

n = max(frequency)

# Look for most common letter(s) and add to commons list
commons = []
counter = 0
for m in frequency:
    if n == m:
        commons.append(letters[counter])
    counter += 1

# Format most common letters
commons.sort()
answer = ''
for letter in commons:
    answer = answer + letter + ' '

# Remove extra space at the end of the string
answer = answer[:-1]

print(answer)
