penny = 1
nickel = 5
dime = 10
quarter = 25

def DispenseChange():
    coins = 0
    while (True):
        changeDue = input('How much do we owe you? $')
        if changeDue > 0 and isinstance(changeDue, float):
            break
    changeDue *= 100

    while changeDue >= 25:
        changeDue -= quarter
        coins += 1


    while changeDue < 25 and changeDue >= 10:
        changeDue -= dime
        coins += 1

    while changeDue < 10 and changeDue >= 5:
        changeDue -= nickel
        coins += 1

    while changeDue < 5 and changeDue >= 1:
        changeDue -= penny
        coins += 1

    print coins
DispenseChange()
