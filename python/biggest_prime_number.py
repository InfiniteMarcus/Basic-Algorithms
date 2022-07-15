def biggest_prime_number(n):
    biggest_prime = 2
    for i in range(2, n+1):
        if i % 2:
            is_prime = True
            for j in range(2, i):
                if not (i % j):
                    is_prime = False
            
            if is_prime:
                biggest_prime = i
    return biggest_prime

number = int(input('Insert your number: '))

if number < 2:
	print('You need to insert a number greater than 1')
else:
	print('The biggest prime number below or equal your number is: ' + str(biggest_prime_number(number)))
