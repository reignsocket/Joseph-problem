Problem Description  
Joseph's question: There are n monkeys, circled in a clockwise direction to choose the king (numbered from 1 to n), starting from the first number, counting up to m, counting the monkeys to m out of the circle, leaving The monkey then starts counting from 1 onwards. In this way, until there is only one monkey left in the circle, this monkey is the monkey king. After programming, enter n, m, and output the number of the last monkey.
  
  
Input data  
Each line is two integers separated by spaces, the first is n and the second is m ( 0 < m, n < 300). the last line
Yes:
0 0  
  
Output requirements  

For each line of input data (except for the last line), the output data is also one line, which is the last monkey king's number.  
Input example:  
6 2  
12 4  
8 3  
0 0  
  
Sample output:  
5  
1  
7  
  
Problem solving  
At first glance, it is very likely that you want to use this topic as a math problem, that is, the result may be changed by n and m.
A function of quantity f(n,m), as long as this function is found, the problem is solved. In fact, such a function is hard to find, and may not even exist at all. The solution by hand is to write n numbers on paper and arrange them in a circle, then start counting from 1 and draw a number every m to the m, and do it again and again until the last one is left. With a computer, this work will be much faster. We just have to write a program that simulates the manual process. Use the array anLoop to store n numbers, which is equivalent to n numbers of circles; use the integer variable nPtr to point to the current array element, which is equivalent to the human finger; to cross out a number of operations, use an array The element is set to 0 to achieve. In the case of a manual number, to skip the number that has been crossed out, the array element of 0 is skipped when the program is executed. It should be noted that when nPtr points to the last element in anLoop (subscript n-1), and then counts the next one, nPtr points back to the first element of the array (subscript 0), so that anLoop is like a circle. .
  
Implementation skills  
An array of n elements, the monkey number is stored from the element of subscript 0. When the loop is reported, the subscript of the next monkey is "(current monkey subscript + 1)% n". This type of writing is more efficient and easier to write than using a branch statement to determine the subscript of the next monkey.  
