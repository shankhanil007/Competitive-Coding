
// ---------------------- SIMPLE SOLUTION O(N^2)   -----------------------------------------

bool compare(Job a, Job b)
{
    return a.profit > b.profit;
}

// Prints minimum number of platforms reqquired

pair<int, int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, compare);
    bool slot[n];
    int profit = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                profit += arr[i].profit;
                count++;
                slot[j] = true;
                break;
            }
        }
    }

    return make_pair(count, profit);
}
//-----------------------------------------------------------------------------------

// -------------------------- DSU LOGIC ------------------------------------------

//-----------------------------------------------------------------------------------