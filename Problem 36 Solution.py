from numpy import binary_repr

def palindrome(input):
	myStack = [];
	for char in str(input):
		myStack.insert(0, char);
	if str(input) == str("".join(myStack)):
		print "Palindrome Found!";
		return True;
	else:
		return False;
		
def convertToBinary(input):
	return binary_repr(input);
	
def main():
	total = 0;
	for i in range(1, 1000001):
		if (palindrome(i)) and (palindrome(convertToBinary(i))):
			print "DUAL PALINDROME FOUND!";
			print str(i) + "   " + binary_repr(i);
			total = i + total;
	print(str(total));
	
main()
			
		