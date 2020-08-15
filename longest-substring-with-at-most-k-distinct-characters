#----sliding window technique-O(N)
def longestSubstring(s,k):
    windowStart=0
    max_len=-1
    char_freq={}
    for windowEnd in range(len(s)):
        if s[windowEnd] in char_freq:
            char_freq[s[windowEnd]]+=1
        else:
            char_freq[s[windowEnd]]=1
        
        while len(char_freq)>k:
            char_freq[s[windowStart]]-=1
            if char_freq[s[windowStart]]==0:
                del char_freq[s[windowStart]]
            windowStart+=1
        max_len=max(max_len,windowEnd-windowStart+1)

    return 0 if max_len==-1 else max_len
    
for _ in range(int(input())):
    s=input()
    k=int(input())
    print(longestSubstring(s,k))

# Brute force approach- O(n2)
def longestSubstring(s,k):
    max_len=-1
    for start in range(len(s)):
        char_set=set()
        for end in range(start,len(s)):
            char_set.add(s[end])
            if len(char_set)>k:
              break
            max_len=max(max_len,end-start+1)
            
    return 0 if max_len==-1 else max_len
    
for _ in range(int(input())):
    s=input()
    k=int(input())
    print(longestSubstring(s,k))
