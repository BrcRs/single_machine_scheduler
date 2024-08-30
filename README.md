# single_machine_scheduler

## Goals

Single Machine Scheduler. Schedule tasks on a single machine.

The application should optimize the order of execution of tasks on a single 
machine to minimize weighted completion time. Tasks have a processing time and a weight.
The weight reflects the priority of a task.

The algorithm used will be Weighted Shortest Processing Time.

The time dedicated to this project is 2 days.
Bruce Rose is the developer for this project.

The user will be provided means to:

- submit an instance and get the solution with its value.
- the instance and solution will be in JSON format.

## Design

IFormatReader is an interface that will expose a function that reads an instance in some format 
and translate it in a list of integer couples, representing each task. Another 
function will do the opposite.

IAlgorithm is an interface for an algorithm which will feature a solve function,
taking in input a list of integer couples (tasks), and returning a beginning date for each task.

The WSP algorithm will implement the IAlgorithm interface.

The JSONReader will implement the IFormatReader interface.
