def getNumberOfDigits(input):
	return len(str(input));

def main():
	start = 1;
	index = 1;
	currentIteration = 2;
	while(getNumberOfDigits(index) < 1000):
		index = index + start;
		start = index - start;
		currentIteration = currentIteration + 1;
		#print "Current Iteration: " + str(currentIteration);
		#print "Current Value: " + str(index);
		#print "Number of Digits: " + str(getNumberOfDigits(index));
	print currentIteration;
	
main()