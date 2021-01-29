# cppConsSeqFromSubSeq

### Coding Challenge

Given a sequence like [1, 2, 3, 4, 5], and an array of sub sequences like [[1,2], [3, 4], [5]], return true or false if the given sequence could be constructed from given sub sequences. The selected sub sequences would concatenate to construct exactly the given sequence.

 

#### Example:

sequence: [1, 2, 3, 4, 5] // Assuming no dup

sub sequences:

[[1,2], [3, 4], [5]] T

[[1, 2, 3], [4, 5, 6]] F // Result sequence has an extra 6

[[1, 2, 3], [3, 5, 4]] F

[[1, 2], [1, 2, 3], [4, 5], [3], [6, 7]] T // Two ways to construct.

[[1, 2], [4, 3, 5]] F //Result will be 1 2 4 3 5, re-ordered.
