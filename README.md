# Impledge_Technologies_solution


## Coding Execution Procedure

Requires gcc6.3.1 or newer

 1. Download / Clone the repo into your machine.
 2. Compile the file by writing command 
`g++ -std=c++14 -o sol C.cpp`
 3. Run the input1 by writing command 
`sol.exe < input1.txt`
 4.  Run the input1 by writing command 
`sol.exe < input2.txt`

## Explaination about solution

1. Store all the strings in unordered_set
2. For each string check whether it is compound string or not
    To check compound string, run dynamic programming solution 
    where dp[i] = true if substr str[0...i] is compound string 
          dp[i] = false if substr str[0...i] is not compound string
          for j > i if Substring str[i+1,....j] is present in set and str[0...i] is compound string then we can say
            dp[j] = true ;
            
 3. Maintain 2 strings longestCompound and secondLongestCompound
 4. if current compound string is greater than longestCompound and update secondLongestCompound to longestCompound and longestCompound to currentString
 5. if current compound string is greater than secondLongestCompound update only secondLongestCompound
 
 
        
