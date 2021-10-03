[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=5832241&assignment_repo_type=AssignmentRepo)


Your repo must have a README.md file in which you:
Summarize your scoring system
Sample output for three test cases:
a 25 year old senior on academic probation
a 22 year old junior who is a student teacher
a 20 year old sophomore on disciplinary probation
Explain why your program is either fair or not fair. In particular, describe which students are most likely to benefit from your algorithm and which are likely to be left out.

A student's priority is the sum of the points that can be assigned to them. So a junior (3 points) who is 23 years old (1 point) would have priority over a senior (4 points) who is on academic probation (-1 point).

To reduce the utter triviality of this assignment, we introduce some additional requirements:


You must have at least one point award in your scheme that is calculated, rather than determined directly by the answer (for example, you might assign points based on age by computing points = max(0, (age - 18) / 2)).

Your repo must show multiple commits to demonstrate that you can work with GitHub (and so you can be sure that you're work is safely stored in the cloud). So, remember to make commits at reasonable intervals/milestones and push to GitHub.
