

#CHALLENGE 1
# The Collatz Conjecture goes like this:
# Take any number n. If n is even, divide it by 2,
# if n is odd, multiply it by 3 and add 1.
# Repeat the process indefinitely, and you'll eventually reach 1.
#
# Given a num variable, can you print all the numbers in num's Collatz sequence until 1 is reached?
# Print the numbers space-separated (and each test case on its own line).


def collatz(n):
    n = int(n)
    print(n, end=" ")
    if n == 1:
        print("\n")
        return n
    elif n % 2 == 0:
        collatz(n / 2)
    else:
        collatz((n * 3) + 1)


user = int(input("Enter a number: "))

collatz(user)


#CHALLENGE 2
# A palindromic number reads the same both ways.
# The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#
# Find the largest palindrome made from the product of two 3-digit numbers.


def findLargestNumPalindrome():
    x = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            my_product = i * j
            product_str = str(my_product)
            rev_str = product_str[::-1]
            if product_str == rev_str and my_product > x:
                x = my_product
    print("Largest Palindrome: {}".format(x))


findLargestNumPalindrome()

#CHALLENGE 3
# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

def even_div():

    # n = 2520
    # while True:
    #     n += 160000
    #     counter = 0
    #     # if n % 2 != 0:
    #     # #     n += 1
    #     for i in range (2, 21):
    #         if n % i == 0:
    #             counter += 1
    #             print("counter:", counter)
    #     if counter == 20:
    #         print(n)
    #         return n
    #     elif n > 232972560 :
    #         print(n)
    #         break


even_div()
