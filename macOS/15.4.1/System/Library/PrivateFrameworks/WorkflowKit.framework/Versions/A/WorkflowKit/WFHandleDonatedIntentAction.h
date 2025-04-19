@class NSString, INIntentDescriptor, INIntent;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {
    INIntentDescriptor *_intentDescriptor;
}

@property (readonly, nonatomic) BOOL forceExecutionOnPhone;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (retain, nonatomic) INIntent *intent;

+ (id)intentActionWithShortcut:(id)a0 forceExecutionOnPhone:(BOOL)a1 groupIdentifier:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)appIdentifier;
- (id)initWithIntent:(id)a0;
- (long long)intentCategory;
- (id)intentDescription;
- (id)serializedParameters;
- (id)metricsIdentifier;
- (id)slots;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (void)initializeParameters;
- (id)intentDescriptor;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)parameterSummary;
- (BOOL)requiresRemoteExecution;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)continueInAppWithCompletionHandler:(id /* block */)a0;
- (id)executorWithIntent:(id)a0 groupIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)initWithIntent:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)initWithInteraction:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (void)setIntentDescriptor:(id)a0;

@end
