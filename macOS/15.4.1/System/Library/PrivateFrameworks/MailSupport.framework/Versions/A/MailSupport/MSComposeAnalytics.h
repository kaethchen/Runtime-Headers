@protocol EFScheduler;

@interface MSComposeAnalytics : NSObject

@property (class, readonly, nonatomic) id<EFScheduler> scheduler;

+ (void)sendAnalyticsSignal:(long long)a0 threadIdentifier:(id)a1 isDraft:(BOOL)a2;

@end
