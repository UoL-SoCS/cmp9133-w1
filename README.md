# CMP9133 - Workshop 1


#### <div align="center">    University of Lincoln</br> School of Computer Science </br> CMP9133 – Advanced Programming</br> </div>


## Task1: Create a Github Account

In case you don't have a GitHub account, you can create one at this [link](https://github.com/signup). 
You **MUST** use always the same GitHub account when solving the assessments for this module, since we will keep a list of tuples `<student_id, student_name, student_surname, github_id>` and we allow submission only from one account per student.

Having said so, please fill this [form](https://forms.office.com/e/Rr7L7R4PTc) before continuing with the tutorial 😀

## Task2: Setup coding environment

  1. Access the Workshop environment at the following [link](https://classroom.github.com/a/sABNxXnr).
     You will be greeted by the following message, and you need to accept the assignment.
     <img width="1212" height="886" alt="image" src="https://github.com/user-attachments/assets/69b7b791-f69c-4a74-a0dd-76b63366a51e" />

  2. After having accepted the new assignment, please open your repository, click on the green `<> Code` button, on the `Codespaces` tab and `Create codespaces on master` green button
    <img width="1251" height="1053" alt="image" src="https://github.com/user-attachments/assets/243b428a-59d1-41e4-86c2-641fabeac1a7" />

  3. After some loading time, an instance of Visual Studio Code should be visible within your browser, similarly to what you can see in the following image
       ![image](https://github.com/user-attachments/assets/a53e5529-ed0c-46de-8ef2-1371e27fb076)
  4. (Optional) If you are already familiar with VS Code and you have linked it to your GitHub account previously, you may log in to synchronise your own settings and extension.

## Task3: Hello, World!

As the first task for this module, you need to implement a very simple script that outputs in console the string `Hello, World!`

**Instructions:**

  1. To do so, please modify the function `getHelloWorld()` in the file `hello_world.cpp`.
  2. Open the terminal from the `View -> Terminal` menu
  3. Compile the file project by typing `make` and pressing `Enter` on your keyboard. If the compilation succeded, a new file called `a.out` should appear among the list of files in the project
     
      ![image](https://github.com/user-attachments/assets/a5da77cd-c5a9-445b-97e7-c2de41015a39)

  5. Run the executable by typing in console `./a.out`
     In case your solution passed the test, you should obtain something like the following:
     ![image](https://github.com/user-attachments/assets/335b1ffa-8bc2-46be-95f2-8ce22e4cb91b)

     Differently, if your implementation is not acceptable, you may get something like the following
      ![image](https://github.com/user-attachments/assets/e1bd356c-d257-4ba7-865b-98dceb48dbb6)
     Carefully inspecting the console may suggests how the implementation must look like in order to pass the test.
     Similarly, you can also check the `hello_world_test.cpp` file to better understand what output the tests expects.

## Task 4: Submit your solution

  1. When you are happy with your solution, it's now time to submit it online for being graded. You may see on the left an icon looking like a tree with a badge on it. Clicking on it will open a side menu for performing version control on our project:

       ![image](https://github.com/user-attachments/assets/c38ec856-b74b-45a0-b37a-5e0b61d9b2b6)
  
  3. At this point, we want to `commit` the modification we made to the file `hello_world.cpp`. As such, click on the `+` symbol appearing when you hover with your mouse on this file. By doing so, we will add the `hello_world.cpp` file to the list of files staged for commit:

      ![image](https://github.com/user-attachments/assets/9e4c6bab-3d63-4a5c-9e46-80caf83583f0)

  4. We now need to specify a message for our commit. It must be anything informative about what we have done. You can simply type "Solution" in the text box and then press the green button. You should see now there are some files that need to be syncronised between our project and the remote:

      ![image](https://github.com/user-attachments/assets/500bbd89-0e8f-446f-b0a6-290ad0582aa7)
  5. Now press on the small arrow point up for pushing your changes to the cloud and submit your solution.

      ![image](https://github.com/user-attachments/assets/d03813dd-8b18-44d9-8a1b-8001f3f942b9)

  6. You can now check on your repository page if you actually passed the test run in the cloud and auto-graded. You should access the `Pull Request` tab, and then open the only one present there, which should be called `Feebback #1`. Here, you will see a list of all the committs made (by you) on this repository, and the results of the Github actions used for testing your code. Look for a green tick next to your last commit. If it's there, it means all has been successful. Differently, if there is a red cross, you can further inspect the cause of error and try to fix it into your code, after looking at the compilation logs.
      <img width="1037" height="1237" alt="image" src="https://github.com/user-attachments/assets/21bcc9db-018e-4a63-8fa9-197f2ae6c735" />





