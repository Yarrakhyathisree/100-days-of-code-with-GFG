class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> height(arr , arr+n);
        height.push_back(0);
        stack<long long> st;
        n++; //size of array got increased by 1
        int i=0;
        long long area = 0;
        while(i<n)
        {
            if(st.empty() or height[i]>= height[st.top()])
            {
                st.push(i);
                i++;
            }
            else
            {
                int index = st.top();
                st.pop();
                area = max(area , height[index]*(st.empty() ? i : (i-st.top()-1)));
            }
        }
        return area;
    }
};