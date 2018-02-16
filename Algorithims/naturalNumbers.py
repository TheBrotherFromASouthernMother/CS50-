# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
# The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.


def findMultiples(length):
  sum = 0
  for i in range(length):
    if i % 5 == 0:
      sum += i
    elif i % 3 == 0:
      sum += i
  # print(sum)
  return sum

findMultiples(1000) # 233168
