@class NSWindow, NSSet, NSArray, NSMutableSet, NSMutableArray, NSAlert;

@interface PUKApplicationCloser : NSObject

@property (retain) NSMutableSet *appsToTerminate;
@property (retain) NSMutableSet *observedApps;
@property (retain) NSMutableArray *terminatedApps;
@property (retain) NSMutableArray *relaunchBundleURLs;
@property (retain) NSMutableArray *pluginsToTerminate;
@property (retain) NSSet *bundleIdentifiers;
@property (retain) NSMutableArray *pluginHoldsToRelease;
@property (retain) NSMutableArray *usersWhoFailedToQuit;
@property (retain) NSAlert *alert;
@property (retain) NSWindow *window;
@property (copy) id /* block */ completion;
@property BOOL ignoreOtherUsers;
@property BOOL ignoreNoisyQuittingCheck;
@property (retain) NSArray *customAppSortDescriptors;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)runModalWithCompletion:(id /* block */)a0;
- (void)quitAllAppsAndPlugInsWithCompletion:(id /* block */)a0;
- (BOOL)relaunchTerminatedApps;
- (id)loggedInUsers;
- (id)_determineAlert;
- (void)_alertDidEnd:(id)a0 returnCode:(long long)a1 completion:(id /* block */)a2;
- (id)_alertForLogout:(id)a0;
- (id)_alertForOpenApplications:(id)a0;
- (id)_alertForPlugins:(id)a0 appName:(id)a1;
- (id)_alphaSortedAppsToQuit;
- (void)_beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_checkForAppsAndPluginsForOtherUsers:(id)a0;
- (void)_didReturnToConsoleAfterSwitchUser:(id)a0;
- (id)_prioritizedLoudestAppsToQuit;
- (id)_prioritizedQuietestAppsToQuit;
- (void)_removeObserversFromApp:(id)a0;
- (void)_sendAppleQuitEventUsingPid:(int)a0 userCanceled:(BOOL *)a1;
- (void)_sendAsyncAppleQuitEventUsingPid:(int)a0 completion:(id /* block */)a1;
- (void)_switchUser;
- (void)_terminateAppsAndPlugInsShouldFailWithImmortalApps:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateOpenApplicationsAndPlugInsWithCompletion:(id /* block */)a0;
- (void)_updatePluginsForBundleIdentifiers:(id)a0 vendingBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)beginSheetModalForWindow:(id)a0 completionResponseHandler:(id /* block */)a1;

@end
