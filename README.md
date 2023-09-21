A searching algorithm is a method used to find a particular item or set of items with specific properties within a collection, such as an array or a list. The objective is to determine the presence of the desired item and, in some cases, its location.

Websites: When you type something into a search bar (like on Google or Amazon), a search algorithm helps find the relevant results.

Databases: When businesses or apps need to fetch specific information, they use search algorithms to find it quickly.

GPS: When finding the shortest path or a specific location.

Games: To find the best move or to simulate intelligent behavior.

File Systems: On your computer or phone, when you search for a file or app.

Basically, anywhere data needs to be searched or organized, search algorithms come into play!

Linear Search:

Time Complexity:
Best-case: 
O(1) - This is when the desired element is found at the beginning of the list.
Average-case: 
O(n) - On average, the search might need to scan half of the elements, which still results in 
Worst-case: 
O(n) - This happens when the desired element is at the end of the list or not in the list at all.

Space Complexity:
Worst-case: 
O(1) - Linear search uses a constant amount of space regardless of the input size, as it doesn't require any additional data structures.

Binary Search:

Time Complexity:
Best-case: 
O(1) - The desired element is found on the first try.
Average-case: 
O(logn) - On average, the search space is halved with each comparison.
Worst-case: 
O(logn) - This happens when the desired element is found after the maximum number of halvings.

Space Complexity:
Iterative version: 
O(1) - The iterative version uses a constant amount of space as it doesn't employ any additional data structures.
Recursive version: 
O(logn) - The recursive version might use up to O(logn) space due to the call stack in a worst-case scenario.




