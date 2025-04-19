@class SUCoreEventReporter;

@interface SUTelemetryReporter : NSObject

@property SUCoreEventReporter *coreEventReporter;

- (id)init;
- (void)flushEvents;
- (void)indicateOnceIdle:(id /* block */)a0;
- (BOOL)reportEventToCoreAnalyticsWithName:(id)a0 payload:(id)a1;
- (BOOL)reportEventToSplunkWithName:(id)a0 payload:(id)a1;

@end
