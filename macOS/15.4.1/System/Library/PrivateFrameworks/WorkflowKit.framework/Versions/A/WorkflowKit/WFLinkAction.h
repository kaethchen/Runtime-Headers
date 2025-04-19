@class NSDictionary, NSString, NSProgress, NSArray, LNActionSummary, NSNumber, WFActionParameterSummary;

@interface WFLinkAction : WFAppIntentExecutionAction <LNActionExecutorDelegate, WFActionEventObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSArray *_parameterDefinitions;
    NSDictionary *_inputDictionary;
    NSString *_outputMeasurementUnitType;
    BOOL _isBuiltIn;
}

@property (readonly, nonatomic) BOOL isPlatformProvidedUnderstandingAction;
@property (retain, nonatomic) LNActionSummary *actionSummary;
@property (retain, nonatomic) WFActionParameterSummary *parameterSummary;
@property (readonly, nonatomic) NSString *mangledTypeName;
@property (retain, nonatomic) NSProgress *executorProgress;
@property (readonly, nonatomic) BOOL showsWhenRun;
@property (readonly, copy, nonatomic) NSNumber *showsWhenRunIfApplicable;
@property (readonly, nonatomic) BOOL opensWhenRun;
@property (readonly, copy, nonatomic) NSNumber *opensWhenRunIfApplicable;
@property (readonly, nonatomic) BOOL showWhenRunParameterIsHidden;
@property (readonly, nonatomic) BOOL openWhenRunParameterIsHidden;
@property (readonly, nonatomic) NSString *developerSpecifiedTitle;
@property (nonatomic) BOOL usesCompactUnlockService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForLinkActionWithIdentifier:(id)a0 metadata:(id)a1;
+ (id)inputParameterMetadataWithActionMetadata:(id)a0;
+ (id)linkActionClassOverrides;
+ (id)linkProtocolClassOverrides;
+ (id)providedActionWithIdentifier:(id)a0 serializedParameters:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)icon;
- (id)iconName;
- (id)inputDictionary;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)a0;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)generatedResourceNodes;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)initializeParameters;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputMeasurementUnitType;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)supportedAppIdentifiers;
- (void)updateParameterVisibility;
- (void)wasAddedToWorkflow:(id)a0;
- (id)linkActionWithSerializedParameters;
- (id)currentParameterStates;
- (void)deregisterExecutorProgressListeners;
- (void)documentsValueFromRepresentation:(id)a0 valueType:(id)a1 completionHandler:(id /* block */)a2;
- (void)finishRunningWithResult:(id)a0 error:(id)a1;
- (void)forceUpdateParameterVisibility;
- (void)getAlertForLinkResult:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)getDocumentsLinkValueFromParameterMetadata:(id)a0 processedParameters:(id)a1 parameterState:(id)a2 valueType:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 definition:(id)a2 serializedParameters:(id)a3 appIntentDescriptor:(id)a4 fullyQualifiedActionIdentifier:(id)a5;
- (id)linkActionWithParameterStates:(id)a0 usingConnectionPolicy:(BOOL)a1;
- (id)linkActionWithSerializedParametersUsingConnectionPolicy:(BOOL)a0;
- (id)localizedCategoryWithContext:(id)a0;
- (id)localizedDiscontinuedDescriptionWithContext:(id)a0;
- (void)performPresentationAction:(id)a0;
- (void)performPresentationActionWithResult:(id)a0;
- (void)runAsynchronouslyWithLinkAction:(id)a0;
- (void)serializeAppIntentDescriptorIfNecessary;
- (BOOL)shouldBeIncludedInAppsList;
- (void)showResultIfNeeded:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateParameterSummaryIfNeededOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)updateParameterSummaryIfNeededWithLinkAction:(id)a0;

@end
