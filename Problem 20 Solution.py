def factorial(n):
	if n < 1:
		return 1
	else:
		returnNumber = n * factorial(n - 1)
		return returnNumber
		
def sum_digits(n):
	s = 0
	while n:
		s += n % 10
		n /= 10
	return s
	
print(sum_digits(factorial(100)))