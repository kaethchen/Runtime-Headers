@class HKSPStateMachineState;

@interface HKSPStateMachineContext : NSObject

@property (nonatomic) BOOL isInitializing;
@property (retain, nonatomic) HKSPStateMachineState *nextState;
@property (retain, nonatomic) HKSPStateMachineState *previousState;
@property (readonly, nonatomic) BOOL hasStateTransition;
@property (readonly, nonatomic) BOOL hasStateTransitionOrInitializing;
@property (readonly, nonatomic) BOOL hasStateTransitionAndNotInitializing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)contextWithNextState:(id)a0 previousState:(id)a1 isInitializing:(BOOL)a2;
- (id)initWithNextState:(id)a0 previousState:(id)a1 isInitializing:(BOOL)a2;

@end
