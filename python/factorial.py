num = int(input("Type your number to calculate the factorial: "))
fact = 1

while num > 0:
    fact = fact * num
    num = num - 1

print("The factorial of your number is: ", fact)