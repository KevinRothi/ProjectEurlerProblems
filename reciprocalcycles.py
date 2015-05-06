def length_of_pattern(pattern):
	longest = 0
	to_match = ''
	for i in range(0, len(pattern)):
		to_match = pattern[i]
		for j in range(i+1, len(pattern)):
			to_match += pattern[j]
			if to_match == pattern[j+1:j+1+len(to_match)]:
				if (len(to_match) > longest):
					longest = len(to_match)
				break
	return longest
				
def generate_string(denom):
	to_return = ''
	numerator = 1
	for i in range(1, 2800):
		to_return += str(numerator/denom)
		numerator = ((numerator%denom) * 10)
	return to_return
		
trigger = 0;
max_length = 0;
current_length = 0
for i in range(1, 1001):
	print("checking...  " + str(i))
	current_length = length_of_pattern(generate_string(i))
	print("the longest cycle was... " + str(current_length))
	if (current_length > max_length):
		max_length = current_length
		trigger = i
print("final answer = " + str(trigger)) 
