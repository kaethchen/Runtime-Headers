@class AMWorkflowPersonality, AMWorkflow, NSURL, AMWorkflowMetaData;

@interface AMWorkflowPersonalityInstallerController : AMPluginInstallerController

@property (readonly, nonatomic) AMWorkflowPersonality *_workflowPersonality;
@property (readonly, nonatomic) AMWorkflowMetaData *_workflowMetaData;
@property (retain) AMWorkflow *pluginWorkflow;
@property (retain) NSURL *url;
@property BOOL _shouldRecoverByOpeningInAutomator;

- (void).cxx_destruct;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)_iconImage;
- (id)_pluginTypeName;
- (id)_accessoryViewNibName;
- (id)_completedInstallationInfoString;
- (void)_configureCompletedModeWithError:(id)a0;
- (void)_didPresentPreInstallErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_installationInfoString;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (id)_pluginLibrarySubPath;
- (id)_pluginURL;
- (BOOL)_shouldShowThirdButton;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_userVisibleInstallErrorForPluginInstallationError:(id)a0;
- (id)initWithPluginWorkflow:(id)a0 url:(id)a1;

@end
