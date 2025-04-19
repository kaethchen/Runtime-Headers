@class NSString;

@interface ABDefaultStopWatchTimeIntervalProvider : NSObject <ABStopWatchTimeIntervalProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)timeIntervalSinceReferenceDate;
- (double)distantPastTimeInterval;

@end
