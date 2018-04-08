### Analysis

Apparently, it is the backtracking problem.

=> Insist the first choice until  we cannot continue.
   Then, from the first possible "turning point", choose the other choice.

=>
    1. Initialize the parenthese string as cur\_str("").
    2. append '(' to the cur\_str and count the number of left parentheses in the string. 
    3. If we cannot append '(' to cur\_str, append ')' and count the right parentheses in the string.
    4. Backtracking from right side of cur\_str, we can choose to append ')' at the position of first saw '('. 
    5. Repeat the step 2 to 4.


