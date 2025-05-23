@class NSError, NSString, NSArray, IXAppInstallCoordinatorSeed, NSUUID, IXApplicationIdentity, LSApplicationRecord, NSObject;
@protocol OS_dispatch_queue, IXAppInstallCoordinatorObserver;

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>

@property (class, nonatomic) BOOL skipIntentValidation;
@property (class, readonly, nonatomic) BOOL modifiesLocalLaunchServicesDatabase;
@property (class, readonly, nonatomic) unsigned long long intent;

@property (readonly, nonatomic) IXAppInstallCoordinatorSeed *seed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) unsigned long long observersCalled;
@property (readonly, nonatomic) LSApplicationRecord *completedApplicationRecord;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (nonatomic) BOOL isRegisteredWithDaemon;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;
@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly, copy, nonatomic) NSArray *validInstallTypes;
@property (readonly, nonatomic) unsigned long long coordinationState;
@property (readonly, nonatomic) unsigned long long creatorIdentifier;
@property (readonly, nonatomic) unsigned int creatorEUID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) IXApplicationIdentity *identity;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *descriptionWithRemoteState;
@property (weak, nonatomic) id<IXAppInstallCoordinatorObserver> observer;
@property (readonly, nonatomic) BOOL hasPlaceholderPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)updateSINFForAppWithIdentity:(id)a0 wrapperURL:(id)a1 sinfData:(id)a2 error:(id *)a3;
+ (BOOL)cancelCoordinatorsForAppsWithBundleIDs:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 error:(id *)a3;
+ (void)removabilityDataWithCompletion:(id /* block */)a0;
+ (Class)classForIntent:(unsigned long long)a0;
+ (BOOL)uninstallAppWithBundleID:(id)a0 error:(id *)a1;
+ (BOOL)updateiTunesMetadataForAppWithIdentity:(id)a0 plistData:(id)a1 options:(id)a2 error:(id *)a3;
+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)a0 usingBlock:(id /* block */)a1;
+ (void)_beginInstallForURL:(id)a0 forPersonaUniqueString:(id)a1 withTargetDirectory:(id)a2 orTargetBundle:(id)a3 consumeSource:(BOOL)a4 shouldOverrideGatekeeper:(BOOL)a5 options:(id)a6 completion:(id /* block */)a7;
+ (id)_coordinatorForAppWithIdentity:(id)a0 targetingInstallationDomain:(unsigned long long)a1 withClientID:(unsigned long long)a2 intent:(unsigned long long)a3 createIfNotExisting:(BOOL)a4 requireMatchingIntent:(BOOL)a5 scopeRequirement:(unsigned char)a6 created:(BOOL *)a7 error:(id *)a8;
+ (id)_coordinatorForIdentity:(id)a0 targetDirectoryIfInitiating:(id)a1 orTargetBundle:(id)a2 created:(BOOL *)a3 error:(id *)a4;
+ (void)_demoteAppToPlaceholderWithApplicationIdentity:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 returnEarlyForTesting:(BOOL)a4 completion:(id /* block */)a5;
+ (void)_demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
+ (BOOL)addBundleIDs:(id)a0 toMappingsForPersona:(id)a1 error:(id *)a2;
+ (BOOL)associateMultiPersonaAppsWithBundleIDs:(id)a0 withPersona:(id)a1 withError:(id *)a2;
+ (void)cancelCoordinatorForAppWithBundleID:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 completion:(id /* block */)a3;
+ (BOOL)cancelCoordinatorForAppWithBundleID:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 error:(id *)a3;
+ (void)cancelCoordinatorForAppWithIdentity:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 completion:(id /* block */)a3;
+ (BOOL)cancelCoordinatorForAppWithIdentity:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 error:(id *)a3;
+ (void)cancelCoordinatorsForAppsWithApplicationIdentities:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 completion:(id /* block */)a3;
+ (BOOL)cancelCoordinatorsForAppsWithApplicationIdentities:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 error:(id *)a3;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)a0 withReason:(id)a1 client:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)coordinatorForAppWithBundleID:(id)a0 withClientID:(unsigned long long)a1 createIfNotExisting:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (id)coordinatorForAppWithIdentity:(id)a0 targetingInstallationDomain:(unsigned long long)a1 withClientID:(unsigned long long)a2 createIfNotExisting:(BOOL)a3 created:(BOOL *)a4 error:(id *)a5;
+ (id)coordinatorForAppWithIdentity:(id)a0 withClientID:(unsigned long long)a1 createIfNotExisting:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (int)daemonPid;
+ (void)defaultAppMetadataForAppIdentity:(id)a0 completion:(id /* block */)a1;
+ (id)defaultAppMetadataForAppIdentity:(id)a0 error:(id *)a1;
+ (void)defaultAppMetadataListWithCompletion:(id /* block */)a0;
+ (id)defaultAppMetadataListWithError:(id *)a0;
+ (void)demoteAppToPlaceholderWithApplicationIdentity:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)demoteAppToPlaceholderWithApplicationIdentity:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 error:(id *)a4;
+ (BOOL)demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 error:(id *)a2;
+ (void)demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 error:(id *)a3;
+ (void)demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)demoteAppToPlaceholderWithBundleID:(id)a0 forReason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 ignoreRemovability:(BOOL)a3 error:(id *)a4;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)a0;
+ (BOOL)enumerateCoordinatorsWithBlock:(id /* block */)a0 error:(id *)a1;
+ (BOOL)enumerateCoordinatorsWithError:(id *)a0 usingBlock:(id /* block */)a1;
+ (id)existingCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;
+ (id)existingCoordinatorForAppWithIdentity:(id)a0 error:(id *)a1;
+ (void)installApplication:(id)a0 consumeSource:(BOOL)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)installApplication:(id)a0 consumeSource:(BOOL)a1 options:(id)a2 legacyProgressBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)installApplication:(id)a0 forPersonaUniqueString:(id)a1 consumeSource:(BOOL)a2 options:(id)a3 completion:(id /* block */)a4;
+ (void)installApplication:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)installApplication:(id)a0 toTargetDirectory:(id)a1 consumeSource:(BOOL)a2 options:(id)a3 completion:(id /* block */)a4;
+ (void)installApplication:(id)a0 toTargetDirectory:(id)a1 consumeSource:(BOOL)a2 shouldOverrideGatekeeper:(BOOL)a3 options:(id)a4 completion:(id /* block */)a5;
+ (void)installApplication:(id)a0 toURL:(id)a1 consumeSource:(BOOL)a2 options:(id)a3 completion:(id /* block */)a4;
+ (void)installApplication:(id)a0 toURL:(id)a1 consumeSource:(BOOL)a2 shouldOverrideGatekeeper:(BOOL)a3 options:(id)a4 completion:(id /* block */)a5;
+ (BOOL)killDaemonForTesting;
+ (void)pauseCoordinatorForAppWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (BOOL)pauseCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;
+ (void)pauseCoordinatorForAppWithIdentity:(id)a0 completion:(id /* block */)a1;
+ (BOOL)pauseCoordinatorForAppWithIdentity:(id)a0 error:(id *)a1;
+ (BOOL)postNSCurrentLocaleDidChangeNotification;
+ (void)prioritizeCoordinatorForAppWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (BOOL)prioritizeCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;
+ (void)prioritizeCoordinatorForAppWithIdentity:(id)a0 completion:(id /* block */)a1;
+ (BOOL)prioritizeCoordinatorForAppWithIdentity:(id)a0 error:(id *)a1;
+ (id)processScopedCoordinatorForAppWithIdentity:(id)a0 targetingInstallationDomain:(unsigned long long)a1 withClientID:(unsigned long long)a2 createIfNotExisting:(BOOL)a3 created:(BOOL *)a4 error:(id *)a5;
+ (id)processScopedCoordinatorForAppWithIdentity:(id)a0 withClientID:(unsigned long long)a1 createIfNotExisting:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
+ (BOOL)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)a0;
+ (BOOL)refreshContainerTypes:(unsigned long long)a0 forApplicationIdentity:(id)a1 reason:(id)a2 error:(id *)a3;
+ (BOOL)refreshContainerTypes:(unsigned long long)a0 forBundleID:(id)a1 reason:(id)a2 error:(id *)a3;
+ (BOOL)refreshDataContainerForBundleID:(id)a0 reason:(id)a1 error:(id *)a2;
+ (BOOL)registerContentsForDiskImageAtURL:(id)a0 options:(id)a1 withError:(id *)a2;
+ (id)removabilityDataWithChangeClock:(id *)a0 error:(id *)a1;
+ (void)removabilityForAppWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)removabilityForAppWithBundleID:(id)a0 error:(id *)a1;
+ (void)removabilityForAppWithIdentity:(id)a0 byClient:(unsigned long long)a1 completion:(id /* block */)a2;
+ (unsigned long long)removabilityForAppWithIdentity:(id)a0 byClient:(unsigned long long)a1 error:(id *)a2;
+ (void)removabilityForAppWithIdentity:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)removabilityForAppWithIdentity:(id)a0 error:(id *)a1;
+ (BOOL)removeBundleIDs:(id)a0 fromMappingsForPersona:(id)a1 error:(id *)a2;
+ (void)resumeCoordinatorForAppWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (BOOL)resumeCoordinatorForAppWithBundleID:(id)a0 error:(id *)a1;
+ (void)resumeCoordinatorForAppWithIdentity:(id)a0 completion:(id /* block */)a1;
+ (BOOL)resumeCoordinatorForAppWithIdentity:(id)a0 error:(id *)a1;
+ (void)revertAppWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)revertAppWithBundleID:(id)a0 completionWithApplicationRecord:(id /* block */)a1;
+ (BOOL)revertAppWithBundleID:(id)a0 error:(id *)a1;
+ (BOOL)revertAppWithBundleID:(id)a0 resultingApplicationRecord:(id *)a1 error:(id *)a2;
+ (void)revertAppWithIdentity:(id)a0 completionWithApplicationRecord:(id /* block */)a1;
+ (BOOL)revertAppWithIdentity:(id)a0 resultingApplicationRecord:(id *)a1 error:(id *)a2;
+ (void)setRemovability:(unsigned long long)a0 forAppWithBundleID:(id)a1 byClient:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)setRemovability:(unsigned long long)a0 forAppWithBundleID:(id)a1 completion:(id /* block */)a2;
+ (void)setRemovability:(unsigned long long)a0 forAppWithIdentity:(id)a1 byClient:(unsigned long long)a2 completion:(id /* block */)a3;
+ (BOOL)setTestModeForIdentifierPrefix:(id)a0 testMode:(unsigned long long)a1;
+ (BOOL)setTestModeForIdentifierPrefix:(id)a0 testMode:(unsigned long long)a1 testSpecificValidationData:(id)a2;
+ (BOOL)setTestingEnabled:(BOOL)a0;
+ (BOOL)simulateClientDeath;
+ (BOOL)testReturnEarlyDemoteAppToPlaceholderWithApplicationIdentity:(id)a0 forReason:(unsigned long long)a1 error:(id *)a2;
+ (void)uninstallAppWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (BOOL)uninstallAppWithBundleID:(id)a0 options:(id)a1 disposition:(unsigned long long *)a2 error:(id *)a3;
+ (BOOL)uninstallAppWithBundleID:(id)a0 options:(id)a1 disposition:(unsigned long long *)a2 error:(id *)a3 legacyProgressBlock:(id /* block */)a4;
+ (void)uninstallAppWithBundleID:(id)a0 requestUserConfirmation:(BOOL)a1 completion:(id /* block */)a2;
+ (void)uninstallAppWithBundleID:(id)a0 requestUserConfirmation:(BOOL)a1 waitForDeletion:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)uninstallAppWithBundleID:(id)a0 requestUserConfirmation:(BOOL)a1 waitForDeletion:(BOOL)a2 error:(id *)a3;
+ (void)uninstallAppWithIdentity:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (BOOL)uninstallAppWithIdentity:(id)a0 options:(id)a1 disposition:(unsigned long long *)a2 error:(id *)a3;
+ (BOOL)uninstallAppWithIdentity:(id)a0 options:(id)a1 disposition:(unsigned long long *)a2 error:(id *)a3 legacyProgressBlock:(id /* block */)a4;
+ (BOOL)unregisterContentsForDiskImageAtURL:(id)a0 options:(id)a1 withError:(id *)a2;
+ (BOOL)updateSINFForAppWithIdentity:(id)a0 sinfData:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)updateiTunesMetadata:(id)a0 forAppWithIdentity:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)updateiTunesMetadata:(id)a0 forAppWithIdentity:(id)a1 wrapperURL:(id)a2 error:(id *)a3;
+ (BOOL)updateiTunesMetadataForAppWithIdentity:(id)a0 wrapperURL:(id)a1 plistData:(id)a2 error:(id *)a3;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bundleID;
- (id)uniqueIdentifier;
- (id)identity;
- (id)initWithSeed:(id)a0;
- (BOOL)resumeWithError:(id *)a0;
- (BOOL)setDeviceSecurityPromise:(id)a0 error:(id *)a1;
- (id)deviceSecurityPromiseWithError:(id *)a0;
- (BOOL)pauseWithError:(id *)a0;
- (BOOL)setRemovability:(unsigned long long)a0 byClient:(unsigned long long)a1 error:(id *)a2;
- (oneway void)_clientDelegate_didCancelWithError:(id)a0 client:(unsigned long long)a1;
- (oneway void)_clientDelegate_didCompleteForApplicationRecord:(id)a0 atURL:(id)a1;
- (oneway void)_clientDelegate_didRegisterForObservation;
- (oneway void)_clientDelegate_didUpdateProgress:(double)a0 forPhase:(unsigned long long)a1 overallProgress:(double)a2;
- (oneway void)_clientDelegate_placeholderDidInstallForApplicationRecord:(id)a0 atURL:(id)a1;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)a0;
- (oneway void)_clientDelegate_shouldBeginPostProcessingForApplicationRecord:(id)a0;
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;
- (oneway void)_clientDelegate_shouldPause;
- (oneway void)_clientDelegate_shouldPrioritize;
- (oneway void)_clientDelegate_shouldResume;
- (void)_conveyCurrentPriorityBoostReplacingExisting:(BOOL)a0;
- (void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:(id)a0 completedApplicationRecord:(id)a1 error:(id)a2 client:(unsigned long long)a3;
- (void)_updateInitWithSeed:(id)a0 notifyDaemon:(BOOL)a1;
- (BOOL)appAssetPromiseHasBegunFulfillment:(BOOL *)a0 error:(id *)a1;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)a0;
- (id)appAssetPromiseWithError:(id *)a0;
- (id)appQuitPromiseWithError:(id *)a0;
- (void)cancelForReason:(id)a0;
- (BOOL)cancelForReason:(id)a0 client:(unsigned long long)a1 error:(id *)a2;
- (BOOL)convertToGloballyScopedCoordinatorWithError:(id *)a0;
- (unsigned char)coordinatorScopeWithError:(id *)a0;
- (unsigned int)creatorEUID;
- (unsigned long long)creatorIdentifier;
- (id)essentialAssetPromisesWithError:(id *)a0;
- (BOOL)getHasDeviceSecurityPromise:(BOOL *)a0 error:(id *)a1;
- (BOOL)getHasEssentialAssetPromises:(BOOL *)a0 error:(id *)a1;
- (BOOL)getNeedsPostProcessing:(BOOL *)a0 error:(id *)a1;
- (BOOL)getPostProcessingShouldBegin:(BOOL *)a0 error:(id *)a1;
- (BOOL)getShouldOverrideGatekeeperValue:(BOOL *)a0 error:(id *)a1;
- (unsigned long long)importanceWithError:(id *)a0;
- (id)initialODRAssetPromisesWithError:(id *)a0;
- (id)installOptionsWithError:(id *)a0;
- (id)installTargetDirectoryURLWithError:(id *)a0;
- (BOOL)isPaused:(BOOL *)a0 withError:(id *)a1;
- (id)managedInstallUUIDWithError:(id *)a0;
- (unsigned long long)placeholderDispositionWithError:(id *)a0;
- (id)placeholderPromiseWithError:(id *)a0;
- (id)preparationPromiseWithError:(id *)a0;
- (BOOL)prioritizeWithError:(id *)a0;
- (id)progressHintWithError:(id *)a0;
- (unsigned long long)removabilityWithError:(id *)a0;
- (BOOL)setAppAssetPromise:(id)a0 error:(id *)a1;
- (BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setAppQuitPromise:(id)a0 error:(id *)a1;
- (void)setComplete:(BOOL)a0 forApplicationRecord:(id)a1;
- (BOOL)setEssentialAssetPromises:(id)a0 error:(id *)a1;
- (BOOL)setImportance:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setInitialODRAssetPromises:(id)a0 error:(id *)a1;
- (BOOL)setInstallOptions:(id)a0 error:(id *)a1;
- (BOOL)setInstallTargetDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)setManagedInstallUUID:(id)a0 error:(id *)a1;
- (BOOL)setNeedsPostProcessing:(BOOL)a0 error:(id *)a1;
- (BOOL)setPlaceholderDisposition:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setPlaceholderPromise:(id)a0 error:(id *)a1;
- (BOOL)setPreparationPromise:(id)a0 withError:(id *)a1;
- (BOOL)setProgressHint:(id)a0 withError:(id *)a1;
- (BOOL)setShouldOverrideGatekeeper:(BOOL)a0 error:(id *)a1;
- (BOOL)setTargetBundleURL:(id)a0 error:(id *)a1;
- (BOOL)setTargetBundleURL:(id)a0 preservingTargetBundleNameOnUpdate:(BOOL)a1 error:(id *)a2;
- (BOOL)setUserDataPromise:(id)a0 error:(id *)a1;
- (id)targetBundleURLWithError:(id *)a0;
- (id)userDataPromiseWithError:(id *)a0;
- (id)userDataRestoreShouldBegin:(BOOL *)a0;

@end
