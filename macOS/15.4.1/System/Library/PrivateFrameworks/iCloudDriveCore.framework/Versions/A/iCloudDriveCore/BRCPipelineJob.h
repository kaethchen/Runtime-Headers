@class NSIndexSet, NSMutableDictionary, NSDictionary;

@interface BRCPipelineJob : NSObject {
    NSIndexSet *_jobPlan;
    NSMutableDictionary *_stageToRecoveryPlanMap;
    NSDictionary *_additionalToRequestingStageMap;
    unsigned long long _currentStageID;
    id /* block */ _completionHandler;
    id /* block */ _stageStringifier;
}

@property (readonly, nonatomic) NSIndexSet *jobPlan;
@property (readonly, nonatomic) unsigned long long activeStageID;
@property (readonly, nonatomic) unsigned int qualityOfService;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (id)subclassDescription;
- (void)completeWithError:(id)a0;
- (unsigned long long)advanceJobToInitialStage;
- (unsigned long long)advanceJobToNextStage;
- (void)advanceToRecoveryStage:(unsigned long long)a0;
- (id)descriptionWithContext:(id)a0;
- (void)dumpToContext:(id)a0;
- (id)initWithQualityOfService:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)setJobPlan:(id)a0 additionalToRequestingStageMap:(id)a1;
- (void)setStageStringifier:(id /* block */)a0;

@end
