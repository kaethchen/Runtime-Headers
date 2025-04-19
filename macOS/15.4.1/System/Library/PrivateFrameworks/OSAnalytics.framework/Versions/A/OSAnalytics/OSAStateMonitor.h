@interface OSAStateMonitor : NSObject

+ (void)recordEvent:(id)a0;
+ (id)CALogStateToString:(long long)a0;
+ (void)checkAndReportCALogStates;
+ (void)checkCALogWrittenStatus;
+ (void)checkSubmissionStatus;
+ (id)dateForEvent:(id)a0;
+ (id)evaluateCALogStates:(id)a0;
+ (void)evaluateState;
+ (id)keyForEvent:(id)a0;
+ (void)postFailureWithReason:(id)a0;
+ (BOOL)processCALogEvent:(id)a0 eventPayload:(id)a1 into:(id *)a2;
+ (void)recordEvent:(id)a0 with:(id)a1;

@end
