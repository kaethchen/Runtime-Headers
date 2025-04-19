@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardASREvent;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventPointSelfTriggerSuppressionDetected;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (unsigned long long)convertASREvent:(id)a0;
- (unsigned long long)convertMode:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)logEventForwardASREvent:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;

@end
