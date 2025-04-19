@class NSString, AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AEAssessmentModeRestrictionEnforcerProxy : NSObject <AEAssessmentModeRestrictionEnforcer, AEInvalidatable> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    AEXPCProxy *_proxy;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0 queue:(id)a1;
- (void)shouldBeginRestrictingForAssessmentModeWithCompletion:(id /* block */)a0;
- (void)shouldEndRestrictingForAssessmentModeWithCompletion:(id /* block */)a0;

@end
