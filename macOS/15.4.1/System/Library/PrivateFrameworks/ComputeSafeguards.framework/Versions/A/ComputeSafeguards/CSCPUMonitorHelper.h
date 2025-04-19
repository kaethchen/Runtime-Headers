@interface CSCPUMonitorHelper : NSObject

+ (int)clearMonitorForPID:(int)a0;
+ (int)setThreshold:(float)a0 overTimeWindow:(float)a1 forPID:(int)a2 withFatalEffect:(BOOL)a3 withCPULimit:(BOOL)a4;

@end
