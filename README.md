<h1>MEC-Project</h1>

Group Members: Nadia Sousa, Yashaswini Mandalam, Sean Phelan, Wyatt Polasek

<h2>Project Summary:</h2>

This project takes in a student's grades and calculates their final course grade. The user inputs a text file with the ordered grades and the program reads the file into a 2D vector and creates a Gradebook object. From there, methods from the Gradebook class are called to calculate the grade for each task (labs, assignments, term project, final exam, MEC). Lastly, the method to calculate the final overall grade and to output the grades is called to print out the results.  


<h2>Pseudocode:</h2>

<kbd>
<img align = "center" height = 400 src = "https://user-images.githubusercontent.com/98436401/198358133-89c45b27-0eeb-40f3-af5b-e2e6ac608a7f.png" />
</kbd>

<h2>Algorithm Features:</h2>

<h3>Inputs:</h3>
 
 Takes in a text file with the following format: 
  <ul>
  <li> Line 1 : lab grades (out of 5)</li>
  <li> Line 2 : assignment grades (out of 100)</li>
  <li> Line 3 : term project grade (out of 350)</li>
  <li> Line 4 : review project (1 for pass, 0 for fail)</li>
  <li> Line 5 : final exam grade (out of 100)</li> 
  </ul>
 
 Things to note:
 <ul>
 <li>It is important that the text file follows this exact format for accurate results</li> 
 <li>The review project has two parts (Part 1 and Part 2) graded on a pass/fail basis and the input (line 4 of txt file) should look like one of the following:
 <ul>
 <li>0 0 <- if student failed both parts</li>
 <li>0 1 <- if student failed Part 1 but passed Part 2</li>
 <li>1 0 <- if student passed Part 1 but failed Part 2</li>
 <li>1 1 <- if student passed both parts</li>
 </ul>
 </li>
 <li>The final exam input (line 5) should be a -1 if the student did not take the exam</li>
 </ul>
  
 Examples of Input:
 ```                               
 5 5 5 5 5 5 5 5 5 5
 90 100 85 95 90
 330 
 1 0
 75
 ```
 ```
5 5 5 5 5 5 5 5 5 5
100 100 85 100 100
340 
1 1
-1
```

<h3>Outputs:</h3>
<ul>
<li>Prints out the name of the graded task, the corresponding points earned, and percentage grade for each task overall</li>
<li>Prints out the final grade as a percentage</li>
</ul>
<kbd>
<img align = "center" height = 200 src = "https://user-images.githubusercontent.com/85038009/198422603-fc575063-eda1-4038-bc6a-f1f300e998b7.png" />
</kbd>


<h3>Why We Developed it this way:</h3>
<ul> 
<li>Why did we use a file as input?</li>
Passing a file as input makes it easy for the user to pass in all their grades at once instead of typing their grades after the program complies each time. 

<li>Why use a class and class methods for calculations and output?</li>
<ul>
<li> Different methods to calculate categorical grades helped break down the overall task of calculating grade into smaller parts</li>
<li> Methods helped us keep track of the grades for each section (labs, assignments, term project, review project, final exam)</li>
<li> Made it easy to test and debug</li>
<li> Having a class makes it easy to modify this code to calculate grade for future courses</li>
</ul>

<li>Why did we use 2D vector instead of a 2D array?</li>
<ul>
<li> They are resizable and work great for a program like this because the size of the input is variable</li>
<li> This program will run perfectly weather the user inputs 1 lab grade or all 10, or if the user inputs 2 assignment grades or 3. If we used a 2D array it would have been extremely difficult to account for the variablity in the input size</li>
</ul>

<li>Why did we output the percentages of categorical grades?</li>
<ul>
<li>Student could easily identify what sections they excelled in/struggled in</li>
<li>Helps students understand what areas they need to work on
</ul>
</ul>

<h2>How to:</h2>

The lines to compile the program are shown below

Note that the command line contains the name of the input text file, which in this case is Sample1.txt
```
g++ gradesmain.cpp gradebook.cpp -o g
./g Sample1.txt
```


