//error

def Factorial(iNo):
    iFact = 1

    for i in range (iNo):
        iFact = iFact * i
    return iFact

def main():
    print("Enter number :")
    iValue = int(input())

    iRet = Factorial(iValue)

    print("factorial is : ",iRet)

if __name__ == "__main__":
    main()