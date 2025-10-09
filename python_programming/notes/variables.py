# MM 6th Variables Notes

    # QUESTION: What is one way to have your program give an output?

print("This should appear in the terminal. This is an output.")
# ^ sends to the terminal. Quotation marks for words, no quotation marks for integers. An output.

    # QUESTION: What is a variable?

#like a container, and a labeled one at that. = is the assignment operator, everything after is the value(s).

    # QUESTION: How do you assign a variable?

#using an = sign.
lookstothe = "moon"
pebbles = 5
color = "asphalt gray"

#snake_case (all lower case, spaces replaced with underscores) python standard
slug_cat = "Survivor"
#camelCase (2nd word and so forth capitalize 1st, squish words together)
slugCat = "Monk"
#PascalCase (Capitalize the 1st letter of every word, squish words together)
SlugCat = "Hunter"

    # QUESTION: How do you reassign a variable?

#reassigning a variable. Pre-existing variable has it's value replaced later. EX
slug_cat = "Gourmand"
#now slug_cat = Gourmand and not Survivor.
slug_cat = "Artificer"
print(slug_cat)
slug_cat = "Rivulet"
print(slug_cat)
#none of these are new or different variables.

    # QUESTION: How do you create an input in my program?
slugCat = input("Who are you?\n")
SlugCat = input("Who is your favorite person?\n")
shaded_citadel = input("Where are you from?\n")
#^need variable to store data ^question
#/n "skips" a line I believe.

    # QUESTION : How many things can be put into the same print statement?

print("Are you", slugCat, "from", shaded_citadel,"? Have you seen", SlugCat, "? I'm sure you can agree with me that the", lookstothe, "looks mighty", color, "tonight?",411)
#As much as you want.



