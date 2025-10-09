# MM 6th Expressions Notes

# What is an algorithm?
    # An expression of numbers and symbols in order to get a result; a method and a process for creating an output.
region = input("Where are you from?\n")
print("Oh!", region + "? I hate that place! That's awful! You should be ashamed.")

length = 4
width = 11
area = length * width
print(length, "x", width, "=", area )

# List steps in an algorithm.
    #1 VARIABLES/INFORMATION
person1 = 14
person2 = 14
person3 = 14
person4 = 14

    #2 PROCESS
average = (person1 + person2 + person3 + person4)/4

    #3 OUTPUT RESULT(S)
print("The average age for my row in CSP is", average)

#AGAIN!
person1 = 41
person2 = 24
person3 = 104
person5 = 504

average = (person1 + person2 + person3 + person4)/4
print("The average age in the placeholder group that does not exist is", average)

# List  ALL of the different mathematical operators (give me the symbols and tell me what it does).
num1 = float(input("Pick a number, any number!\n"))
num2 = int(input("Pick another number! A better number!\n"))

num1 += num2
print("addition (+):", round(num1, 0)) #adding
num1 -= num2
print("subtraction (-):", round(num1, 0)) #subtracting
num1 *= num2
print("multiplication (*):", round(num1, 0)) #multiplying
num1 /= num2
print("division (/):", round(num1, 0)) #dividing
num1 **= num2
print("exponents (**):", round(num1, 0)) #exponents
num1 //= num2
print("integer division (//):", round(num1, 0)) #divides into whole numbers
num1 %= num2
print("modulo (remainder) (%):", round(num1, 0)) #remainder, the other side of integer division

    #an integer is a data type that holds whole numbers. Can be positive or negative.
    #a float (floating point) is a data type that holds numbers with decimals.

# List ALL of the different assignment operators (give me the symbols and what they do.
print(int(3*5**2/15)-(5-2**2))
    #  int makes it an integer!
print(float(3*5**2/15)-(5-2**2))
    #  float makes it a float!
num3 = 4.59
print(int(round(num3, 0) ) )
    # rounds to however many decimals you want AND makes it an integer.

# Why are expressions so important in programming?
    #Because it is a way for the computer to process code and solve math problems for us. We would  not be able to have health bars or currency trackers in video games/