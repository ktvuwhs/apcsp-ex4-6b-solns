import math

"""
* Putting varName: type is called an annotation and is completely optional
* It DOES NOT affect the code in any way, shape, or form; it simply makes code more readable
* The -> type is also optional and represents the type of the data returned by the function
"""

def sayGreeting(name: str) -> None:
	print('Hello', name, 'how are you?')


def intCompare(x: int, y: int) -> int:
	if (x < y):
		return -1
	elif (x == y):
		return 0
	else:
		return 1


def findMax2(x: int, y: int) -> int:
	if x > y:
		return x
	else:
		return y


# This compares w and x and finds the max; let's call it max1
# It then compares max1 with y, and finds the max of that; let's call it max2
# It then compares max2 (the max of w, x and y) with z and finds the max of that
# The overall maximum is returned
def findMax4(w: int, x: int, y: int, z: int) -> int:
	return findMax2( findMax2( findMax2(w, x), y ), z )


def quadraticFormula(a: float, b: float, c: float) -> list[float]:
	# To do b^2, you can do either b*b or b**2 in python
	ans = []
	discriminant = b**2 - 4*a*c

	if (a == 0):
		print('Error: a is equal to 0')
	elif discriminant < 0:
		print('Error: answers are imaginary')
	else:
		x1 = (-b + math.sqrt(discriminant)) / (2*a)
		x2 = (-b - math.sqrt(discriminant)) / (2*a)
		ans = [x1, x2]
	
	return ans

def isPrime(p: int) -> bool:
	# 1 is not prime
	if (p == 1):
		return False

	# Now we assume p > 1
	# This loop checks from 2 to p-1
	for x in range(2, p):
		if p % x == 0: # p is divisible by x, so is not prime
			return False

	# If the program checks all the numbers and does not return False
	# then it never found a number p is divisible by, so it is prime
	return True

def isCoprime(a: int, b: int) -> bool:
	# We assume that a and b are greater than 0, and that a is not equal to b
	# We go from 2 to a since we want to check if a divides b
	for x in range(2,a+1): # range(2, a+1) goes from 2 to (a+1)-1 which is from 2 to a
		if a % x == 0 and b % x == 0:
			return False

	# If the program goes through the entire for loop and never returns False
	# then the two numbers are coprime
	return True

def factors(n: int) -> list[int]:
	f = []
	
	# Assuming n >= 0
	for x in range(1,n+1):
		if n % x == 0:
			f.append(x)

	return f

def removeLetter(word: str, target: str) -> str:
	ans = ''
	for letter in word:
		if letter != target:
			ans += letter
	return ans


""" Main code that runs to test functions """
yourName = input('What is your name? ')
sayGreeting(yourName)

print('\nGive me two numbers')
num1 = int(input())
num2 = int(input())

print('\nTesting intCompare():', intCompare(num1, num2))
print('Testing findMax2():', findMax2(num1, num2))

print('\nGive me 4 numbers')
num1 = int(input())
num2 = int(input())
num3 = int(input())
num4 = int(input())

print('Testing findMax4():', findMax4(num1, num2, num3, num4))

print('Testing quadraticFormula():', quadraticFormula(num1, num2, num3))

print('Testing isPrime():', isPrime(num1))

print('Testing isCoprime():', isCoprime(num1, num2))

print('Testing factors():', factors(num1))


word = input('\nGive me a word: ')
target = input('What letter do you want to remove? ')
print('Testing removeLetter():', removeLetter(word, target))



