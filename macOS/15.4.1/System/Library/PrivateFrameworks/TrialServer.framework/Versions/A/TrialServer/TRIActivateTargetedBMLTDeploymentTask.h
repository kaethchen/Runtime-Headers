@class TRIBMLTTaskSupport, NSString, NSArray, NSDate, TRIBMLTDeployment;
@protocol TRITaskAttributing, TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIActivateTargetedBMLTDeploymentTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttribution;
    TRIBMLTTaskSupport *_support;
    NSString *_bmltBatchNotificationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIBMLTDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;
+ (id)taskWithBMLTDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2;
+ (id)taskWithBMLTDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2 bmltBatchNotificationIdentifier:(id)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)dimensions;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)trialSystemTelemetry;
- (void)_activationTelemetryWithSuccess:(BOOL)a0 bmltRecord:(id)a1 serverContext:(id)a2;
- (id)_asPersistedTask;
- (BOOL)_hasValidNCVForBMLT:(id)a0 namespaceDescriptorProvider:(id)a1;
- (id)initWithTaskDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2 bmltBatchNotificationIdentifier:(id)a3;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;

@end
