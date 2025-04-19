@interface HMDHomeAwayStateDetector : HMDUserActivityStateDetector

@property (nonatomic) unsigned long long state;

+ (unsigned long long)contributorType;

- (void)_registerForNotifications;
- (id)initWithDataSource:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)determineStateWithReason:(unsigned long long)a0;
- (void)handleHomeLocationChanged:(id)a0;
- (void)handleLocationAuthorizationChanged:(id)a0;
- (void)updateLatestReportWithReason:(unsigned long long)a0;
- (void)updateState:(unsigned long long)a0 withReason:(unsigned long long)a1;

@end
