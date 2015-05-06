f = open('p042.txt', 'r')
x = f.read().split(',')
y = []
current_word_value = 0
count = 0
triangle_number_list = []

for i in range(1, 100):
	q = (.5)*i*(i+1)
	triangle_number_list.append(str(int(q)))

for items in x:
	y.append(items.strip('"'))

for words in y:
	for letter in words:
		current_word_value += int(ord(letter) - 64)
	if (str(current_word_value) in triangle_number_list):
		count += 1
	current_word_value = 0

print(count)
		
