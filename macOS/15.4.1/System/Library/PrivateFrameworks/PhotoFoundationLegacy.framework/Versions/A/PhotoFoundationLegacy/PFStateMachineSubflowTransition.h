@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition

@property (readonly) NSString *subflowName;

- (id)description;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (id)destination:(id)a0;
- (id)dot:(id)a0 prefix:(id)a1 graph:(id)a2;
- (id)initWithEventName:(id)a0 subflow:(id)a1 to:(id)a2;
- (id)returnDestination:(id)a0;

@end
