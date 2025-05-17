//Updator needed for handling negative numbers
import java.util.*;

class Digits
{
    public int Reverse(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        return iRev;
    }
}

class program73
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.Reverse(iValue);

        System.out.println("reverse number is : "+iRet);
    }
}
