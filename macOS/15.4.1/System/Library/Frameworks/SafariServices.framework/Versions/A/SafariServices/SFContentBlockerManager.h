@class NSArray, NSString, NSMutableDictionary, NSTimer, _EXQueryController, NSURL;
@protocol SFContentBlockerManagerDelegate, SFWebExtensionContentBlockerManagerDelegate;

@interface SFContentBlockerManager : NSObject <_EXQueryControllerDelegate> {
    _EXQueryController *_extensionKitQueryController;
    NSMutableDictionary *_contentBlockerIdentifierToStateMap;
    NSMutableDictionary *_contentBlockerUniqueIdentifierToDeveloperIdentifierCache;
    NSTimer *_deleteStateForRemovedContentBlockerTimer;
    NSURL *_extensionSettingsURL;
}

@property (readonly, copy, nonatomic) NSArray *allDiscoveredContentBlockers;
@property (readonly, copy, nonatomic) NSString *profileServerID;
@property (readonly, nonatomic) BOOL hasPopulatedAllDiscoveredContentBlockersFromExtensionDiscoveryAtLeastOnce;
@property (weak, nonatomic) id<SFContentBlockerManagerDelegate> delegate;
@property (weak, nonatomic) id<SFWebExtensionContentBlockerManagerDelegate> webExtensionDelegate;
@property (readonly, nonatomic) NSArray *contentBlockers;
@property (readonly, nonatomic) NSArray *enabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (void)_extensionsWereGloballyDisabled;
- (BOOL)_anyContentBlockerEnabled;
- (void)_applyEnabledContentBlockers;
- (void)_blockedContentBlockersDidChange;
- (id)_composedIdentifierForEnabledStateOfContentBlocker:(id)a0;
- (id)_composedIdentifierForEnabledStateOfContentBlockerWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
- (void)_contentBlockerDidRequestReload:(id)a0;
- (BOOL)_contentBlockerIsEnabled:(id)a0;
- (BOOL)_contentBlockerIsEnabledWithComposedIdentifier:(id)a0;
- (id)_contentBlockerManagerForDefaultProfile;
- (id)_contentBlockerWithComposedIdentifier:(id)a0;
- (id)_contentBlockerWithUUID:(id)a0;
- (id)_contentBlockersState;
- (id)_contentBlockersWithAdamID:(id)a0;
- (void)_deleteStateForContentBlockerWithComposedIdentifier:(id)a0;
- (void)_deleteStateForRemovedContentBlockerSoon;
- (void)_deleteStateForRemovedContentBlockers;
- (void)_deleteStateForRemovedContentBlockersAfterDelay:(double)a0;
- (void)_deleteStateForRemovedContentBlockersTimerFired:(id)a0;
- (id)_developerIdentifierForContentBlocker:(id)a0;
- (void)_didDiscoverContentBlockers:(id)a0;
- (void)_disableUnsignedContentBlockersIfNecessary;
- (void)_extensionsWereGloballyEnabled;
- (void)_findContentBlockerAppExtensions;
- (BOOL)_hasAnyEnabledContentBlockers;
- (BOOL)_isContentBlockerAllowedInPrivateBrowsing:(id)a0;
- (void)_loadContentBlockersIfNecessary:(id)a0;
- (void)_loadEnabledContentBlockers;
- (void)_migrateContentBlockersEnabledInSafariToWebAppIfNecessary;
- (void)_populateContentBlockersIfNecessaryUsingManagerForDefaultProfile;
- (id)_readContentBlockersState;
- (void)_resetContentBlockersState;
- (void)_setContentBlockerIdentifierToStateMap:(id)a0 forContentBlockerWithComposedIdentifier:(id)a1 skipSavingToStore:(BOOL)a2;
- (BOOL)_shouldSkipLoadingEnabledContentBlockersAtStartup;
- (id)_stateForContentBlockerWithComposedIdentifier:(id)a0;
- (BOOL)_supportsExtensionDiscovery;
- (void)_updateContentBlockerStateAfterContentBlockerWasRemovedWithComposedIdentifier:(id)a0;
- (void)_updateContentBlockerStateFromDisk;
- (void)_updateHash:(id)a0 forContentBlocker:(id)a1;
- (void)_updateSkipLoadingEnabledContentBlockersAtStartupDefaultIfNecessary;
- (id)_urlForExtensionSettings;
- (void)_writeContentBlockersStateToStore;
- (void)copyEnabledExtensionStateFromContentBlockerManager:(id)a0;
- (id)initWithProfileServerID:(id)a0;
- (void)loadSuitableDiscoveredContentBlockers;
- (void)setAllowedInPrivateBrowsing:(BOOL)a0 forContentBlocker:(id)a1;
- (void)setContentBlocker:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2 skipSavingToStore:(BOOL)a3;
- (void)unloadAndDeleteStateForAllExtensions;
- (id)userVisiblePermissionsForContentBlocker:(id)a0;

@end
