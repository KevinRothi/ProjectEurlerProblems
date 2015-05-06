def factorial(input, result):
	if (input == 1):
		return result;
	else:
		result = result * input;
		return factorial(input - 1, result);
		
def sumDigits(input):
	total = 0;
	for char in str(input):
		total = total + int(char);
	return total;
		
def main():
	print str(sumDigits(factorial(100, 1)))
	
main()