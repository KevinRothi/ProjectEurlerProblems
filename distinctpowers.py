from sets import Set

mySet = Set()

for i  in range(2, 101):
	for j in range(2, 101):
		mySet.add(pow(i, j))

print(len(mySet))
