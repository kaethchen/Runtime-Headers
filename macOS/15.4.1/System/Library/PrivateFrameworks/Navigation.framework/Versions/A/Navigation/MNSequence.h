@class geo_isolater, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface MNSequence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_steps;
    id /* block */ _finalizeHandler;
    geo_isolater *_stepsIsolater;
    BOOL _isStarted;
    unsigned long long _currentStepIndex;
    NSObject<OS_os_activity> *_activity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _activityScopeState;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (id)initWithQueue:(id)a0;
- (void)addStep:(id /* block */)a0;
- (void)_endSequence;
- (void)_finalizeSequenceWithPreviousStepResult:(id)a0;
- (void)_runNextStepWithPreviousStepResult:(id)a0;
- (void)setSequenceFinalizeHandler:(id /* block */)a0;

@end
