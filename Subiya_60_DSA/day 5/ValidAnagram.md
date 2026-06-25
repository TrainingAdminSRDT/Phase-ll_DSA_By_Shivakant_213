class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;

       HashMap <Integer, Integer> Count = new HashMap<>(26);
    //    HashMap <Integer, Integer> tCount = new HashMap<>(26);
       for (int i = 0; i < 26; i++) {
           Count.put(i, 0); 
        }
        for(int i =0; i<s.length(); i++){
           
           Count.put(s.charAt(i)-'a', Count.get(s.charAt(i)-'a')+1);
           Count.put(t.charAt(i)-'a', Count.get(t.charAt(i)-'a')-1);
        }
        for(int v:Count.values()){
            if(v!=0) return false;
        }
        return true;
    }
}