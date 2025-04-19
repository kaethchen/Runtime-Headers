@class NSString, SCRSchedulingConfiguration;

@interface SCRActivity : NSObject <NSCopying, BSDescriptionProviding, SCRSchedulable>

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ activationBlock;
@property (copy) SCRSchedulingConfiguration *schedulingConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithName:(id)a0 earliestStartDate:(id)a1 schedulingWindow:(double)a2 activationBlock:(id /* block */)a3;

@end
