[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=5832241&assignment_repo_type=AssignmentRepo)

//Breanna Powell
//SID: 0641962

Summarize your scoring system:
For my scoring system, I would like to favor students who are younger (because they are less likely to have a source of income), are veterans, or have high needs. My goal was to try and make the program fair for the students who use it. Students who are under disciplinary action are likely to be left out, while students who have high needs or work student teaching are more likely to benefit from the algorithm.

Higher points are given to students who are younger, have a lower class year, are student teaching, are veterans, or qualify for accomodations through Disability Resources for Students (DRS).

For the part of the award scheme that is calculated, I chose to make it so that even if a student is older they can benefit from the algorithm if they have high needs or if they are a veteran.

Sample output for test cases:
a 25 year old (0pts) senior (1pt) on academic probation (-1pt) = 0 housing point(s)
a 22 year old (1pt) junior (2pts) who is a student teacher (1pt) = 4 housing point(s)
a 20 year old (1pt) sophomore (3pts) on disciplinary probation (-3pts)= 1 housing point(s)
a 28 year old (0pts) senior (1pt) who has high needs (28-18 = 10/2 = 5 points) = 6 housing point(s)
a 20 year old (1pt) freshman (4pts) who is a veteran (1pt) = 6 housing point(s)

A 22 year old junior who is a student teacher has priority over a 20 year old sophomore on disciplinary probation.
A 20 year old sophomore who is on disciplinary probation has more priority over a 25 year old senior on academic probation.
A 20 year old freshman who is a veteran has the same priority as a 28 year old senior wh o has high needs.
