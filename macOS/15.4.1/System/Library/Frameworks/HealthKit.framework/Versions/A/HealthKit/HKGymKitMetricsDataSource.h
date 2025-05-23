@class NSUUID, HKTaskServerProxyProvider, NSString, HKHealthStore, HKWorkoutConfiguration;
@protocol HKGymKitMetricsDataSourceDelegate;

@interface HKGymKitMetricsDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource> {
    HKHealthStore *_healthStore;
    HKWorkoutConfiguration *_workoutConfiguration;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (weak, nonatomic) id<HKGymKitMetricsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)clientRemote_didReceiveMetrics:(id)a0;
- (void)_startTaskServerIfNeededWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 workoutConfiguration:(id)a1;
- (void)workoutBuilderDidFinish;

@end
