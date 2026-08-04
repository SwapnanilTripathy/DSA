class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a,b) -> Integer.compare(a[0],b[0]));
        // List<int[]> ans=new ArrayList<>();
        // int n=intervals.length;
        // for(int i=0;i<n;i++){
        //     int start=intervals[i][0];
        //     int end=intervals[i][1];
        //     if(!ans.isEmpty()&&end<=ans.get(ans.size()-1)[1]) continue;
        //     for(int j=i+1;j<n;j++){
        //         if(end>=intervals[j][0]){
        //             end=Math.max(end,intervals[j][1]);
        //         }else{
        //             break;
        //         }
        //     } 
        //     ans.add(new int[]{start,end});
        // }
        // return ans.toArray(new int[ans.size()][]);
        
        List<int[]> ans=new ArrayList<>();
        for(int i=0;i<intervals.length;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(ans.isEmpty() || start>ans.get(ans.size()-1)[1]){
                ans.add(new int[]{start,end});
            }
            else{
                ans.get(ans.size()-1)[1]=Math.max(end,ans.get(ans.size()-1)[1]);
            }
        }
        return ans.toArray(new int[ans.size()][]);
    }
}