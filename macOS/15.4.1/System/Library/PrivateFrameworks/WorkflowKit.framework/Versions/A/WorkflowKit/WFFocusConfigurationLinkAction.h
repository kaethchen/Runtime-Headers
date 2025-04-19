@class DNDModeConfigurationService;

@interface WFFocusConfigurationLinkAction : WFLinkAction

@property (retain, nonatomic) DNDModeConfigurationService *configurationService;

+ (id)genericRuntimeError;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)localizedAppName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)disabledOnPlatforms;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)parameterSummary;
- (BOOL)requiresRemoteExecution;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)clearFocusConfiguration;
- (void)createAndCommitFocusConfigurationToDND;
- (id)currentFocusConfiguration;
- (void)disableFocusConfiguration;
- (id)dndApplicationIdentifier;
- (void)enableFocusConfiguration;
- (BOOL)isRunningInsideFocusConfigurationExtension;
- (id)localizedCategoryWithContext:(id)a0;
- (id)selectedFocusIdentifier;
- (void)setFocusConfigurationEnablementStatus:(BOOL)a0;
- (BOOL)shouldAskForValuesWhileProcessingParameterStates;
- (BOOL)shouldStripSensitiveContentFromParameterSerialization;
- (void)toggleFocusConfiguration;
- (void)updateParameterStatesFromCurrentDNDConfiguration;
- (void)willBeginProcessingParameterStates;

@end
