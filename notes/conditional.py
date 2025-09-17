# MM 6th Conditionals Notes

#QUESTION: What puts something inside of the “if” statement?
    # Tabbing under the line.

#QUESTION: What do if statements do?
    # "If ____ is true//not true, then do this."

number = 411
#QUESTION: What are boolean statements?
    #  v boolean statement/condition (true or false)
if number < 412:
    print(f"{number} is less than 412. I bet you didn't know that.")
else:
    print(f"{number} is MORE than 412.")

# COMPARISON OPERATORS <, >, <=, >=, ==, != (not equal)

slugcat = "Gourmand"

if slugcat == "Gourmand":
    print(f"Hello, little creature- why are you so rotund?")
else:
    print(f"Hello, little creature.")

fun_number = int(input("Pick a number between 0 and 500: "))

if fun_number == 411:
    print("")

#QUESTION: What do else statements do?
    # "If ____ is true then do this, if it's not that (if it is else) then do this.