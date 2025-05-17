//Updator needed for handling negative numbers
import java.util.*;

class Digits
{
    public int CountEven(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) ==0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class program72
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountEven(iValue);

        System.out.println("Number of Even Digits Are : "+iRet);
    }
}
