@class NSSet, FCMultiNetworkBehaviorMonitor, NSString, NSDate, NFUnfairLock;
@protocol FCAppActivationMonitorType;

@interface FCTelemetryBasedOfflineNetworkTransitionOperation : FCOperation <FCNetworkBehaviorMonitor>

@property (readonly, nonatomic) id<FCAppActivationMonitorType> appActivationMonitor;
@property (readonly, nonatomic) NSSet *ignoredHosts;
@property (readonly, nonatomic) FCMultiNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, nonatomic) NFUnfairLock *lock;
@property (copy, nonatomic) NSDate *monitoringStartDate;
@property (copy, nonatomic) NSDate *dateOfLastSuccess;
@property (nonatomic) double minimumSecondsSinceSuccessToOffline;
@property (nonatomic) double maximumDurationToCountAsSuccess;
@property (copy, nonatomic) id /* block */ transitionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)logNetworkEvent:(id)a0;
- (id)initWithAppActivationMonitor:(id)a0 ignoredHosts:(id)a1 networkBehaviorMonitor:(id)a2;

@end
