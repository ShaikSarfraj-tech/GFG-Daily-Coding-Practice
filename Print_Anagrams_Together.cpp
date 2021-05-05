#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> string_list) {

    vector<vector<string>> result;

    unordered_map<string, vector<string>> umap;
    for(int i = 0; i < string_list.size(); i++) {
        string s = string_list[i];

        sort(s.begin(), s.end());

        umap[s].push_back(string_list[i]);
    }

    for(auto itr = umap.begin(); itr != umap.end(); ++itr) {
        result.push_back(itr->second);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for(int i = 0; i < n; i++) {
            cin >> string_list[i];
        }
        vector<vector<string>> result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for(int i = 0; i < result.size(); i++) {
            for(int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}