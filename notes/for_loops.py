# MM 6th Time and For Loops notes

import datetime
import random

#epoch... something about the time in seconds since Jan 1, 1970

current = datetime.datetime.now()
hour = current.hour

print(f"The time is: {current}")
print(f"The hour is: {hour}")

#QUESTION: What is a loop?
    # Repeats something unti a specific condition is met.

#QUESTION: What are the two types of loops?
    # While and for "While this..." "For every this..."

#QUESTION: What is iteration?
    # An iteration is one instance of a loop. The iterator is how we keep track of it or what changes in the loop.

#QUESTION: What are lists?
    # every item in the list must be a valid data type. Lists are variables holding multiple pieces of information. Multiple inputs.
    # v plural s
slugcats = ["Monk", "Survivor", "Hunter", "Gourmand", "Artificer", "Rivulet", "Spearmaster", "Saint", 24, 411]
print(slugcats[4])

print(slugcats)
slugcats[8] = "Enot"
slugcats.remove(411)
print(slugcats)

#QUESTION: How do you make lists in python?  
    # See above.

#QUESTION: How do you make for loops in python?
    # Repeats something unti a specific condition is met.

for slugcat in slugcats:
    print(f"No, {slugcat}.")
    print("NO!")
    #        start, stop, what we count by.
for i in range(24,1,-4):
    print(i)

#QUESTION: How do you make while loops in python?
    # 1) Iterator (keeps track of the loop number)
    # 2) End condition (tells the loop to stop)
    # 3) Increase the iterator (FIVE PEBBLES?!?! NO SIGNIFICANT HARASSMENT?!?!)

    #Infinite (not good)
#while True:
    #print("Devastating!")

# Good while loop
x = 2
# % = remainder
while x < 24:
    if x % 2 == 0:
        print(f"{x} is even")
    else:
        print(f"{x} is odd.")
    x += 2.5

variable = random.randint(4,411)
num = 4
"""while num != variable:
    print("No...")
    num += 1
print(f"Yes! {variable}")"""

while True:
    if variable == num:
        print(f"YES! {num}")
        break # <- breaks the loop; stops it.
    else:
        print("No...")
        num += 1