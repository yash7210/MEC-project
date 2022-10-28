<h1>MEC-Project</h1>

Group Members: Nadia Sousa, Yashaswini Mandalam, Sean Phelan, Wyatt Polasek


<h2>Project Summary:</h2>

This project takes in a student's grades and calculates their final course grade. The user inputs a text file with the ordered grades and the program reads the file into a 2D vector and creates a Gradebook object. From there, methods from the Gradebook class are called to calculate the grade for each task (labs, assignments, term project, final exam, MEC). Lastly, the method to calculate the final overall grade and to output the grades is called to print out the results.  


<h2>Pseudocode:</h2>


<img align = "center" height = 400 src = "https://user-images.githubusercontent.com/98436401/198358133-89c45b27-0eeb-40f3-af5b-e2e6ac608a7f.png" />


<h2>Algorithm Features:</h2>

<h3>Inputs:</h3>
 
 Takes in a text file with the format: 
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
  * prints out the name of the graded task, the corresponding points earned, and grade for each task overall
  * then it prints out the final grade as a percentage


<img align = "center" height = 150 src = "https://user-images.githubusercontent.com/85038009/198422603-fc575063-eda1-4038-bc6a-f1f300e998b7.png" />


* Why We Developed it this Way:




<h2>How to:</h2>
* Input the Data:
  * when compiling and calling the file, take in the filename of your chosen grade file as an argument
* Compile the Features: 



