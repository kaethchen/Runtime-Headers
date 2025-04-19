@interface CalMessageTracer : NSObject

+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 summarize:(BOOL)a3;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 result:(int)a3;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 result:(int)a3 value:(id)a4;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 result:(int)a3 value:(id)a4 summarize:(BOOL)a5;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 result:(int)a3 value:(id)a4 value2:(id)a5 uid:(id)a6;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 result:(int)a3 value:(id)a4 value2:(id)a5 value3:(id)a6 uid:(id)a7 uid2:(id)a8 wakeState:(id)a9;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 signature2:(id)a3 result:(int)a4 value:(id)a5 value2:(id)a6 value3:(id)a7 uid:(id)a8 uid2:(id)a9 wakeState:(id)a10 summarize:(BOOL)a11;
+ (void)log:(id)a0 domain:(id)a1 signature:(id)a2 signature2:(id)a3 summarize:(BOOL)a4;
+ (void)log:(id)a0 domain:(id)a1 summarize:(BOOL)a2;
+ (void)logError:(id)a0 message:(id)a1 domain:(id)a2;
+ (void)logError:(id)a0 message:(id)a1 domain:(id)a2 uid:(id)a3;
+ (void)logException:(id)a0 message:(id)a1 domain:(id)a2;
+ (void)messageTraceLogDomain:(id)a0 withSignature:(id)a1;
+ (void)traceWithDomain:(id)a0 signature:(id)a1 result:(int)a2;
+ (void)traceWithDomain:(id)a0 signature:(id)a1 signature2:(id)a2 summarize:(BOOL)a3;
+ (void)traceWithDomain:(id)a0 signature:(id)a1 summarize:(BOOL)a2;
+ (void)traceWithDomain:(id)a0 value:(id)a1 summarize:(BOOL)a2;

@end
