# geneHackman

A genetic algorithm to learn if we should wait for a table (Assignment)


## Question
Consider the following table from the restaurant domain.

![table](https://photos-2.dropbox.com/t/1/AADuVPKBBNRxl9wVeaRm560C6Db3y0irMtEdORC_ofMfLA/12/2332250/png/1024x768/3/1413507600/0/2/Screenshot%202014-10-16%2019.18.08.png/cOzZ_NdZ6BYxcb1TJKm8IV2nDe4sUrOqcI7tcqVj0Fw)

Apply genetic algorithms to this example data set in order to learn whether to wait for a table.
Design the structure of genes appropriate for this data set. Develop a fitness function that properly characterizes the fitness of a gene according to the function to be learned. Select a set of genes as the initial population and run the genetic algorithm for several generations. Apply the crossover and possibly the mutation operator. What are the winning genes and how can they be learned? Document your work with hand-runs or possibly the output of a small program you designed.


## Solution

For this question, I decided to code my genetic algorithm in C++.
I encapsulated the gene object into a class with functions such as createGene, crossOver, mutate and evolve.
I then constructed an array of 10 randomly generated genes and began by running a fitness test.
After the test scored all the genes, I began altering genes to save the strongest, delete the weakest and mutate all those in the middle.
By doing so, the strongest gene I was able to generate was this:

```
#:#:No:#:SOME:#:#:#:#:0-10
```
which has a score of 10.

Looking at `main.cpp` you can see that after running the fitness function, I find the strongest and weakest genes.
I then crossover strongest genes and replace the weakest genes with the newly created genes.
I then mutate all the genes in between the strongest and the newly created genes.

To achieve a gene with a score of 10, I ran my algorithm 500 times.
