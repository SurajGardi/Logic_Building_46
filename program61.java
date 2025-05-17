import java.util.*;

class Number
{
    public int SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) ==0)
            iSum = iSum + iCnt;
        }
        return iSum;
    }   
}
class program61
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.SumFactors(iValue);

        System.out.println("Sum of Factor is : "+iRet);
    }
}
