@interface SLSFullScreenPidReporter : NSObject

+ (id)sharedReporter;

- (id)init;
- (BOOL)equalCurrentSeed:(unsigned long long)a0;
- (void)handleConnectionInterrupt;
- (unsigned long long)incrementSeed;
- (void)receiveMessages:(id)a0;
- (void)reportFullScreenStatusWithFilter:(id)a0 andHandler:(id /* block */)a1;
- (void)setDisconnectHandler:(id /* block */)a0;

@end
