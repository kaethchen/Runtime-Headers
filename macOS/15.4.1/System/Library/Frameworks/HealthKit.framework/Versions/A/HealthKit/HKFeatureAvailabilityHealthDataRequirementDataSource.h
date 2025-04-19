@class NSMutableArray;
@protocol HKFeatureAvailabilityHealthDataRequirementEvaluationProviding;

@interface HKFeatureAvailabilityHealthDataRequirementDataSource : NSObject {
    id<HKFeatureAvailabilityHealthDataRequirementEvaluationProviding> _evaluationProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_prewarmedSatisfactionByRequirementStack;
}

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)initWithEvaluationProvider:(id)a0;
- (id)isRequirementSatisfied:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0 forRequirementSet:(id)a1 queue:(id)a2;
- (id)withPrewarmedEvaluationOfRequirementSet:(id)a0 error:(id *)a1 handler:(id /* block */)a2;

@end
