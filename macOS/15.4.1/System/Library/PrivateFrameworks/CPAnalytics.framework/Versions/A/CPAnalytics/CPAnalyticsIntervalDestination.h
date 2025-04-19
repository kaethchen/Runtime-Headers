@class NSSet;

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination

@property (retain, nonatomic) NSSet *trackedIntervalNames;
@property (retain, nonatomic) NSSet *ignoredIntervalNames;

- (void).cxx_destruct;
- (void)_handleEvent:(id)a0 withUnknownIntervalName:(id)a1;
- (id)_intervalNamesForKey:(id)a0 inConfiguration:(id)a1;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void)sendDashboardIntervalEventForEvent:(id)a0;
- (void)updateWithConfig:(id)a0;

@end
