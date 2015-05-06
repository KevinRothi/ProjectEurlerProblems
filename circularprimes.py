from math import sqrt

def generate_next(number):
	temp = number[0]
	number = number[1:]
	number += temp
	return number

def is_circular(number):
	to_check = str(number)
	if ('0' in to_check):
		return False
	for i in range(0, len(to_check)):
		to_check = generate_next(to_check)
		if not(is_prime(int(to_check))):
			return False
	return True

def is_prime(number):
	for i in range(2, int(sqrt(number))+1):
		if (number % i == 0):
			return False
	return True

total = 1
for i in range(3, 1000000):
	if (i % 100 == 0):
		print("checking... " + str(i))
	if (is_prime(i) and is_circular(i)):
		print("circular prime found!... " + str(i))
		total += 1
print(total)
