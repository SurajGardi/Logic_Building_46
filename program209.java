import java.util.Scanner;       // Specific import

class program209
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        System.out.println("Number of Small Characters Are : "+iCount);
    }
}