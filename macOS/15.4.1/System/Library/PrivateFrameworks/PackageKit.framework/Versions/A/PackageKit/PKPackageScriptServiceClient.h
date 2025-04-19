@interface PKPackageScriptServiceClient : NSObject

+ (BOOL)runPackageScriptAtPath:(id)a0 withArgument:(id)a1 withCurrentWorkingDirectory:(id)a2 timeout:(unsigned long long)a3 withLogPrefix:(id)a4 withEnvironment:(id)a5 withInstallRequest:(id)a6 withOutTerminationStatus:(int *)a7 withOutError:(id *)a8;

@end
