# Interactive Code Adaptation Tool (ICAT)
Following people contributed in the development of ICAT: Tiffany Connors, Ritu Arora, Lars Koesterke

License: The code for this project is released under the new BSD license.


We are grateful to NSF for award # 1642396 that has enabled in refining ICAT.


Requirements:

(1) Intel Vtune profiler

(2) Perf

(3) C++ compiler

(4) Bash script


## Usage


- Clone the repository to stampede2
```
git clone https://github.com/ritua2/ICAT.git
cd ICAT
```

-Extract the content of icat.gz file
```
tar -xvzf icat.gz
mv /icat/src .
rm -r icat
```

- Please make sure you complete the steps mentioned at [file](https://github.com/ritua2/ICAT/blob/master/README.txt)
	- The sample .icatrc file is available on the repo, please copy it to your @home directory and updated the paths inside it accordingly.
	- Make sure the other two paths mentioned in [file](https://github.com/ritua2/ICAT/blob/master/README.txt) are updated
	

- Following steps are to run a sample available in this repository, please feel free to use other code but ensure that the paths have been updated accordingly
```
bash -i src/icat.sh
```
- press y when asked for "Please acknowledge that you have compiled the code with the '-g' option"

- provide the name of executable as: **sum**

- Then provide complete path to the executable: **$PATH_ICAT/testICAT/**

- skip the input for command line arguments. If custom code is being used, please provide the necessary arguments spaced by comma

- Select the required advisor, if not sure select **6** -> meaning all advisors

- Sample code is Non MPI, so select **2** for MPI programming model, for custom code select respectively.

- If using custom code and using command line arguments then provide the command line arguments

- Considering programming model, select **"None of the above/serial or OpenMP without nesting"** for sample code. For custom code, select as per the programming model is used in the code 

- Select **"Selective allocation using memkind"** for memory allocation. This varies for custom code.

- Now to see the demo of source code modification script for HPC press **2**.

- The changes will be highlighted in red color.



