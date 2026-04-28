#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
    vector<int> st;

    for (int x : ingredient) {

        st.push_back(x);

        if (st.size() >= 4) {
            
            int n = st.size();

            if (st[n - 4] == 1 && 
                st[n - 3] == 2 && 
                st[n - 2] == 3 && 
                st[n - 1] == 1) {

                answer++;

                st.pop_back();
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }
    }

    return answer;
}