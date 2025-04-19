@class NSString, FCMultiNetworkBehaviorMonitor, NSDate, NFUnfairLock;
@protocol FCNetworkTransitionMonitor, FCNewsAppConfigurationManager, FCAppActivationMonitorType;

@interface FCTelemetryBasedOfflineNetworkTransitionMonitor : NSObject <FCNetworkTransitionMonitor>

@property (readonly, nonatomic) id<FCAppActivationMonitorType> appActivationMonitor;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> configurationManager;
@property (readonly, nonatomic) FCMultiNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, nonatomic) id<FCNetworkTransitionMonitor> onlineTransitionMonitor;
@property (copy, nonatomic) NSDate *dateOfLastTransition;
@property (readonly, nonatomic) NFUnfairLock *dateOfLastTransitionLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
