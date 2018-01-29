import sys
def printPyramid():
    while True:
        height = input('Please Enter a whole number greater than zero: ')
        if height > 0:
            break;
#     row = []
#     hashtag = ""
#     for i in range (0, height):
#         row += " "
#     while (height > 0):
#         row[height-1] = "#"
#         height -= 1
#         print "".join(row)
#      row = ""
    length = height;
    for i in range(0, height):
        row = ""
        for j in range(0, length):
            row += " "
        for k in range (0, i+1):
            row += "#"
        length -=1
        print row

printPyramid();
