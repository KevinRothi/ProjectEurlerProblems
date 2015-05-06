def d(n):
	sumOfEvenDivisors = 0
	for i in range(1, n-1):
		if (n % i) == 0:
			sumOfEvenDivisors += i
	return sumOfEvenDivisors
	
def process(myDict):
	mySum = 0
	for i in myDict.keys():
		if myDict[i] in myDict.keys():
			if myDict[myDict[i]] == i:
				print("found amicable " + str(i))
				mySum += i
	return mySum
			
		

myDict = {}

for i in range(1, 10001):
	toCheck = d(i)
	myDict[i] = toCheck
	print("The sum of the even divisors of " + str(i) + " is " + str(toCheck))
	
for i in myDict.keys():
	if myDict[i] == i:
		del myDict[i]
		
print(process(myDict))
	

	
		