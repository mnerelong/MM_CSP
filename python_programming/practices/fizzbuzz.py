# MM 6th FizzBuzz

for x in range(1,51):
    if x % 3 == 0:
        if x % 5 == 0:
            print("FizzBuzz")
        else:
            print("Fizz")
    elif x % 5 == 0:
        print("Buzz")
    else:
        print(x)