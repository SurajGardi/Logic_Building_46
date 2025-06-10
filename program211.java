import java.util.Scanner;       // Specific import

class MarvellousString
{
    public String str;

    public int CountSmall()
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program211
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        mobj.str = data;            // This is technically wrong insted this we will write constructor in next program

        int iRet = 0;

        iRet = mobj.CountSmall();

        System.out.println("Number of Small Characters Are : "+iRet);
    }
}
