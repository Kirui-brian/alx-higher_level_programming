#!/usr/bin/python3
import random

number = random.randint(-10000, 10000)

# Extracting the last digit of the number
last_digit = abs(number) % 10

# Adjusting the last digit for negative numbers
if number < 0:
    last_digit *= -1

# Printing the last digit alongside with the specified format
print("Last digit of", number, "is", last_digit, end=" ")

if last_digit > 5:
    print("and is greater than 5")
elif last_digit == 0:
    print("and is 0")
else:
    print("and is less than 6 and not 0")
