# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143?



import math

def findLargestPrimeFactor(number):
  largestPrime = 2
  for i in range(2, number+1):
    if number % i == 0 and is_prime(i):
      largestPrime = i
      print(largestPrime)
  
  return largestPrime


def is_prime(n):
    if math.factorial(n-1) % n == -1 % n:
        return True
    else:
        return False


findLargestPrimeFactor(35)   