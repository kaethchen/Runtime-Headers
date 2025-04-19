@class NSSet;

@interface WFInputAction : WFAction

@property (retain, nonatomic) NSSet *inputSurfaces;

+ (id)inputActionForWorkflow:(id)a0;
+ (id)serializedParametersForWorkflow:(id)a0;
+ (id)serializedParametersFromActionSerializedParameters:(id)a0 itemClass:(Class)a1;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)minimumSupportedClientVersion;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)noInputBehavior;
- (id)actionSerializedParametersForSelectionOfItemClass:(Class)a0;
- (void)removedFromWorkflow;
- (id)selectedAskForType;
- (id)selectedBehavior;
- (id)selectedInputTypes;
- (void)updateWorkflowState;

@end
