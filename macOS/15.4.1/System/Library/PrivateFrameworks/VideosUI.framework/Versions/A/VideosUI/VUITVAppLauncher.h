@class ATAParsedOpenURL, VUITVApplicationController, NSObject, NSDictionary, VUIStateMachine, VUIToolbar, VUIHintsWindowController, NSString, NSViewController, NSArray, _TtC8VideosUI20VUIJetPackController, NSWindow, VUIWindowController;
@protocol VUIRootSplitViewController, VUITVAppRootViewController, VUITabBarProtocol;

@interface VUITVAppLauncher : NSObject <VUITVApplicationControllerDelegate, VUIToolbarDelegate, VUITabBarControllerUpdatingDelegate, NSTextFieldDelegate, VUIHintsWindowControllerDelegate, VUITVAppLaunchProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isStillProcessingStartupItemsLock;
    BOOL _isStillProcessingStartupItems;
}

@property (retain, nonatomic) VUIToolbar *toolbar;
@property (retain, nonatomic) VUIHintsWindowController *hintsWindowController;
@property (retain, nonatomic) VUIWindowController *appWindowController;
@property (copy, nonatomic) NSDictionary *launchOptions;
@property (retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL;
@property (retain, nonatomic) _TtC8VideosUI20VUIJetPackController *jetPackController;
@property (retain, nonatomic) NSWindow *appWindow;
@property (retain, nonatomic) NSArray *tabBarItems;
@property (retain, nonatomic) VUIStateMachine *stateMachine;
@property (nonatomic) BOOL overrideOrientation;
@property (nonatomic) BOOL appWasForegrounded;
@property (nonatomic) BOOL appWasRunningWithoutJavascript;
@property (nonatomic) BOOL startupPrewarmSubscriptionDataCompleted;
@property (nonatomic) BOOL startupOfferProcessingCompleted;
@property (retain, nonatomic) VUITVApplicationController *appController;
@property (copy, nonatomic) id /* block */ switchTabHandler;
@property (copy, nonatomic) id /* block */ deeplinkCompletionHandler;
@property (nonatomic) BOOL isTerminating;
@property (retain, nonatomic) NSString *sportsTabIdentifier;
@property (retain, nonatomic) NSObject<VUITabBarProtocol, VUITVAppRootViewController> *tabBarController;
@property (retain, nonatomic) NSViewController<VUIRootSplitViewController, VUITVAppRootViewController> *splitViewController;
@property (nonatomic) BOOL isStillProcessingStartupItems;
@property (readonly, nonatomic) BOOL isAppRunning;
@property (readonly, nonatomic) BOOL isAppRunningWithoutJS;
@property (nonatomic) BOOL isDeeplinkLaunched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isRemoteServerLikelyReachable;
+ (BOOL)_isDeeplinkTVButton:(id)a0;
+ (BOOL)_isRunningState:(id)a0;
+ (BOOL)_isRunningWithoutJSState:(id)a0;
+ (id)_libraryOnlyTabBarItem;
+ (BOOL)isDeeplinkTVButton:(id)a0;
+ (BOOL)isRemoteServerConnected;
+ (BOOL)isSidebarEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_windowDidResize:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)selectTabBarItem:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)cleanUp;
- (id)rootViewController;
- (void)_accountsChanged:(id)a0;
- (void)preWarm:(id)a0;
- (void)_registerStateMachineHandlers;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)showLoadingView;
- (void)setMainWindow:(id)a0;
- (void)_stopApplicationController;
- (void)switchToHomeTab;
- (void)appController:(id)a0 didFailWithError:(id)a1;
- (void)hideLoadingView;
- (void)hintsWindowControllerDidDismiss;
- (void)_applicationWillTerminateNotification:(id)a0;
- (void)_configureStateMachine;
- (id)_dialogMetricsForGDPR;
- (void)_didEnterKeyPress;
- (void)_didSearchTextFieldCommandMoveDown;
- (void)_didSearchTextFieldCommandMoveUp;
- (void)_fetchApplicationControllerBootURL;
- (void)_fetchFullFeatureFlag:(id)a0;
- (id)_findScrollViewInView:(id)a0 tabViewLabel:(id)a1 protocolName:(char *)a2;
- (id)_findToolbarSearchFieldInteractingViewController:(id)a0;
- (void)_finishAppLoading;
- (void)_finishApplicationControllerWithLaunchContext:(id)a0 completion:(id /* block */)a1;
- (void)_finishJavascriptSetupWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1;
- (void)_handleAMSEngagementSheetPresentation:(BOOL)a0;
- (void)_handleDeferredParsedOpenURLIfNeeded;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)a0;
- (void)_handleParsedOpenURL:(id)a0;
- (void)_handleRemoteNetworkReachabilityDidChangeNotification:(id)a0;
- (void)_initializeBookmarkService;
- (void)_initializePlayer;
- (void)_isLibraryOnlyCountryChanged:(id)a0;
- (BOOL)_isTabBarImageASymbolImage:(id)a0;
- (void)_javascriptSetTabBarItems:(id)a0;
- (void)_notifyTextDidChange:(id)a0;
- (void)_popToSearchTabRootViewController;
- (void)_presentSyndicationOnboardingIfNeeded;
- (void)_resetDeferredParsedOpenURL;
- (void)_resetJavascriptState;
- (BOOL)_resizeTest:(id)a0;
- (void)_retrieveSportsTabIdentifierFromTabBarItems:(id)a0;
- (BOOL)_scrollTest:(id)a0 tabBarItem:(id)a1 label:(id)a2 protocolName:(char *)a3;
- (id)_searchTabViewController;
- (BOOL)_shouldRecordExitEvent;
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(BOOL)a0;
- (void)_startApplicationControllerWithBootURL:(id)a0 completion:(id /* block */)a1;
- (void)_startJavascriptSetup;
- (void)_syncBookmarkServiceIfRequired;
- (id)_tabBarImageForResource:(id)a0 accessibilityDescription:(id)a1;
- (void)_updateTabControllerWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1;
- (double)appContainerWidth;
- (void)appController:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)appController:(id)a0 didStopWithOptions:(id)a1;
- (void)appController:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (BOOL)applicationDidFinishLaunchingWithOptions:(id)a0;
- (BOOL)applicationWillFinishLaunchingWithOptions:(id)a0;
- (void)askSearchFieldIgnoreBeingKeyViewNextTime;
- (void)configureAppWindow;
- (void)didAcceptGDPRWelcome;
- (void)didFailToLaunch:(id)a0;
- (void)didShowGDPRWelcome;
- (BOOL)openURL:(id)a0 options:(id)a1;
- (BOOL)performRecapScrolling:(id)a0 inOptions:(id)a1;
- (void)prewarmOnMainWithPrefetchSelectedPage:(BOOL)a0;
- (void)prewarmPostAppDidFinishLaunching;
- (void)processStartupItems;
- (void)refreshTabBarItems;
- (void)registerForApplicationNotifications;
- (BOOL)resizeLibraryTest:(id)a0;
- (BOOL)resizeProductPageTest:(id)a0;
- (BOOL)resizeWatchNowTest:(id)a0;
- (id)rootViewControllerForAppController:(id)a0;
- (BOOL)scrollLibraryTest:(id)a0;
- (BOOL)scrollProductPageTest:(id)a0;
- (void)scrollTopMostPage:(id)a0;
- (BOOL)scrollWatchNowTest:(id)a0;
- (void)setTextInSearchField:(id)a0;
- (void)tabBarControllerDidUpdateSelectedIndex:(id)a0;
- (void)tabBarControllerDidUpdateTabBarItems:(id)a0;
- (void)toolbar:(id)a0 searchTextFieldDidBecomeFocus:(id)a1;
- (void)toolbar:(id)a0 segmentedControlDidSelectSegmentIndex:(unsigned long long)a1;

@end
