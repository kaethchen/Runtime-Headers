@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)fetchAppLaunchEventsForTraining;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;
- (void)trainWithXPCActivity:(id)a0;

@end
