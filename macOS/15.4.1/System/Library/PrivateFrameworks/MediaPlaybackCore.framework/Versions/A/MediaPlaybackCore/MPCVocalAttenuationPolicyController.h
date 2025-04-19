@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPCVocalAttenuationPolicyControllerDelegate;

@interface MPCVocalAttenuationPolicyController : NSObject <MPCVocalAttenuationPolicyDelegate>

@property (copy, nonatomic) NSMutableArray *policies;
@property (copy, nonatomic) NSMutableArray *blockingPolicies;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, weak, nonatomic) id<MPCVocalAttenuationPolicyControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 parameters:(id)a1;
- (void)_notifyDelegate;
- (void)_setupPoliciesWithParameters:(id)a0;
- (id)blockingEvaluation;
- (void)resetPolicies;
- (void)vocalAttenuationPolicy:(id)a0 didChangeEvaluation:(id)a1;

@end
