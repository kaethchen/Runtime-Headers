@class WFContextualActionSpotlightSyncService, WFDatabase, NSString, HMHomeManager, WFTopHitsAppShortcutsUpdater;
@protocol WFDatabaseProvider;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate>

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) WFTopHitsAppShortcutsUpdater *appShortcutsUpdater;
@property (retain, nonatomic) WFContextualActionSpotlightSyncService *contextualActionSyncService;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)getSerializedParametersForLinkAction:(id)a0 actionMetadata:(id)a1 completion:(id /* block */)a2;
- (void)archiveAction:(id)a0 withActionMetadata:(id)a1 completion:(id /* block */)a2;
- (void)getLinkActionWithAppBundleIdentifier:(id)a0 appIntentIdentifier:(id)a1 expandingParameterName:(id)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)getLinkActionWithAppBundleIdentifier:(id)a0 appIntentIdentifier:(id)a1 serializedParameterStates:(id)a2 completion:(id /* block */)a3;
- (void)getMigratedAppIntentWithINIntent:(id)a0 completion:(id /* block */)a1;
- (void)getResultsForQuery:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (void)getSiriAutoShortcutsEnablementForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getValueForDescriptor:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (void)removeAllSerializedParametersForQueryName:(id)a0 completion:(id /* block */)a1;
- (void)serializedParametersForAppEntityIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setSiriAutoShortcutsEnablement:(BOOL)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)storeSerializedParameters:(id)a0 forAppEntityIdentifier:(id)a1 queryName:(id)a2 badgeType:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)triggerFullContextualActionReindexWithCompletion:(id /* block */)a0;
- (void)unarchiveActionFromData:(id)a0 withActionMetadata:(id)a1 completion:(id /* block */)a2;
- (void)updateAppShortcutsWithCompletion:(id /* block */)a0;
- (BOOL)lsDatabaseChangedSinceLastCheck;
- (void)setPerWorkflowStateData:(id)a0 forSmartPromptWithActionUUID:(id)a1 reference:(id)a2;
- (id)actionWithAppBundleIdentifier:(id)a0 appIntentIdentifier:(id)a1 serializedParameters:(id)a2;
- (id)actionWithSerializedParameters:(id)a0 actionMetadata:(id)a1;
- (void)addVoiceShortcut:(id)a0 phrase:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)applicationWasUnregistered:(id)a0;
- (void)badgeTypeForEntityIdentifier:(id)a0 error:(id *)a1;
- (void)createShortcutWithRecordData:(id)a0 name:(id)a1 shortcutSource:(id)a2 accessSpecifier:(id)a3 completion:(id /* block */)a4;
- (void)deleteStaleSuggestions;
- (void)deleteSuggestionsFromApps:(id)a0;
- (void)deleteVoiceShortcutWithIdentifier:(id)a0 name:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)drawGlyphs:(id)a0 withBackgroundColorValues:(id)a1 padding:(double)a2 rounded:(BOOL)a3 intoContext:(id)a4;
- (void)getInactiveAppsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutWithIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutWithPhrase:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1 appShortcutsUpdater:(id)a2 contextualActionSyncService:(id)a3;
- (BOOL)isPhraseUsable:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (void)logHomescreenFastPathRunEventForShortcutWithWebClip:(id)a0;
- (BOOL)phraseHasHomeKitConflict:(id)a0;
- (void)requestDataMigrationWithCompletion:(id /* block */)a0;
- (void)requestShortcutsSpotlightFullReindex;
- (void)setShortcutSuggestions:(id)a0 forAppWithBundleIdentifier:(id)a1 accessSpecifier:(id)a2;
- (void)updateLSDatabaseAnchors;
- (void)updateVoiceShortcutWithIdentifier:(id)a0 phrase:(id)a1 shortcut:(id)a2 accessSpecifier:(id)a3 completion:(id /* block */)a4;

@end
