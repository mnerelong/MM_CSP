# MM 6th Strings Notes

print("I did it!")

# QUESTION: What makes something a string.
    # A collection of symbols held tpogether by quotation marks. The only data type that allows us to use leters.
    # ex. orem Ipsum Dolor Sit Amet or something"
    # This is also a string- 'Lorem Ipsum Dolor Sit Amet or something else.' Quotation marks on either side have to match.
rain = input("Is it raining? \n").strip().lower().capitalize()
print(rain + "? Really?")

# QUESTION: Why do we have strings?
    # It is the only data type that can store letters.

# QUESTION: How do stupid proofing and sanitizarion relate to eachother?
    # .strip() gets rid of excess spaces, .upper() makes everything uppercase and .lower() makes everything lowercase, .capitalize() capitalizes
    # 
name = input("Who are you? \n").strip().title()
print(name + "? How ugly. Welcome.")

mother_firname = input("What is your mother's first name? \n").strip().lower().title()
mother_secname = input("What is your mother's last name? \n").strip().lower().title()
mother_name = mother_firname + " " + mother_secname

print(mother_name + "? I think I've heard of her. Thanks, I'll be calling her now.")