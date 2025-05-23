@class RBProcessState, RBSProcessIdentity;

@interface RBProcessStateChange : NSObject

@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBProcessState *originalState;
@property (readonly, nonatomic) RBProcessState *updatedState;

- (void).cxx_destruct;
- (id)changeByApplyingChange:(id)a0;
- (id)initWithIdentity:(id)a0 originalState:(id)a1 updatedState:(id)a2;

@end
