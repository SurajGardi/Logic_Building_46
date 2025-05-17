import java.util.*;

class Number
{
    public int SumNonFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) !=0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }   
}
class program63
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.SumNonFactors(iValue);

        System.out.println("Summetion of Non Factors is : "+iRet);
    }
}
