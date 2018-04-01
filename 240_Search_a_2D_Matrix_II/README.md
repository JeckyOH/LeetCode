### Analysis

From top right to bottom:
1) If target < matrix[i][j], j--
2) If target > matrix[i][j], i++

### Complexity:

O(log(m + n)).

Regard the matrix as a tree with top-right element as root node.
Every time we make a decision to go left or right child, we give up one row or one column.
Along the tree path=>O(log(m+n)).
