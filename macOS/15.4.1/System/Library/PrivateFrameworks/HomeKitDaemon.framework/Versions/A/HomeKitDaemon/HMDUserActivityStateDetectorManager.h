@class NSArray;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityReportCoordinator;

@interface HMDUserActivityStateDetectorManager : HMFObject

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) id<HMDUserActivityReportCoordinator> userActivityReportCoordinator;
@property (readonly, nonatomic) NSArray *detectors;

+ (BOOL)shouldRunManagerForHome:(id)a0;

- (void).cxx_destruct;
- (void)configure;
- (void)registerForNotifications;
- (id)initWithHome:(id)a0;
- (void)handlePrimaryResidentDidChangeNotification:(id)a0;
- (id)initWithDataSource:(id)a0 userActivityReportCoordinator:(id)a1 detectors:(id)a2;

@end
