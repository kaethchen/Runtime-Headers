@interface EXSLogging : NSObject

+ (unsigned long long)addStateHandlerWithName:(const char *)a0 stateBlock:(id /* block */)a1;
+ (id)currentQueueLabel;
+ (void)removeStateHandler:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachStartTime:(unsigned long long)a0 andMachEndTime:(unsigned long long)a1;

@end
