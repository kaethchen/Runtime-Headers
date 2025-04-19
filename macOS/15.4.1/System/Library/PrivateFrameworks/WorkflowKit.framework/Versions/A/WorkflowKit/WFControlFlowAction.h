@class WFControlFlowAttributionTracker;

@interface WFControlFlowAction : WFAction

@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) WFControlFlowAttributionTracker *controlFlowTracker;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)iconName;
- (id)serializedParameters;
- (BOOL)hasChildren;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputPassthrough;
- (id)outputContentClasses;
- (id)createAccompanyingActionWithMode:(long long)a0;
- (BOOL)displaysParameterSummary;
- (id)groupedIntermediaryActions;
- (void)generateGroupingIdentifierIfNecessary;
- (id)groupedCloseAction;
- (id)groupedOpenAction;
- (BOOL)inputTypePassthrough;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (BOOL)snappingPassthrough;

@end
