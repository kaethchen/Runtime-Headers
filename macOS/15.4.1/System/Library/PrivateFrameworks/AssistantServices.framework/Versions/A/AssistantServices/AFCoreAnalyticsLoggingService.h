@class NSObject;
@protocol OS_dispatch_queue;

@interface AFCoreAnalyticsLoggingService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLoggingService;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)a0;

@end
