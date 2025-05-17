//Updator needed for handling negative numbers
import java.util.*;

class Digits
{
    public int DisplayEven(int iNo)
    {
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) ==0)
            {
                System.out.println(iDigit);
            }
            iNo = iNo / 10;
        }
        return iDigit;
    }
}

class program70
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.DisplayEven(iValue);

        System.out.println("Number of Even Digits Are : "+iRet);
    }
}
