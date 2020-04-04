# Modified-Non-Preemptive-SJFS
A shortest job first scheduling implementation where it is non-preemptive and modifications to overcome starvation.

# Run
A large number of test cases can be tested using the ***run_test**.sh* script, the output after running this script will be stored in ***results**.txt*. To change the test cases in test.txt follow this input structure:
```
int 		#number of test cases
int 		#number of process in respective test case
int int 	#burst time and arrival time

```
### Sample Test
```
2 				#number of test cases
5				#number of processes in the respective test case
5 0				#burst time and arrival time
3 1				#burst time and arrival time	
2 1				#burst time and arrival time	
2 4				#burst time and arrival time
8 0				#burst time and arrival time
3 				#number of process in respective test case
5 0				#burst time and arrival time
5 0				#burst time and arrival time
5 0				#burst time and arrival time
```

### Output
```
Test Case 1

pord      	bt        	at        	wt        	tat       
p1	         5	         0	         0	         5
p3	         2	         1	         4	         6
p2	         3	         1	         6	         9
p4	         2	         4	         6	         8
p5	         8	         0	        12	        20

Average Waiting Time: 5.600
Average Turnaround Time: 9.600

---------------------------------------------------

Test Case 2

pord      	bt        	at        	wt        	tat       
p1	         5	         0	         0	         5
p2	         5	         0	         5	        10
p3	         5	         0	        10	        15

Average Waiting Time: 5.333
Average Turnaround Time: 10.000

---------------------------------------------------
```

# Assignment Report
This repository is in completion of CSE316 assignment and the report for the same is included in the repository or can be viewed by clicking [here](https://github.com/lawRathod/Modified-Non-Preemptive-SJFS/blob/master/CSE316%20Assignement.pdf).
