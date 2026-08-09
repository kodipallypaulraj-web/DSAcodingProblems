class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int sum=0;

        for(int x:skill)
            sum+=x;

        int teams=skill.size()/2;
        int target=sum/teams;

        sort(skill.begin(),skill.end());

        int i=0;
        int j=skill.size()-1;

        long long product=0;

        while(i<j){
            if(skill[i]+skill[j]!=target)
                return -1;

            product+=(long long)skill[i]*skill[j];

            i++;
            j--;
        }
        return product;
    }
};