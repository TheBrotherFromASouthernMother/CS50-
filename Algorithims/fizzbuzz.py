
# Write a program that prints the numbers from 1 to 100. 
# But for multiples of three print “Fizz” instead of the number and 
# for the multiples of five print “Buzz”. For numbers
#  which are multiples of both three and five print “FizzBuzz”.



def printFizzBuzz(length):
    for i in range(length + 1):
        if i % 15 == 0:
            print(i, "FizzBuzz")
        elif i % 5 == 0:
            print(i, "Buzz")
        elif i % 3 == 0:
            print(i, "Fizz")

      

printFizzBuzz(100)




  


#4 Algo 4
def findLargestPrimeFactor(number):
  largestPrime = 2
  for i in range(2, number+1):
    if number % i == 0 and :
      largestPrime = i
      print(largestPrime)
  
  return largestPrime

findLargestPrimeFactor(13195)   
