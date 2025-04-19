@class PLXPCListenerOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition;

@interface PLHomeKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *homeKitEventsListener;
@property (retain) PLXPCListenerOperatorComposition *homeConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *cameraConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *homeKitRegistrationListener;
@property unsigned long long numBTPushes;
@property unsigned long long numConnections;
@property unsigned long long numPrevBTPushes;
@property unsigned long long numPrevConnections;
@property unsigned long long numBTConnections;
@property unsigned long long numIPConnections;
@property unsigned long long numBonjour;
@property unsigned long long numIPEvents;
@property unsigned long long numIDSPushes;
@property unsigned long long numCloudPushes;
@property unsigned long long numBTWakeAdvt;
@property unsigned long long numBTWakes;
@property double lastapwake;
@property BOOL enablelog;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numaggregatelines;
@property unsigned long long numBTlines;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionIDSPushMessageTypes;
+ (id)entryEventForwardDefinitionCameraConfiguration;
+ (id)entryEventForwardDefinitionHomeConfiguration;
+ (id)entryEventPointDefinitionHomeKitAdvt;
+ (id)entryEventPointDefinitionHomeKitEvents;
+ (id)entryEventPointDefinitionHomeKitRegistration;
+ (id)entryEventPointDefinitionHomeKitSummary;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (long long)eventTypeStringToEnum:(id)a0;
- (BOOL)isAllowedMessageType:(id)a0;
- (void)logAggregateIDSPushMessageTypes:(id)a0;
- (void)logEventForwardCameraConfiguration:(id)a0;
- (void)logEventForwardHomeConfiguration:(id)a0;
- (void)logEventPointHomeKitEvents:(id)a0;
- (void)logEventPointHomeKitRegistration:(id)a0;
- (long long)registrationTypeStringToEnum:(id)a0;
- (void)writeAggregateCounters:(id)a0;

@end
