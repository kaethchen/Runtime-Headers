@class HMHome, NSArray, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)homeName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)localizedAttributionWithContext:(id)a0;
- (id)parameterStateForKey:(id)a0 fallingBackToDefaultValue:(BOOL)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)a0;
- (id)localizedSummaryText;
- (id)parameterSummaryString;
- (void)performHomeAccessoryAction;

@end
