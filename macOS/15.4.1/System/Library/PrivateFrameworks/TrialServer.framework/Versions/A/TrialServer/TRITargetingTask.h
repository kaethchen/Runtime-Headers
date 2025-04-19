@class TRIExperimentTaskSupport, NSString, NSArray, TRIExperimentDeployment, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRITargetingTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    TRIExperimentTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttributing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;
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
+ (id)taskWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
+ (id)taskWithExperiment:(id)a0 taskAttribution:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)dimensions;
- (id)serialize;
- (id)trialSystemTelemetry;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 isServerSideExperiment:(BOOL)a2 systemCovariates:(id)a3 userCovariates:(id)a4 experimentCovariates:(id)a5 experimentEndDate:(id)a6 error:(id *)a7;
- (id)_asPersistedTask;
- (BOOL)_isRolloutV1For1PWithExperimentRecord:(id)a0 context:(id)a1;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1 details:(id)a2;
- (BOOL)getFactorPackSetId:(id *)a0 forExperiment:(id)a1 treatmentId:(id)a2 error:(id *)a3;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 isServerSideExperiment:(BOOL)a2 experimentCovariates:(id)a3 paths:(id)a4 experimentEndDate:(id)a5 error:(id *)a6;
- (id)initWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 systemCovariates:(id)a2 userCovariates:(id)a3 error:(id *)a4;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)systemCovariatesWithPaths:(id)a0;
- (BOOL)validateSystemCovariates:(id)a0 experiment:(id)a1 error:(id *)a2;

@end
