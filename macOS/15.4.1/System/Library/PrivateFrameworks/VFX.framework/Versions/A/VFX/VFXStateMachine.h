@class VFXStateManager, NSMutableArray;

@interface VFXStateMachine : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VFXStateManager *manager;
@property (retain, nonatomic) NSMutableArray *transitions;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addTransition:(id)a0;
- (id)initWithStateManager:(id)a0;
- (void)removeTransitionFrom:(id)a0 to:(id)a1;
- (void)switchToState:(id)a0;
- (id)transitionsFrom:(id)a0;

@end
