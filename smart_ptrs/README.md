# Smart Pointers

One of the problems faced in doing robust programming is knowing when to delete an object. There are several failures that can happen. 

1. “A first problem is not deleting the object at all (failing to free the storage). This is known as memory leaks, where objects accumulate and take up space but are not used. ”

2. “Another problem is where someone deletes the storage but others are still pointing to that storage, resulting in pointers to storage which is either no longer in use or has been reallocated for another purpose. This is known as dangling pointers. ”

3. “One more problem is when one piece of code frees the storage, and another piece of code attempts to free the same storage. This is known as double-freeing. ”

Excerpt From: Marc Gregoire. “Professional C++.” Apple Books. 
