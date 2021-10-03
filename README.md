[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=5832241&assignment_repo_type=AssignmentRepo)


Your repo must have a README.md file in which you:
Summarize your scoring system
Provide sample output for three test cases:
a 25 year old senior on academic probation
a 22 year old junior who is a student teacher
a 20 year old sophomore on disciplinary probation
Explain why your program is either fair or not fair. In particular, describe which students are most likely to benefit from your algorithm and which are likely to be left out.


Organizations often use software to implement algorithms for decision-making. The decisions we make in code impact the lives of real people. For example, the Silicon Valley Triage Tool is an algorithm that identifies homeless people for whom providing housing would cost the public less than keeping them homeless. So even as we learn the simple structures of code, we need to think about how can we make good decisions. We'll explore this a bit in program 0 in a lower-stakes manner: a university housing lottery.
Your job is to build an algorithm that helps determine the order in which students will get to select their housing. To simplify things, we’re going to use a point system.
Students are awarded a number of points based on a variety of factors.
Students with the most amount of points get first choice at housing.
This approach is used by many universities. For example, consider the following real point system used by a liberal arts college:
Current Freshman: 1 point
Current Sophomore: 2 points
Current Junior: 3 points
Current Senior: 4 points
23+ Years of Age: 1 point
Full-Time, Off-Campus Program Credit (e.g. student teaching): 1 point
Academic Probation: -1 point
Possible Academic Suspension: -2 points
On Disciplinary Probation at Any Point during the Academic Year: -3 points
A student's priority is the sum of the points that can be assigned to them. So a junior (3 points) who is 23 years old (1 point) would have priority over a senior (4 points) who is on academic probation (-1 point).

Create a program that assigns points to students in order to prioritize them in housing selection. You program will prompt a user via cout and read user input via cin. Its overall function will be:
Ask students questions (like "What class year are you?").
Assign points based on their answers.
Accumulate their total points across all answers and output the result (like "You have 23 housing points").
You may implement a scheme similar to the example scheme above (subject to the contraints below) or a scheme of your devising.

To reduce the utter triviality of this assignment, we introduce some additional requirements:
You must have at least one question that only appears if a previous question is answered a particular way (for example, a question that is only applicable to seniors).
You must have at least one point award in your scheme that is calculated, rather than determined directly by the answer (for example, you might assign points based on age by computing points = max(0, (age - 18) / 2)).
Your repo must show multiple commits to demonstrate that you can work with GitHub (and so you can be sure that you're work is safely stored in the cloud). So, remember to make commits at reasonable intervals/milestones and push to GitHub.
