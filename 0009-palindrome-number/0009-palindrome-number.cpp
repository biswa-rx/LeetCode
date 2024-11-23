class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0)
        {
            return false;
        }
        else
        {
            int arr[20];
            int count = -1;
            while (x)
            {

                count++;

                int i = x % 10;
                arr[count] = i;
                x /= 10;
            }


            for (int x = 0; x < count; x++)
            {
                if(arr[x]!=arr[count-x])
                {
                    return false;
                }
            }

            return true;

        }
    }
};