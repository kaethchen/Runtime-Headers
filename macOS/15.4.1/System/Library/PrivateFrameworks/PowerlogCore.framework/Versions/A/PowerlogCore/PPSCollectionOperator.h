@class PLXPCResponderOperatorComposition, NSString, PLXPCListenerOperatorComposition, PLCFNotificationOperatorComposition;

@interface PPSCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;
@property (retain) PLCFNotificationOperatorComposition *startMonitor;
@property (retain) PLCFNotificationOperatorComposition *stopMonitor;
@property BOOL monitor;
@property (retain) NSString *monitoredSubsystem;
@property (retain) NSString *monitoredCategory;

- (id)init;
- (void).cxx_destruct;
- (void)startCollection;
- (void)initOperatorDependancies;
- (void)monitorMetricsForSubsystem:(id)a0 category:(id)a1 payload:(id)a2;

@end
