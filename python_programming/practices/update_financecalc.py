# MM 6th Financial Caluclator 


def queries(result):
    result = float(input(f"What is the cost of your {result}?\n"))
    return result

income = float(input("What is your monthly income? \n"))
topic = "rent/mortgage"
rent = queries(topic)
topic = "utilities"
utilities = queries(topic)
topic = "groceries"
groceries = queries(topic)
topic = "transport"
transport = queries(topic)

left = round(income - rent - utilities - groceries - transport, 2)

def calculate(the_topic, cost, total):
    print(f"Your {the_topic} total(s) {cost}, which is", round((cost / total) * 100, 2),  "% of your total income.")

topic = "rent/mortgage"
calculate(topic, rent, income)
topic = "utilities"
calculate(topic, utilities, income)
topic = "groceries"
calculate(topic, groceries, income)
topic = "transport"
calculate(topic, transport, income)

print(f"You have ${left} to spend freely each month!")


#income = float(input("What is your monthly income? \n"))
#rent = float(input("What is the cost of your rent/mortgage? \n"))
#utilities = float(input("How much do you typically spend on utilities? \n"))
#groceries = float(input("How much do you typically spend on groceries? \n"))
#transport = float(input("How much do you spend on transportation? \n"))
#left = round(income - rent - utilities - groceries - transport, 2)

#print("Your rent/mortgage is $", rent, ", which is", round( round((rent / income), 3) * 100, 2), "% of your total income.")
#print("Your utilities are $", utilities, ", which is", round( round((utilities / income), 3) * 100, 2), "% of your total income.")
#print("Your groceries are $", groceries, ", which is", round( round((groceries / income), 3) * 100, 2), "% of your total income.")
#print("Your transportation costs $", transport, ", which is", round( round((transport / income), 3) * 100, 2), "% of your total income.")
#print("You have $", left, " to spend freely each month!")