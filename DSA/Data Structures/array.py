
expense = [2200, 2350, 2600, 2130, 2190]

# 1
print(expense[1] - expense[0])

# 2
print(f'Total Expense = {expense[0] + expense[1] + expense[2]}')

# 3 
for i in range(len(expense)):
    if 2000 == i:
        print('yes')
    else:
        print("no")

# 4 
expense.append(1980)

# 5 
adjusted_amount = expense[3] - 200
expense.insert(3, adjusted_amount)
print(expense)
