@interface ScreenSaverMessageTracerLogger : NSObject

+ (id)sharedLogger;

- (void)logMessageWithName:(id)a0 dictionary:(id)a1;
- (void)logMessageWithName:(id)a0 signature:(id)a1;

@end
