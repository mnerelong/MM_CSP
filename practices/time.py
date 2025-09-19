# MM 6th Time of Day
import datetime

current = datetime.datetime.now()
hour = current.hour

hour = int(input("What's the time (in military time, plain military time).\n"))

if hour >= 1 and hour <= 11:
    print("Good morning!")
elif hour >= 12 and hour < 19:
    print("Good afternoon!")
else:
    print("Good night!")