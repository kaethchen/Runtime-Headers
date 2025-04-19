@interface TRICCommandRunner : NSObject

@property (class, nonatomic) BOOL useTrialTool;

+ (int)_withLoggingRunCommand:(id)a0 arguments:(id)a1 output:(id *)a2;
+ (int)_withoutLoggingRunCommand:(id)a0 withArgs:(id)a1 output:(id *)a2 error:(id *)a3;
+ (id)convertToTrialToolArgs:(id)a0;
+ (id)convertToTrialToolCommand:(id)a0;
+ (int)runCommand:(id)a0 withArgs:(id)a1;
+ (int)runCommand:(id)a0 withArgs:(id)a1 output:(id *)a2 error:(id *)a3;
+ (int)runCommandAsTrialDaemonUserName:(id)a0 withArgs:(id)a1 output:(id *)a2 error:(id *)a3;
+ (id)runCommandAsync:(id)a0 withArgs:(id)a1 taskOutputOut:(id *)a2 error:(id *)a3;
+ (BOOL)runWithRootPrivilegesDroppedDescription:(const char *)a0 block:(id /* block */)a1;

@end
