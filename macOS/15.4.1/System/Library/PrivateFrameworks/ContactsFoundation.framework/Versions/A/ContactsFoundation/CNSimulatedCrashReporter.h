@interface CNSimulatedCrashReporter : NSObject

+ (id)os_log;
+ (void)simulateCrashWithCode:(long long)a0 description:(id)a1;
+ (void)simulateCrashWithMessage:(id)a0;

@end
