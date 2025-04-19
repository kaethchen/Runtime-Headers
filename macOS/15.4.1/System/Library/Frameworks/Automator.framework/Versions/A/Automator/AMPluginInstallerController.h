@class NSTextField, NSView, NSProgressIndicator, NSString, NSViewAnimation, NSArray, NSTimer, NSURL, NSImage, NSViewController, NSImageView, NSButton;

@interface AMPluginInstallerController : NSWindowController <NSTouchBarDelegate, NSAnimationDelegate>

@property (weak) NSButton *secondButton;
@property (weak) NSButton *firstButton;
@property (weak) NSButton *thirdButton;
@property (weak) NSImageView *iconView;
@property (weak) NSTextField *informativeTextField;
@property (weak) NSTextField *messageTextField;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSView *accessoryView;
@property (copy) NSString *messageText;
@property (copy) NSString *informativeText;
@property (retain) NSImage *icon;
@property (retain) NSViewController *accessoryViewController;
@property (retain) NSViewAnimation *animation;
@property (retain) NSString *pluginName;
@property (retain) NSArray *queuedAnimations;
@property (retain) NSTimer *installTimer;
@property (retain) NSURL *installedURL;
@property long long mode;
@property (readonly, nonatomic) NSURL *_pluginURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlForExistingPluginNamed:(id)a0 atLibrarySubPath:(id)a1;

- (long long)run;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_iconImage;
- (void)animationDidEnd:(id)a0;
- (id)initWithWindowNibName:(id)a0;
- (id)makeTouchBar;
- (void)windowDidLoad;
- (void)buttonClicked:(id)a0;
- (id)_pluginTypeName;
- (id)_accessoryViewNibName;
- (id)_animationWithAnimations:(id)a0;
- (id)_completedInstallationInfoString;
- (void)_configureCompletedModeWithError:(id)a0;
- (void)_configureInstallationMode;
- (void)_configureReplaceMode;
- (void)_configureRequestMode;
- (void)_didPresentPreInstallErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_installMessageDictionary;
- (void)_installPlugin;
- (void)_installTimerFired:(id)a0;
- (id)_installationInfoString;
- (void)_layoutWindowWithProgressIndicator:(BOOL)a0 infoField:(BOOL)a1 accessoryView:(BOOL)a2;
- (id)_localizedNameForURL:(id)a0;
- (BOOL)_pluginAlreadyInstalled;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (id)_pluginLibrarySubPath;
- (void)_queueAnimations:(id)a0;
- (id)_replaceMessageDictionary;
- (BOOL)_shouldShowThirdButton;
- (id)_targetPluginLocationURLCreatingIfNecessaryError:(id *)a0;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_userVisibleInstallErrorForPluginInstallationError:(id)a0;
- (id)_writeableInstalledPluginLocationURL;

@end
