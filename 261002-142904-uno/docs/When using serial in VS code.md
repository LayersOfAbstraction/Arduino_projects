When usig serial in VS code renember you will need to stop and start else you will get permission errors when attempting to activate the debugger.

James gave me a task to do: Rewrite the code to have for loops. 

The way to do To allow me to activate the debugger so I can see the errors is not bother with breakpoints.
I could get it working but it is a lot more work. 

To be able to pause the code line by line to understand the execution, James wrote a paramaterless function (method) technically called, wait_for_serial that allows me to go line by line through the code via the Serial Monitor tab where the terminal is. That will allow me to debug the project easier so I don't have 
to look back and forth.