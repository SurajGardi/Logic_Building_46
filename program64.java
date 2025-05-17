import java.util.*;

class Number
{
    public void SumFact_NonFactors(int iNo)
    {
        int iCnt = 0;int iSum1 = 0;int iSum2 = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) ==0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }
        System.out.println("Summetion of Factors is : "+iSum1);
        System.out.println("Summetion of NON Factors is : "+iSum2);
    }   
}
class program64
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.SumFact_NonFactors(iValue);

    }
}
