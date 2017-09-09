# VC-Programming

## Forward DLL
Forward the functions in a DLL Module to another DLL.
To forward a function, in the def file:

EXPORTS
	funXXX=MMM.funYYY
	
Here the funXXX is the function will be forwarded.
MMM is the target module.
funYYY is the function in the target module, MMM, funXXX will forward to.