package MarvellousLB;           // client prog : program213.java

public class MarvellousString
{
    public String str;

    public MarvellousString(String a)
    {
        this.str = a;
    }

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