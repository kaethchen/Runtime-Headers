@class WFContentPredicate, NSArray, NSString, WFActionAuxiliaryButton, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (nonatomic, readonly) long long tableTemplateRowCount;
@property (nonatomic) long long tableTemplateCompoundType;
@property (nonatomic, readonly) WFContentPredicate *contentPredicate;
@property (nonatomic, readonly) WFActionAuxiliaryButton *swift_auxiliaryButton;
@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly, nonatomic) struct _WFContentSlice { unsigned long long x0; unsigned long long x1; } slice;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) NSArray *disallowedVariableTypesForTableTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedNameWithContext:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)initializeParameters;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (id)parameterStateForKey:(id)a0;
- (id)parameterSummary;
- (id)possibleStatesForEnumeration:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)auxiliaryButton;
- (unsigned long long)parameterCollapsingBehavior;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (BOOL)hasMultipleFilterConditions;
- (id)localizedDescriptionInputWithContext:(id)a0;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
- (id)localizedPluralDescriptionWithContext:(id)a0;
- (id)rowForContentPropertyName:(id)a0;
- (void)runFilterWithInput:(id)a0 query:(id)a1;
- (id)sortablePropertyDisplayNames;
- (id)sortablePropertyNames;
- (id)swift_rowForContentPropertyName:(id)a0;
- (void)updateCompoundParameterVisibility;

@end
