class Solution
{
public:
    int isBitSet(int N)
    {
        if (N == 0)
            return 0;

        while (N > 0)
        {
            if ((N & 1) == 0)
                return 0;
            N >>= 1;
        }
        return 1;
    }
};
