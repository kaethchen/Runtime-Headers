@class TRITaskOptions, NSString, NSDictionary, NSArray, NSDate, TRIMetric, TRITaskCapabilityModifier;
@protocol TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIActivateTreatmentTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {
    TRIMetric *_treatmentMetric;
    TRITaskCapabilityModifier *_capabilityModifier;
    TRITaskOptions *_taskOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL testingIgnoreDependencies;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) NSDictionary *counterfactualTreatments;
@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
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
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 factorPackSetId:(id)a2 counterfactualTreatments:(id)a3 taskAttributing:(id)a4 requiresTreatmentInstallation:(BOOL)a5 capabilityModifier:(id)a6 startTime:(id)a7 taskOptions:(id)a8;
+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3 capabilityModifier:(id)a4 startTime:(id)a5 taskOptions:(id)a6;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (id)_asPersistedTask;
- (id)_nextTasksForRunStatus:(int)a0;
- (BOOL)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)a0 context:(id)a1;

@end
