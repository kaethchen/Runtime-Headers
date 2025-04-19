@class NSString, ICQInAppMessage, CKiCloudSyncStateModel, CKiCloudSettingsSyncController, IMCloudKitSyncState, ICQInAppAction, CKKeepMessagesPreferenceManager, NSNumber;
@protocol CKiCloudSettingsViewModelDelegate;

@interface CKiCloudSettingsViewModel : NSObject

@property (retain, nonatomic) CKiCloudSettingsSyncController *syncController;
@property (retain, nonatomic) CKiCloudSyncStateModel *syncStateModel;
@property (weak, nonatomic) ICQInAppAction *upgradeICloudAction;
@property (retain, nonatomic) id iCloudMessagingObserverToken;
@property (retain, nonatomic) CKKeepMessagesPreferenceManager *keepMessagesPreferenceManager;
@property (retain, nonatomic) ICQInAppMessage *lastInAppMessage;
@property (retain, nonatomic) IMCloudKitSyncState *lastEngineSyncState;
@property (nonatomic) long long resolvedSyncState;
@property (readonly, nonatomic) NSString *syncButtonText;
@property (readonly, nonatomic) long long syncState;
@property (readonly, nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (readonly, nonatomic) BOOL micAccountsMatch;
@property (readonly, nonatomic, getter=isSyncing) BOOL syncing;
@property (readonly, nonatomic) BOOL syncSupportsCancellation;
@property (readonly, nonatomic) BOOL isSyncButtonEnabled;
@property (readonly, nonatomic) NSString *keepMessagesPreference;
@property (readonly, nonatomic) NSNumber *keepMessagePreferenceValue;
@property (readonly, nonatomic) NSString *messagesInCloudCount;
@property (readonly, nonatomic) NSString *syncStatus;
@property (readonly, nonatomic) long long syncStatusMacButtonType;
@property (readonly, nonatomic) NSString *messagesLearnMoreUrlString;
@property (readonly, nonatomic) NSString *syncStatusFooterText;
@property (readonly, nonatomic) NSString *syncStatusMacToolTipText;
@property (readonly, nonatomic) NSString *syncStatusFooterSubstringForHyperlink;
@property (readonly, nonatomic) NSString *footerHyperlinkUrl;
@property (readonly, nonatomic, getter=isSyncAvailable) BOOL syncAvailable;
@property (weak, nonatomic) id<CKiCloudSettingsViewModelDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)stopObservers;
- (void)_internalInit;
- (id)_currentKeepMessagesPreference;
- (BOOL)_isBetweenInitialAndBackfillSync;
- (id)_lastSyncedDateFromDefaults;
- (id)_lastSyncedDateString;
- (void)_resolveSyncState;
- (id)_stateModelForSyncState:(long long)a0;
- (void)_syncedSettingsDidChange:(id)a0;
- (void)_updateActionForICQInAppMessage:(id)a0;
- (id)captionTextForCaptionTextType:(long long)a0;
- (void)showICloudUpsellIfAvailable;
- (void)syncButtonPressed;
- (void)updateKeepMessagesPreference:(id)a0;
- (id)valueTextForValueTextType:(long long)a0;

@end
