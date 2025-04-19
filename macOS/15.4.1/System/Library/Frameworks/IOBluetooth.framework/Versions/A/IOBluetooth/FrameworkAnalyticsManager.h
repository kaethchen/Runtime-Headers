@interface FrameworkAnalyticsManager : NSObject

@property BOOL coreAnalyticsAvailable;

+ (id)sharedManager;

- (id)init;
- (BOOL)isCoreAnalyticsAvailable;
- (void)submitToCoreAnalytics:(id)a0;

@end
