@class NSString;

@interface DMCEvents : NSObject

@property (retain, nonatomic) NSString *errorFilePath;

- (id)init;
- (void).cxx_destruct;
- (id)_eventsFileFolder;
- (id)_eventsPlistFilePath;
- (void)_injectTimestamps:(id)a0;
- (void)_logEvent:(id)a0 category:(id)a1 forTopic:(id)a2;
- (unsigned long long)_maximumEventCount;
- (void)logErrorEventForTopic:(id)a0 reason:(id)a1 error:(id)a2 details:(id)a3;
- (void)logRegularEventForTopic:(id)a0 reason:(id)a1 details:(id)a2;

@end
