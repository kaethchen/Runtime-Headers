@class NSSet, NSMutableDictionary;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject

@property (retain, nonatomic) NSMutableDictionary *responseActionToMetadata;
@property double throttlePeriod;
@property long long minimumThrottleCount;
@property double minimumThrottleTime;
@property double maximumThrottleTime;
@property double minimumRetryTime;
@property (copy) NSSet *actionsToThrottle;

+ (double)currentTime;
+ (void)sleep:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1;
- (void)gateResponseAction:(long long)a0 isRetry:(BOOL)a1 currentTime:(double)a2;
- (double)throttleTimeForCount:(long long)a0 isRetry:(BOOL)a1;
- (unsigned long long)totalThrottleCountForAction:(long long)a0;

@end
