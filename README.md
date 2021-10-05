[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=5832241&assignment_repo_type=AssignmentRepo)

//Breanna Powell
//SID: 0641962

Summarize your scoring system:
For my scoring system, I would like to favor students who are younger, may not have an income, are veterans, or have high needs. My goal was to try and make the program fair for the students who use it. Students who are under disciplinary action are likely to be left out, while students who have high needs or less income are more likely to benefit from the algorithm.

Higher points are given to students who are younger, have a lower class year, are veterans, or qualify for accomodations through Disability Resources for Students (DRS).

For the part of the award scheme that is calculated, I chose to make it so that even if a student is older they can benefit from the algorithm if they have high needs or if they are a veteran.

Sample output for three test cases:
a 25 year old senior on academic probation
a 22 year old junior who is a student teacher
a 20 year old sophomore on disciplinary probation
Explain why your program is either fair or not fair. In particular, describe which students are most likely to benefit from your algorithm and which are likely to be left out.

A student's priority is the sum of the points that can be assigned to them. So a junior (3 points) who is 23 years old (1 point) would have priority over a senior (4 points) who is on academic probation (-1 point).

