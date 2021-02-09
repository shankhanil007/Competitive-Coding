struct meeting
{
    int s;
    int e;
    int idx;
};

bool compare(meeting a, meeting b)
{
    // if(a.e == b.e)
    //     return a.idx<b.idx;
    return a.e < b.e;
}

int maxMeetings(int start[], int end[], int n)
{

    meeting arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].s = start[i];
        arr[i].e = end[i];
        arr[i].idx = i;
    }

    sort(arr, arr + n, compare);

    int count = 1;
    int f = arr[0].e;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].s > f)
        {
            count++;
            f = arr[i].e;
        }
    }
    return count;
}