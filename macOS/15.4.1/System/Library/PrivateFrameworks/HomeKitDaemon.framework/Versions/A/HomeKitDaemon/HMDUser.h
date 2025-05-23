@class NSDictionary, HAPPairingIdentity, HMDAccountIdentifier, HMPhotosPersonManagerSettings, HMDCloudShareTrustManager, HMDUserDataController, NSString, HMDCloudShareMessenger, HMDAssistantAccessControl, HMDUserPhotosPersonDataManager, HMDAccountHandle, HMBShareUserID, HMFMessageDispatcher, NSObject, NSSet, NSData, HMDRestrictedGuestHomeAccessSettings, AVOutputDeviceAuthorizedPeer, NAFuture, HMDPersonSettingsManager, HMDSiriMultiUserNewLanguageNotificationManager, NSUUID, HMDPhotosPersonManager, HMUserPresenceAuthorization, HMDUserSettingsBackingStoreController, NSNumber, HMDHome;
@protocol HMDUserDataSource, HMDUserAccessorySettingsDataController, HMDAccountMetadata, OS_dispatch_queue, HAPKeyStore;

@interface HMDUser : HMFObject <HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMDUserDataControllerDataSource, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDRemoteEventRouterUserAccessControlProvider, HMDUserSettingsInitialValueProviding, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDAccountHandle *_accountHandle;
    HMDAccountIdentifier *_accountIdentifier;
    NSString *_mergeIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL allowedToContributeActivityStates;
@property (readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property (readonly) BOOL hasCameraClipsAccess;
@property (readonly, copy) NSData *nfcIssuerKeyIdentifier;
@property (readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
@property (retain) HMDAssistantAccessControl *assistantAccessControl;
@property (retain) HMDCloudShareMessenger *shareMessenger;
@property (retain) HMDUserSettingsBackingStoreController *privateBackingStoreController;
@property (retain) HMDPersonSettingsManager *personSettingsManager;
@property BOOL needsiTunesMultiUserRepair;
@property (readonly) id<HMDUserDataSource> dataSource;
@property (retain) HMDSiriMultiUserNewLanguageNotificationManager *siriMultiUserNewLanguageNotificationManager;
@property (retain) id<HMDUserAccessorySettingsDataController> accessorySettingsDataController;
@property (retain) NSDictionary *ownerCharacteristicAuthorizationData;
@property (readonly) NSSet *cachedCurrentUserPairingIdentityIdentifiers;
@property (retain, nonatomic) NSNumber *matterCASEAuthenticatedTagID;
@property (retain) NSData *acwgIssuerPublicKeyExternalRepresentation;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, setter=setUUID:) NSUUID *uuid;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) HMBShareUserID *cloudShareID;
@property (copy) HMUserPresenceAuthorization *presenceAuthStatus;
@property unsigned long long privilege;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property unsigned long long camerasAccessLevel;
@property unsigned long long announceAccessLevel;
@property unsigned long long announceNotificationModeForCurrentDevice;
@property (copy) HAPPairingIdentity *pairingIdentity;
@property (copy) HMDAccountIdentifier *accountIdentifier;
@property (copy) NSString *mergeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property (retain) HMDCloudShareTrustManager *cloudShareTrustManager;
@property (retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController;
@property (retain) HMDUserPhotosPersonDataManager *photosPersonDataManager;
@property (copy, nonatomic) NSString *userID;
@property (readonly) NSNumber *notificationContextHAPIdentifier;
@property (readonly) NSNumber *notificationContextNFCIdentifier;
@property (readonly) id<HAPKeyStore> keyStore;
@property long long userCloudShareWithOwnerMessagingState;
@property (readonly, getter=isPending) BOOL pending;
@property unsigned long long ownerAddSceneButtonPresentedCount;
@property BOOL ownerCompletedSwitchingHomesOnboardingUI;
@property BOOL ownerDismissed2024EnergyOnboarding;
@property BOOL ownerDismissedAccessCodeOnboarding;
@property BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property BOOL ownerDismissedAnnounceOnboarding;
@property BOOL ownerDismissedCameraRecordingOnboarding;
@property BOOL ownerDismissedCameraRecordingSetupBanner;
@property BOOL ownerDismissedCameraUpgradeOfferBanner;
@property BOOL ownerDismissedHomeTheaterOnboarding;
@property BOOL ownerDismissedIdentifyVoiceOnboarding;
@property BOOL ownerDismissedIdentifyVoiceSetupBanner;
@property BOOL ownerDismissedNaturalLightingOnboarding;
@property BOOL ownerDismissedTVViewingProfileOnboarding;
@property BOOL ownerDismissedTVViewingProfileSetupBanner;
@property BOOL ownerDismissedUserSplitMediaAccountWarning;
@property BOOL ownerDismissedWalletKeyExpressModeOnboarding;
@property BOOL ownerDismissedWelcomeUI;
@property BOOL ownerHasUserSeenRMVNewLanguageNotification;
@property BOOL allowExplicitContent;
@property BOOL allowiTunesAccount;
@property BOOL dolbyAtmosEnabled;
@property BOOL losslessMusicEnabled;
@property BOOL playbackInfluencesEnabled;
@property BOOL siriIdentifyVoiceEnabled;
@property (retain, nonatomic) NSString *iCloudAltDSID;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, setter=setUUID:) NSUUID *uuid;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) HMBShareUserID *cloudShareID;
@property (copy) HMUserPresenceAuthorization *presenceAuthStatus;
@property unsigned long long privilege;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property unsigned long long camerasAccessLevel;
@property unsigned long long announceAccessLevel;
@property unsigned long long announceNotificationModeForCurrentDevice;
@property (copy) HAPPairingIdentity *pairingIdentity;
@property (copy) HMDAccountIdentifier *accountIdentifier;
@property (copy) NSString *mergeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property (retain) HMDCloudShareTrustManager *cloudShareTrustManager;
@property (retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController;
@property (retain) HMDUserPhotosPersonDataManager *photosPersonDataManager;
@property (copy, nonatomic) NSString *userID;
@property (readonly) NSNumber *notificationContextHAPIdentifier;
@property (readonly) NSNumber *notificationContextNFCIdentifier;
@property (readonly) id<HAPKeyStore> keyStore;
@property long long userCloudShareWithOwnerMessagingState;
@property (readonly, getter=isPending) BOOL pending;
@property unsigned long long ownerAddSceneButtonPresentedCount;
@property BOOL ownerCompletedSwitchingHomesOnboardingUI;
@property BOOL ownerDismissed2024EnergyOnboarding;
@property BOOL ownerDismissedAccessCodeOnboarding;
@property BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property BOOL ownerDismissedAnnounceOnboarding;
@property BOOL ownerDismissedCameraRecordingOnboarding;
@property BOOL ownerDismissedCameraRecordingSetupBanner;
@property BOOL ownerDismissedCameraUpgradeOfferBanner;
@property BOOL ownerDismissedHomeTheaterOnboarding;
@property BOOL ownerDismissedIdentifyVoiceOnboarding;
@property BOOL ownerDismissedIdentifyVoiceSetupBanner;
@property BOOL ownerDismissedNaturalLightingOnboarding;
@property BOOL ownerDismissedTVViewingProfileOnboarding;
@property BOOL ownerDismissedTVViewingProfileSetupBanner;
@property BOOL ownerDismissedUserSplitMediaAccountWarning;
@property BOOL ownerDismissedWalletKeyExpressModeOnboarding;
@property BOOL ownerDismissedWelcomeUI;
@property BOOL ownerHasUserSeenRMVNewLanguageNotification;
@property BOOL allowExplicitContent;
@property BOOL allowiTunesAccount;
@property BOOL dolbyAtmosEnabled;
@property BOOL losslessMusicEnabled;
@property BOOL playbackInfluencesEnabled;
@property BOOL siriIdentifyVoiceEnabled;
@property (retain, nonatomic) NSString *iCloudAltDSID;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly) NAFuture *cloudShareIDFuture;
@property (weak) HMDHome *home;
@property (readonly, copy) NSString *displayName;
@property (readonly, getter=isAdministrator) BOOL administrator;
@property (readonly, getter=isOwner) BOOL owner;
@property (readonly, getter=isRemoteGateway) BOOL remoteGateway;
@property (readonly, getter=isCurrentUser) BOOL currentUser;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) NSUUID *assistantAccessControlModelUUID;
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (readonly) HMDPhotosPersonManager *photosPersonManager;
@property (readonly, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;
@property (copy) NSString *accessCode;
@property (retain) NSUUID *accessCodeChangedByUserUUID;
@property (retain) HMDUserDataController *userDataController;
@property (readonly, copy) NSString *pairingUsername;
@property (readonly, copy) NSData *publicKey;
@property (readonly) NSNumber *uniqueIDForAccessories;
@property (readonly) BOOL isAccessCurrentlyAllowedBySchedule;
@property (retain) HMDRestrictedGuestHomeAccessSettings *restrictedGuestAccessSettings;
@property (readonly) BOOL isRestrictedGuest;
@property (readonly) unsigned long long userAccessPolicy;
@property (retain) id<HMDAccountMetadata> accountMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *userUUID;
@property (readonly) BOOL isRunningOnHomeOwnersDevice;
@property (readonly) BOOL isCurrentUser;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)appendRootPath:(id)a0 withSettingPath:(id)a1;
+ (id)UUIDWithUserID:(id)a0 forHomeIdentifier:(id)a1 uuid:(id)a2 pairingIdentity:(id)a3;
+ (void)__findOrCreateCKSharedUserAccessorySettingsForAccessory:(id)a0 usingManagedObjectContext:(id)a1 rootShareObject:(id)a2 listeningHistoryEnabled:(id)a3 mediaContentProfileEnabled:(id)a4 personalRequestsEnabled:(id)a5;
+ (void)_fetchAndMigrateAssistantAccessControlModelV2ToCoreDataFromLocalZone:(id)a0 managedObjectContext:(id)a1 rootShareObject:(id)a2;
+ (void)_fetchAndMigrateMediaContentProfileAccessControlModelToCoreDataFromLocalZone:(id)a0 managedObjectContext:(id)a1 rootShareObject:(id)a2;
+ (void)_fetchAndMigratePhotosPersonManagerSettingsFromLocalZone:(id)a0 managedObjectContext:(id)a1 rootShareObject:(id)a2;
+ (void)_fetchAndMigrateUserListeningHistoryUpdatedControlModelToCoreDataFromLocalZone:(id)a0 managedObjectContext:(id)a1 rootShareObject:(id)a2;
+ (id)_openZoneWithName:(id)a0 inDatabase:(id)a1;
+ (void)_saveSharedUserSettingsToCoreData:(id)a0 managedObjectContext:(id)a1 rootShareObject:(id)a2;
+ (id)allLastUserSyncDataArchives;
+ (id)allowedClassesForAnnounceNotificationMode;
+ (id)allowedClassesForSyncData;
+ (id)av_authorizedPeerForPairingIdentity:(id)a0 isOwner:(BOOL)a1;
+ (id)currentUserWithPrivilege:(unsigned long long)a0 forHome:(id)a1;
+ (id)currentUserWithPrivilege:(unsigned long long)a0 forHome:(id)a1 forceHH1Key:(BOOL)a2;
+ (id)getSettingsUsingPreOrderTraversal:(id)a0 rootUUID:(id)a1 keyPath:(id)a2;
+ (id)getSyncDataFromLocalDiskWithArchive:(id)a0;
+ (unsigned long long)hmdUserPrivilegeFromHMMTRUserPrivilege:(unsigned long long)a0;
+ (unsigned long long)hmmtrUserPrivilegeFromHMDUserPrivilege:(unsigned long long)a0;
+ (BOOL)isAllowedToAddOrRemoveHAPPairingsOnAccessoryFor:(id)a0;
+ (id)localPrivateZoneForSharedUserUUID:(id)a0 database:(id)a1;
+ (id)localSharedZoneForSharedUserUUID:(id)a0 database:(id)a1;
+ (void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)a0 homeUUID:(id)a1 privateZone:(id)a2 backingStoreContext:(id)a3;
+ (void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)a0 homeUUID:(id)a1 sharedZone:(id)a2 backingStoreContext:(id)a3;
+ (id)ownerWithUserID:(id)a0 home:(id)a1 pairingIdentity:(id)a2 homeManager:(id)a3;
+ (id)privateZoneNameForUserUUID:(id)a0;
+ (unsigned long long)privilegeFromDictionary:(id)a0;
+ (id)sharedZoneNameForUserUUID:(id)a0;
+ (id)userDictionaryWithUserID:(id)a0 privilege:(unsigned long long)a1 remoteAccessAllowed:(BOOL)a2 cameraAccessLevel:(unsigned long long)a3 announceAccessAllowed:(id)a4 announceAccessLevel:(unsigned long long)a5 restrictedGuestAccessSettings:(id)a6;
+ (id)userIDForAccountHandle:(id)a0;
+ (id)userWithDictionary:(id)a0;
+ (id)userWithDictionary:(id)a0 home:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)shortDescription;
- (id)account;
- (id)logIdentifier;
- (id)initWithModelObject:(id)a0;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)messageDestination;
- (void)registerForMessages;
- (void)setiCloudAltDSID:(id)a0;
- (void)unconfigure;
- (id)_initWithCoder:(id)a0;
- (void)configureCloudShareTrustManager;
- (void)initializeUserSettingsWithHome:(id)a0;
- (id)ownerForCloudShareTrustManager:(id)a0;
- (id)privateZoneName;
- (void)removeCloudData;
- (void)didStartBackingStoreController:(id)a0;
- (BOOL)shouldWeOverrideRemoteAccessAllowedDespiteNoRemoteAccessAllowed;
- (id)trustTargetUUID;
- (void)updateAnnounceNotificationMode:(unsigned long long)a0;
- (void)__handleAddedAccount:(id)a0;
- (void)__handleModifiedAccount:(id)a0;
- (void)__handleRemovedAccount:(id)a0;
- (unsigned long long)_compatiblePrivilege;
- (void)_encodeWithCoder:(id)a0;
- (void)_handleAnnounceSettingsUpdate:(id)a0;
- (void)_handleAssistantAccessControlUpdate:(id)a0;
- (void)_handleCloudShareWithOwnerMessageError;
- (void)_handleFMFDeviceChangedNotification:(id)a0;
- (void)_handleFetchProfilePhoto:(id)a0;
- (void)_handleLegacyPairingIdentityRequest:(id)a0;
- (void)_handleMediaContentProfileAccessControlUpdate:(id)a0;
- (void)_handleMultiUserSharePayloadRequest:(id)a0;
- (void)_handleNeedsiTunesMultiUserRepair:(id)a0;
- (void)_handlePairingIdentityRequest:(id)a0;
- (void)_handleRestrictedGuestNewSchedule:(id)a0;
- (void)_handleShareClientRepairRequest:(id)a0;
- (void)_handleShareLookupInfoRequest:(id)a0;
- (void)_handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0;
- (BOOL)_isExplicitContentValueEnabledForAppleMediaAccessory:(id)a0;
- (void)_migrateAnnounceNotificationModeIfNeeded;
- (void)_notifyEveryOneAboutRestrictedGuestScheduleNotification:(id)a0;
- (void)_pushSharedProfileMetadataToStoreForHome:(id)a0 iCloudAltDSID:(id)a1 firstName:(id)a2 lastName:(id)a3 profilePhotoDict:(id)a4;
- (void)_readAnnounceNotificationModeFromLocalStore;
- (void)_recoverTrustManagerDueToUUIDChange;
- (void)_recoverUserSettingsDueToUUIDChange;
- (void)_removeAnnounceNotificationModeFileFromDiskForUserUUID:(id)a0;
- (void)_saveAnnounceSettingsToLocalStore:(unsigned long long)a0;
- (void)_saveSharedUserProfileMetadataToBackingStoreContext:(id)a0 rootShareObject:(id)a1 iCloudAltDSID:(id)a2 firstName:(id)a3 lastName:(id)a4 profilePhotoDict:(id)a5;
- (void)_sendAccountMessage:(id)a0 payload:(id)a1 deviceCapabilities:(id)a2 multicast:(BOOL)a3 preferPrimary:(BOOL)a4 completion:(id /* block */)a5;
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)a0 completion:(id /* block */)a1;
- (BOOL)_setRemoteAccessAllowed:(BOOL)a0;
- (void)_setUuidUnsafely:(id)a0;
- (void)_transactionAccessorySettingsUpdated:(id)a0;
- (void)_transactionPhotosPersonManagerSettingsUpdated:(id)a0;
- (void)_transactionUserProfileMetaDataUpdated:(id)a0;
- (void)_transactionUserSettingsUpdated:(id)a0;
- (void)_transactionUserUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_updateAnnounceNotificationMode:(unsigned long long)a0;
- (void)_updateAnnounceNotificationModeToLocalStore:(unsigned long long)a0 managedObjectContext:(id)a1;
- (id)accountHandle;
- (id)allAccessoryUUID;
- (unsigned long long)allowedRemoteEventAccessUserTypes;
- (id)announceNotificationFileName;
- (id)announceNotificationFileNameForUserUUID:(id)a0;
- (void)applyConditionalValueUpdateToModels:(id)a0;
- (BOOL)areAccessoriesInAllowedList:(id)a0;
- (id)backingStoreController:(id)a0 createParticipantManagerForCloudZone:(id)a1;
- (void)backingStoreController:(id)a0 didUpdatePhotosPersonManagerSettingsModel:(id)a1 previousPhotosPersonManagerSettingsModel:(id)a2;
- (id)backingStoreObjects:(long long)a0;
- (BOOL)canGetUpdatesRemotely;
- (void)cancelRestrictedGuestScheduledTimers;
- (void)cloudShareTrustManager:(id)a0 didFetchOwnerCloudShareID:(id)a1;
- (void)cloudShareTrustManager:(id)a0 didRemoveUserWithUUID:(id)a1;
- (BOOL)cloudShareTrustManager:(id)a0 shouldShareTrustWithUser:(id)a1;
- (void)configurePersonSettingsManager;
- (void)configurePhotosPersonDataManager;
- (void)configureWithHome:(id)a0;
- (double)configuredProofOfLocalityTimeout;
- (unsigned long long)defaultAnnounceUserAccessLevel;
- (void)deregisterForMessages;
- (void)deregisterIDSActivityObserver:(id)a0;
- (void)deregisterIDSActivityObserver:(id)a0 subActivity:(id)a1 subjectDevice:(id)a2;
- (void)deregisterIdentity;
- (id)dictionaryEncoding;
- (void)didFinishConfiguringForCloudShareTrustManager:(id)a0;
- (void)didHandleFMFDeviceChangedNotificationWithStatus:(unsigned long long)a0;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)a0;
- (void)didStartLocalZoneForBackingStoreController:(id)a0;
- (void)didStopBackingStoreController:(id)a0;
- (void)enableUserListeningHistoryForAccessory:(id)a0;
- (void)fetchPairingIdentityForClientWithMessage:(id)a0;
- (void)handleAssistantAccessControlUpdate:(id)a0;
- (void)handleMediaContentProfileAccessControlUpdate:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleRemovedAccessory:(id)a0;
- (void)handleRestrictedGuestScheduleTimer:(id)a0;
- (void)handleUpdatedCATForUser;
- (void)handleUserDataControllerInitialized:(id)a0;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0;
- (BOOL)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)a0;
- (id)homeForCloudShareTrustManager:(id)a0;
- (id)initWithAccountHandle:(id)a0 home:(id)a1 pairingIdentity:(id)a2 privilege:(unsigned long long)a3;
- (id)initWithAccountHandle:(id)a0 home:(id)a1 pairingIdentity:(id)a2 privilege:(unsigned long long)a3 dataSource:(id)a4;
- (id)initWithAccountHandle:(id)a0 homeUUID:(id)a1 pairingIdentity:(id)a2 privilege:(unsigned long long)a3;
- (id)initWithAccountHandle:(id)a0 homeUUID:(id)a1 pairingIdentity:(id)a2 privilege:(unsigned long long)a3 keyStore:(id)a4 dataSource:(id)a5;
- (BOOL)isAccessPolicySet;
- (BOOL)isAccountEqualWithUser:(id)a0;
- (BOOL)isAllowedToAccessActivityHistory;
- (BOOL)isAllowedToAddOrRemoveHAPPairingsOnAccessory;
- (BOOL)isAllowedToContributeActivityStates;
- (BOOL)isAllowedToHaveCATId;
- (BOOL)isAllowedToSharePhotosPersonManagerData;
- (BOOL)isCurrentUserAndOwner;
- (BOOL)isLocalAccessoryCommunicationAllowed;
- (BOOL)isOwnerCapableForTrustManager:(id)a0;
- (BOOL)isSharedUsersMeDeviceForProfileMetadata;
- (BOOL)matchingPairingIdentityIdentifier:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)newModelWithChangeType:(unsigned long long)a0;
- (id)ownerForUserSettingsBackingStoreController:(id)a0;
- (id)ownerPrivateSettingsAsDictionary;
- (void)postUserSettingsUpdatedNotificationWithReason:(id)a0;
- (id)privateSettingValuesByKeyPath;
- (id)privateZoneControllerForUserDataController:(id)a0;
- (void)pushMetadataToStoreForHome:(id)a0;
- (id)pushTokensForDevicesObservingSubjectDevice:(id)a0 subActivity:(id)a1;
- (void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)a0;
- (BOOL)refreshDisplayName;
- (void)registerIDSActivityObserver:(id)a0 subActivity:(id)a1 subjectDevice:(id)a2;
- (void)registerIdentity;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)a0;
- (void)removeCloudShareID;
- (BOOL)requiresMakoSupport;
- (id)restrictedGuestScheduleEndTimerID;
- (id)restrictedGuestScheduleStartTimerID;
- (void)scheduleRestrictedGuestAccessTimersWithReason:(id)a0;
- (void)sendSharedUserProfileMetadataUpdatedMessage;
- (void)setAccountHandle:(id)a0;
- (id)setHasUserSeenRMVNewLanguageNotification:(BOOL)a0;
- (id)settingsControllerFollowerKeyPaths:(id)a0;
- (id)sharedSettingValuesByKeyPath;
- (id)sharedSettingsAsDictionary;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;
- (id)sharedZoneControllerForUserDataController:(id)a0;
- (id)sharedZoneName;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (BOOL)updateAdministrator:(BOOL)a0;
- (void)updateCloudShareID:(id)a0;
- (void)updateIDSActivityObserver:(id)a0;
- (void)updateRestrictedGuestSettingsFromWorkingStoreIfNeeded;
- (void)updateSharedBackingStoreControllerParticipants;
- (BOOL)userDataController:(id)a0 isAccessoryUserListeningHistoryUpdateCapable:(id)a1;
- (BOOL)userDataController:(id)a0 isAppleMediaAccessory:(id)a1;
- (BOOL)userDataController:(id)a0 isHAPAccessory:(id)a1;
- (BOOL)userDataController:(id)a0 isMediaContentProfileCapableAccessoryID:(id)a1;
- (BOOL)userDataController:(id)a0 isPersonalRequestCapableAccessoryID:(id)a1;
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)a0;
- (void)userDataControllerDidUpdateMediaContentProfile:(id)a0;
- (void)userDataControllerDidUpdateUserListeningHistoryUpdateControl:(id)a0;
- (id)userIDsToMigrateAnnounceSettingsFrom;
- (id)zoneNameForCloudShareTrustManager:(id)a0;

@end
