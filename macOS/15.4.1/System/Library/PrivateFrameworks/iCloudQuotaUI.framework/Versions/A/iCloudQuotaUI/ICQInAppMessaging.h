@class ACAccountStore, NSString, ICQInAppMessage, CoreTelephonyClient, RadiosPreferences, ICQOffer, ICQOfferManager, NSObject, ICQUnfairLock, NSUserDefaults, ICQPremiumOffer;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface ICQInAppMessaging : NSObject <RadiosPreferencesDelegate, CoreTelephonyClientDataDelegate> {
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSObject<OS_dispatch_queue> *_connectivityQueue;
    NSObject<OS_dispatch_queue> *_radiosPrefsQueue;
    struct __CTServerConnection { } *_cellularDataConnection;
    CoreTelephonyClient *_ctClient;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) RadiosPreferences *radioPrefs;
@property (retain, nonatomic) ICQOfferManager *sharedOfferManager;
@property (retain, nonatomic) ICQOffer *regularOffer;
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer;
@property (retain, nonatomic) ICQOffer *defaultOffer;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) ICQInAppMessage *mockMessage;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *connectivityMonitor;
@property (nonatomic, getter=isICloudReachable) BOOL iCloudReachable;
@property (retain, nonatomic) ICQInAppMessage *lastMessage;
@property (nonatomic) BOOL hasNewObserver;
@property (retain, nonatomic) ICQUnfairLock *unfairLock;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL isRegisteredForNotifications;
@property (copy, nonatomic) NSString *placement;
@property (nonatomic) BOOL isCellularConstraintReached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForNotifications;
- (void)dataSettingsChanged:(id)a0;
- (BOOL)isAirplaneModeEnabled;
- (void)airplaneModeChanged;
- (void)observeUpdates;
- (void)stopObservingUpdates;
- (void)fetchMessageWithCompletion:(id /* block */)a0;
- (void)observeUpdatesForBundleID:(id)a0 placement:(id)a1;
- (void)_fetchBRCellularConstraintState;
- (id)_accountIdentifier;
- (id)_actionsForBannerSpecification:(id)a0 offer:(id)a1;
- (unsigned long long)_contentTypeForDriveWithOffer:(id)a0;
- (unsigned long long)_contentTypeForMessageWithOffer:(id)a0;
- (unsigned long long)_contentTypeForQuotaOffer:(id)a0;
- (id)_dismissActionForBannerSpecification:(id)a0 offer:(id)a1;
- (void)_fetchDefaultOffer;
- (void)_fetchInitialOfferStates;
- (void)_fetchPremiumOffer;
- (void)_fetchRegularOffer;
- (void)_handleBRCellularConstraintChanged:(id)a0;
- (BOOL)_isCellularDataOff;
- (void)_observeUpdatesForBundleID:(id)a0;
- (void)_postMessage:(id)a0;
- (void)_recalculateAndPostCurrentMessage;
- (id)_recalculateCurrentMessage;
- (BOOL)_shouldShowBRCellularConstraintMessage;
- (void)_startMonitoringNetworkStatus;
- (id)_symbolNameForQuotaOffer:(id)a0;
- (BOOL)_termsNotAccepted;
- (id)airplaneModeOnMessageFromDefaultOffer:(id)a0;
- (id)cellularConstraintMessageFromDefaultOffer:(id)a0;
- (id)cellularDataOffMessageFromDefaultOffer:(id)a0;
- (void)fetchMessageForReason:(id)a0 pendingItemsCount:(id)a1 withCompletion:(id /* block */)a2;
- (void)fetchMessageForReason:(id)a0 withCompletion:(id /* block */)a1;
- (void)observeUpdatesForBundleID:(id)a0;
- (id)quotaMessageForOffer:(id)a0;
- (id)serverUnreachableMessageFromDefaultOffer:(id)a0;
- (id)termsNotAcceptedMessageFromDefaultOffer:(id)a0;
- (id)uploadFailureMessageForPendingItemCount:(id)a0 defaultOffer:(id)a1;

@end
