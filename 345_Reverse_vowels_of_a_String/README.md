### Analysis

Apparently, this problems can be solved using two pointers method from 2 ends.

### Some Tips

* In Python, the character of string cannot be directly assigned like this: s[i] = 'a'.
  However, we can first transver string to list using s = list(s).
  Then, we can modify the element of list, s[i] = 'a'.
  Finally, reconstruct the string from list using ''.join(s).
  
