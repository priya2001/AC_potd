class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        // approach 1 TC :o(nlog(n))
        
//         int n=deck.size();
//         vector<int>result(n,0);
        
//         sort(deck.begin(),deck.end());  //remember its important
//         int i=0;//deck
//         int j=0;//result
        
//         bool skip=false;
//         while(i<n)
//         {
//             if(result[j]==0)
//             {
//                 if(skip==false) //alternate
//                  {
//                      result[j]=deck[i];
//                      i++;
//                   }
//                    skip= !skip;
//             }
//             j=(j+1)%n;
//         }
//         return result;
        
          // approach 2  using queue
        
        int n=deck.size();
        queue<int>q;
        vector<int>result(n,0);
        
        sort(begin(deck),end(deck));
        
        for(int i=0;i<n;i++)
        {
            q.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            int indx=q.front();  //store index
            q.pop();
            result[indx]=deck[i]; //aggin value
            
            if(!q.empty())
            {
                q.push(q.front());   //first element push in last
                q.pop();
            }
        }
        return result;
    }
};