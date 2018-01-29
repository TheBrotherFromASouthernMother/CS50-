def cipher():
    msg = raw_input("Please input a word: ")
    key = ord(raw_input("Please input a single character: "))

    print msg, key
    # hashed = []
    # hashed[0] = ord(msg[0]) + key
    # if hashed[0] > 90:
    #     hashed[0] -= 64
    # print hashed[0]


cipher()
