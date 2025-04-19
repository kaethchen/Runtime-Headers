@interface TPSAnalyticsSessionController : NSObject

+ (void)endSession;
+ (void)_resetSession;
+ (void)incrementCollectionsViewedCount;
+ (void)_logSessionData;
+ (void)_incrementSessionViewNumberForKey:(id)a0;
+ (void)incrementTipsViewedCount;
+ (void)trackSession;

@end
