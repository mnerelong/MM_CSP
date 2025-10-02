# MM 6th Old Enough

user_age = int(input("How old are you?\n"))

if user_age < 4:
    print(f"{user_age}? You are not even old enough to go to school, you can't do anything? Why are you here?")
elif user_age >= 4 and user_age < 15:
    print(f"{user_age}? You are old enough to go to school!")
elif user_age == 15:
    print(f"{user_age}? You are old enough to get your learners permit!")
elif user_age >= 16 and user_age < 18:
    print(f"{user_age}? You're old enough to drive!")
elif user_age > 100:
    print(f"{user_age}? How are you still alive? Are they making your grave now or are they already done?")
else:
    print(f"{user_age}? You're old enough to vote!")