# MM 6th Strings Notes

print("I did it!")

# QUESTION: What makes something a string.
    # A collection of symbols held tpogether by quotation marks. The only data type that allows us to use leters.
    # ex. orem Ipsum Dolor Sit Amet or something"
    # This is also a string- 'Lorem Ipsum Dolor Sit Amet or something else.' Quotation marks on either side have to match.
rain = input("Is it raining? \n").strip().lower().capitalize()
print(rain + "? Really?")

string = "This is a string"

# QUESTION: Why do we have strings?
    # It is the only data type that can store letters.

# QUESTION: How do stupid proofing and sanitizarion relate to eachother?
    # .strip() gets rid of excess spaces, .upper() makes everything uppercase and .lower() makes everything lowercase, .capitalize() capitalizes the first letter of the word, .title() makes the first letterr of every word in a string uppercase, .find() finds the
    #index number of a certain item and outputs it, concatenation is just adding two strings together.
    # 
print(string.find("string"))
print(string[10:16])
name = input("Who are you? \n").strip().title()
print(name + "? How ugly. Welcome.")

mother_firname = input("What is your mother's first name? \n").strip().lower().title()
mother_secname = input("What is your mother's last name? \n").strip().lower().title()
mother_name = mother_firname + " " + mother_secname

print(mother_name + "? I think I've heard of her. Thanks, I'll be calling her now.")

# QUESTION : What is debugging?
    # Debugging is fixing bugs in your code. A bug is any error in your code that keeps it from running or causes it to run improperly.
    # Syntax Error : Any code that has been written incorrectly, like a spelling error or grammar/punctuation issues in english.
    # Logic Error : When our code does something that was didn't expect it to do. It is a problem with the steps we took to complete our process, a problem with our "logic."
    # Run-Time Error : Prevents the code from running and breaks it. Doesn't bring up a syntax. Like a bad user input or a mispelled variable. 