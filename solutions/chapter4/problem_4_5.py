K = 0

def f(n):
    if n != "":
        if int(n) > K:
            return 0
    
    three, five, seven = False, False, False

    for x in n:
        if x == '3':
            three = True
        elif x == '5':
            five = True
        else:
            seven = True
    
    return (three and five and seven) + f('3'+n) + f('5'+n) + f('7'+n)


def main():
    global K
    K = int(input())
    print(f(""))

if __name__ == '__main__':
    main()