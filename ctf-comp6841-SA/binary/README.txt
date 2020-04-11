Note all these challenges involve somehow storing the flag inside the binary
which can be bypassed by gdb. 

If there challenges were to actually be used in a real ctf, you would need
to remove the print_flag functions and any flags left from the source and compile
a binary without it. This stripped binary can then be given to challengers to 
examine.  

After challengers examine the binary, the actual binary will be hosted remotely
and users must give their input to this remote host in order to grab the flag.
User can not interact with gdb on the host without having exploited the binary 
first to spin up a shell. 


When doing these challenges keep this in mind and try and solve them 
without skipping to using gdb to jump to the print_flag sections in binary.

The easy and medium challenges were compiled on a 64 bit linux machine.
The hard challenge was compiled on a 32-bit machine using Ubuntu 14.04.
It is recommended that you perform the hard challenge on the same type of 
machine that compiled it.  