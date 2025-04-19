@class NSError, NSString, NSArray, WFContentCollection, WFActionParameterSummary, WFEnumerationParameter, LNQueryOutput, INAppDescriptor, LNDynamicOptionsResult;

@interface WorkflowKit.WFEntityUpdatingAction : WFAppIntentExecutionAction <WFVariableProvider, WFAddButtonParameterDelegate, LNActionExecutorDelegate, LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ metadataForParameterIdentifier;
    void /* unknown type, empty encoding */ tableTemplateState;
    void /* unknown type, empty encoding */ preprocessedEntity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addButtonParameter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableParameter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_batchExecutor;
}

@property (class, nonatomic, readonly) NSString *entityParameterName;
@property (class, nonatomic, readonly) NSString *propertyParameterName;

@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) long long entityVisibility;
@property (nonatomic, readonly) long long propertyVisibility;
@property (nonatomic, readonly) NSArray *availableSubjectValues;
@property (nonatomic, readonly) INAppDescriptor *displayableAppDescriptor;

- (void).cxx_destruct;
- (id)serializedParameters;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)parameterStateForKey:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)copyWithSerializedParameters:(id)a0;
- (id)parameterStateUpdateForPlusButtonForParameter:(id)a0;
- (BOOL)showsAddButtonForParameter:(id)a0;
- (id)visibleParametersWithProcessing:(BOOL)a0;
- (id)backingActionIdentifiers;
- (void)configureParameter:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (void)finishRunningWith:(LNQueryOutput *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)getValueForParameterData:(id)a0 ofProcessedParameters:(id)a1 fallingBackToDefaultValue:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 definition:(id)a2 serializedParameters:(id)a3 appIntentDescriptor:(id)a4 fullyQualifiedActionIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 metadataForParameterIdentifier:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (void)loadDynamicResultForEnumeration:(WFEnumerationParameter *)a0 searchTerm:(NSString *)a1 completionHandler:(void (^)(LNDynamicOptionsResult *, NSError *))a2;

@end
