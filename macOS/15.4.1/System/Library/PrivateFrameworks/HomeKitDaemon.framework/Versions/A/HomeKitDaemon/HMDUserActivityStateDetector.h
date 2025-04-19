@class HMDUserActivityReportValue;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityStateDetectorStateChangeDelegate;

@interface HMDUserActivityStateDetector : HMFObject

@property (class, readonly, nonatomic) unsigned long long contributorType;

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (retain, nonatomic) HMDUserActivityReportValue *latestReport;
@property (weak, nonatomic) id<HMDUserActivityStateDetectorStateChangeDelegate> stateChangeDelegate;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)notifyDetectorStateChangedWithReason:(unsigned long long)a0;

@end
