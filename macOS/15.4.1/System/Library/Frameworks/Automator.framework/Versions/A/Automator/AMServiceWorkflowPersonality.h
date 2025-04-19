@class NSDictionary, NSArray;

@interface AMServiceWorkflowPersonality : AMInputOutputWorkflowPersonality

@property (readonly, copy, nonatomic) NSDictionary *_servicesPlistStringsByPresentationMode;
@property (readonly, copy, nonatomic) NSArray *allPresentationModes;

- (id)imageRepresentation;
- (id)_infoPlistForServiceWorkflowWithMetadata:(id)a0;
- (void)_openExtensionsPreferencePaneWithExtensionPointIdentifier:(id)a0;
- (void)_openKeyboardServicesPreferencePane;
- (void)_openPreferencePaneAtURL:(id)a0 withPlistParameters:(id)a1;
- (void)_revealPreferencesForPresentationMode:(unsigned long long)a0;
- (void)_revealPreferencesForSinglePresentationMode:(unsigned long long)a0;
- (BOOL)allowsRevealInAutomatorOnInstallation;
- (BOOL)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)infoPlistForWorkflowMetaData:(id)a0 error:(id *)a1;
- (id)infoStringForInitialInstallationWithMetaData:(id)a0;
- (BOOL)installationCompleteForWorkflowReturningShowCompleted:(id)a0 atURL:(id)a1;
- (id)personalitySettingsDictionary;
- (id)pluginHeaderViewController;
- (BOOL)updateFileWrapper:(id)a0 forWorkflowMetaData:(id)a1 documentType:(id)a2 error:(id *)a3;

@end
