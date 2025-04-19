@class NSArray, INAppDescriptor, ICAction;

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) BOOL requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)description;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)appDescriptor;
- (id)app;
- (BOOL)isDiscontinued;
- (id)requiredResources;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)skipsProcessingHiddenParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)inputContentClasses;
- (id)inputParameterKey;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (BOOL)inputsMultipleItems;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (BOOL)visibleForUse:(long long)a0;
- (id)appDescriptorFromICApp:(id)a0;
- (BOOL)appResourceRequiresAppInstall;
- (BOOL)callbackIsCurrentlyDisabled;
- (id)descriptionDefinition;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)a0;
- (id)initWithInterchangeAction:(id)a0 identifier:(id)a1 definition:(id)a2 serializedParameters:(id)a3;
- (id)localizedCategoryWithContext:(id)a0;
- (BOOL)mappedValueIsTrue:(id)a0 forContentMapping:(id)a1;
- (BOOL)neverSuggested;
- (void)setAppDescriptor:(id)a0;
- (BOOL)shouldSuppressCallback;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)userInterfaceTypes;

@end
