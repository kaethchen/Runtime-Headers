@class NSURL;

@interface AMActionInstallerController : AMPluginInstallerController

@property (retain) NSURL *actionURL;

- (void).cxx_destruct;
- (id)_iconImage;
- (id)_pluginTypeName;
- (id)_completedInstallationInfoString;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_installationInfoString;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (id)_pluginLibrarySubPath;
- (id)_pluginURL;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)initWithActionURL:(id)a0;
- (BOOL)isConversionAction;

@end
