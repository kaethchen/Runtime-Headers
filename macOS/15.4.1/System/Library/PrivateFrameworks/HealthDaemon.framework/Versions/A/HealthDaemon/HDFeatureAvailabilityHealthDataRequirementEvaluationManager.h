@class HDProfile, NSMapTable;

@interface HDFeatureAvailabilityHealthDataRequirementEvaluationManager : NSObject <HKFeatureAvailabilityHealthDataRequirementEvaluationProviding> {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_observedRequirementsByObserver;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)evaluationOfRequirements:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0 forRequirements:(id)a1 queue:(id)a2;
- (BOOL)registerObserver:(id)a0 forRequirements:(id)a1 queue:(id)a2 error:(id *)a3;

@end
