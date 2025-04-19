@interface BRPosixOperationsWrapper : NSObject

+ (int)checkMachLookupForService:(id)a0;
+ (int)closeFD:(int)a0;
+ (long long)consumeSandboxExtension:(id)a0 error:(id *)a1;
+ (void)exitProcess:(int)a0;
+ (unsigned long long)getFileIDOfURL:(id)a0 withError:(id *)a1;
+ (int)open:(id)a0 flags:(int)a1;
+ (void)releaseSandboxExtensionHandle:(long long)a0;

@end
