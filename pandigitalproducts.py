from itertools import permutations
from sets import Set

def check_pandigital(multiplicand, multiplier, product):
	if(int(multiplicand) * int(multiplier) == int(product)):
		return True
	else:
		return False

if __name__ == '__main__':
	total = 0
	calculated_products = Set()
	sequences = set(permutations(range(1, 10)))
	for sequence in sequences:
		for i in range(1, len(sequence)-2):
			for j in range(i+1, len(sequence)-1):
				for k in range(j+1, len(sequence)):
					multiplicand = ''.join(str(c) for c in sequence[0:i])
					multiplier = ''.join(str(c) for c in sequence[i:j])
					product = ''.join(str(c) for c in sequence[j:len(sequence)])
					if(check_pandigital(multiplicand, multiplier, product) and product not in calculated_products):
						print("Pandigital product found:" + product)
						total += int(product)
						calculated_products.add(product)
	print("Final sum: " + str(total))			
