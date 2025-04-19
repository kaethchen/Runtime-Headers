@class NSError, NSString, SCRStateMachine, SCRTask, SCRApprovalCoordinator, SCRSchedulingConfiguration;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable> {
    id _context;
    NSError *_error;
}

@property (readonly, nonatomic) SCRTask *task;
@property (readonly, nonatomic) SCRStateMachine *stateMachine;
@property (readonly, nonatomic) SCRApprovalCoordinator *approvalCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) SCRSchedulingConfiguration *schedulingConfiguration;

+ (id)descriptionForState:(unsigned long long)a0;
+ (id)validStateTransitions;

- (void).cxx_destruct;
- (void)perform;
- (void)_start;
- (void)_complete;
- (void)_performTask;
- (void)_completeTask;
- (void)_requestApproval;
- (void)_setupSharedContext;
- (void)_teardownSharedContext;
- (void)handleStateTransition:(id)a0;
- (id)initWithTask:(id)a0 approvalCoordinator:(id)a1;

@end
