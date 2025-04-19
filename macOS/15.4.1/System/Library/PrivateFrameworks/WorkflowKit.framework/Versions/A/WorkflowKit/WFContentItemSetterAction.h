@class WFContentProperty, NSArray, NSString;

@interface WFContentItemSetterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentProperty *selectedProperty;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedNameWithContext:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (void)initializeParameters;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (BOOL)inputsMultipleItems;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (id)possibleStatesForEnumeration:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)appContentDestinationForSystemAppBundleIdentifier:(id)a0;
- (id)changeTransactionWithInput:(id)a0;
- (id)displayStringForTransactionModeState:(id)a0;
- (id)parameterKeyForProperty:(id)a0;
- (void)presentAlertWithUserInterface:(id)a0 input:(id)a1 completion:(id /* block */)a2;
- (id)requiredResourceForProperty:(id)a0;
- (id)setAdditionalPropertyIfNecessaryForValue:(id)a0;
- (void)setPromptForSelectedParameter;
- (void)userValueForSelectedPropertyWithCompletion:(id /* block */)a0;

@end
