@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (void)startup;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;

@end
