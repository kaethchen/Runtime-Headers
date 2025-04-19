@class HMDAccessoryDiagnosticsMetric, HMFTimer, NSArray, HMDAccessorySessionMetric, NSString, NSDictionary, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessoryMetric : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDAccessory *accessory;
@property (retain, nonatomic) HMFTimer *accessoryMetricTimer;
@property (readonly, nonatomic) double timerInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSArray *deltaCounters;
@property (retain, nonatomic) NSDictionary *previousDiagnosticMetrics;
@property (readonly, nonatomic) HMDAccessorySessionMetric *sessionMetric;
@property (readonly, nonatomic) HMDAccessoryDiagnosticsMetric *diagnosticsMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void)_initDiagnosticCounters;
- (void)submitMetricAndStop;

@end
