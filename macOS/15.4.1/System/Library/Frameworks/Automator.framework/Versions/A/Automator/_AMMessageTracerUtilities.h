@interface _AMMessageTracerUtilities : NSObject

+ (void)initialize;
+ (id)identifierForAction:(id)a0;
+ (id)identifierForAction:(id)a0 withResult:(id)a1;
+ (void)logWorkflowRun:(id)a0;
+ (long long)countOfInput:(id)a0;
+ (void)logAMWorkflowRun;
+ (void)logActionRun:(id)a0;
+ (void)logMessageForDomain:(id)a0 signatures:(id)a1 values:(id)a2 result:(id)a3 message:(id)a4 uuid:(id)a5;
+ (void)logTimeIntervalSinceAutomatorLaunch:(double)a0;
+ (void)logTypes:(id)a0;
+ (void)logWithDomain:(id)a0 forAction:(id)a1 withInput:(id)a2 duration:(double)a3 error:(id)a4 workflowID:(id)a5 executionID:(id)a6;
+ (void)logWorkflowDuration:(double)a0 workflowID:(id)a1 executionID:(id)a2;

@end
