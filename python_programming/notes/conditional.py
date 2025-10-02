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
    print(f"You win! The answer was {fun_number}!")
elif fun_number < 411:
    print(f"{fun_number} is too small.")
elif fun_number  > 500:
    print(f"{fun_number} is over the 500 limit I gave you.")
else:
    print(f"{fun_number} is too large.")

#QUESTION: What do else statements do?
    # "If ____ is true then do this, if it's not that (if it is else) then do this.

#QUESTION: What are the three logical operators?
    # and, or, not.

#QUESTION: What are logical operators for?
    # "if this and this are true, then do this." 
slugcat_finished = 1
slugcat = 3

if slugcat_finished == 0 and slugcat == 3:
    print("You have not beaten Hunter yet, you need to finish the compaign before you can play Gourmand.")
elif slugcat_finished == 1 and slugcat == 3:
    print("You beat Hunter! You can now play as Gourmand.")
else:
    print("I didn't bother coding this far because I'm just giving an example.")

    # "if this or this is true, then do this ."

    # "if this not this, then do this."

#QUESTION: What does a nested conditional statement do?
    # See above.
slug = input("Who are you?\n").strip().lower().title()

if slug == "Artificer" or slug == "Spearmaster":
    print(f"{slug}... You are a nasty little thing, aren't you?")
elif slug == "Rivulet" or slug == "Monk":
    print(f"{slug}... Gross.")
else:
    if slug == "Inv" or slug == "Enot" or slug == "Sofanthiel":
        print(f"Is it portable? Has it been implemented? Does it come in three delicious flavors? \nNo?\nWell then.")
    print(f"I don't know you, I don't care.")