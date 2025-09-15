# MM 6th Functions Notes
import random

#QUESTION: What is a function?
    # A set of instructions that are executed when you use a specific keyword. Print, input, etc. are all functions, but you can make your own.

#QUESTION: Why do we use functions?
    # It cleans up code and makes it easier to read. Having big blocks of code can be cluttered and distracting but turning big blocks into a function(s) will minimize it.

#QUESTION: How to write functions?
    # defining and naming the function first and giving 
def nameforyou():
    person = input("Who are you?!\n").strip().lower().title()
    print(f"Oh, well then, hello {person}!")
    print("Function done.")
    # HAS to have the same indent as everything else (no extra spaces or anything).

nameforyou()

#QUESTION: What are perameters and arguments?
    #   v  Parameters go here! This is variable that only exists in the function.
def sum(number, othernumber):
    number = number + othernumber
    print(number + num_two)

num_two = 24
sum(2, 4)
sum(8, 1)
sum(411, 2)
sum(24, 12) 
#   ^ Arguments go here (when we call the function). It will replace the value of number.

#QUESTION: How to use parameters and arguments in python?
    # Please look above.

#QUESTION: What are return statements?
    #
def cleanse(info):
    return info.strip().lower().title()

where = input("Where do you come from?\n")
why = input("What do you want from me? Make it quick.\n")
who = input("Wait, who did you say you were?\n")

print(f"Ah, {cleanse(who)} from {cleanse(where)}. Lucky for you, I can help you. You want {cleanse(why)}? Go west through the farm arrays, down into the earth, and there you will find what you seek.")

def word(sentence):
    length = len(sentence)
    one_place = random.randint(0, length -1)
    two_place = random.randint(0, length -1)
    three_place = random.randint(0, length -1)
    full_sentence = sentence.split(" ")
    #                          ^ breaks sentence apart
    full_sentence.insert(one_place, "and it comes in three delicious flavors")
    full_sentence.insert(two_place, "and it comes in three delicious flavors")
    full_sentence.insert(three_place, "and it comes in three delicious flavors")
    
    sentence = " ".join(full_sentence)
    return sentence

new_sentence = word("I'm Ifa, and I just turned five years old!")
print(new_sentence)
new_sentence = word("West through the Farm Arrays and down deep into the Subterranian.")
print(new_sentence)
new_sentence = word("Is the solution portable? Has it been implemented? Uh I forgot the rest.")
print(new_sentence)