@class SUOSUAuthenticationManager, SUMacControllerDescriptor, SUOSUServiceClient, SUOSUMobileSoftwareUpdateController, NSString, SUCoreDDMActivityScheduler, NSObject, SUCorePolicyDDMConfiguration;
@protocol OS_dispatch_queue;

@interface SUOSUManagedServiceDaemon : NSObject <SUCoreDDMActivitySchedulerDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) SUOSUMobileSoftwareUpdateController *mobileSoftwareUpdateController;
@property (retain, nonatomic) SUCoreDDMActivityScheduler *ddmActivityScheduler;
@property (retain) SUOSUAuthenticationManager *authenticationManager;
@property (retain) SUMacControllerDescriptor *descriptorToUpdate;
@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;
@property (retain) SUOSUServiceClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setManagedProductMarketingVersion:(id)a0;
- (void)_currentDDMStateWithCompletion:(id /* block */)a0;
- (void)invalidAndRemoveOldDeclarations;
- (id)_installReasons;
- (void)removeGlobalSettingsDeclaration;
- (id)_ddmDeclarationWithoutQueue;
- (id)_failureReason;
- (id)_getPastDuePaddedEnforcementDate;
- (void)_isDownloadingOrPrepared:(id /* block */)a0;
- (id)_localDateStringFromUTCDate:(id)a0;
- (void)_resetPastDuePaddedEnforcementDate;
- (void)_setPastDuePaddedEnforcementDate;
- (id)_stringFromDate:(id)a0;
- (BOOL)addDeclaration:(id)a0 withError:(id *)a1;
- (id)allDeclarationsRemovingInvalidDeclarations:(BOOL)a0;
- (void)cancelDeclarationWithKey:(id)a0 completion:(id /* block */)a1;
- (void)clearStoredDescriptor;
- (void)clearStoredDescriptorWithoutQueue;
- (id)ddmDeclaration;
- (id)declarationFromKeys;
- (void)disarmDeclarationActivitySchedulerWithCompletion:(id /* block */)a0;
- (void)getDDMStatusWithKeys:(id)a0 completion:(id /* block */)a1;
- (void)globalSettingsDeclarationWithCompletion:(id /* block */)a0;
- (id)initWithServiceQueue:(id)a0 clientQueue:(id)a1 mobileSoftwareUpdateController:(id)a2;
- (void)migrationOldDeclarationsToPersistencePath;
- (id)paddedEnforcementDate;
- (void)performLoggedOutMDMInstallWithProductMarketingVersion:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)postDDMNotificationIfNecessary;
- (void)postDDMNotificationIfNecessaryWithCriteria:(id)a0 activity:(id)a1;
- (void)postDDMNotificationToAllUsersForScheduledUpdate:(id)a0 updateVersion:(id)a1 ignoreDoNoDisturb:(BOOL)a2 companyName:(id)a3 options:(id)a4 client:(id)a5 completion:(id /* block */)a6;
- (void)requestMDMInstallWithProductMarketingVersion:(id)a0 options:(id)a1 client:(id)a2 withCompletion:(id /* block */)a3;
- (void)rescheduleDDMEnforcedDateTimeUpdate;
- (void)scanForDescriptorWithPMV:(id)a0 buildVersion:(id)a1 completion:(id /* block */)a2;
- (void)scheduleDDMNotifications;
- (void)scheduleEnforcedManagedUpdateWithVersion:(id)a0 forDate:(id)a1 withOptions:(id)a2;
- (void)scheduleEnforcedManagedUpdateWithVersion:(id)a0 forDate:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)setGlobalSettings:(id)a0 withCompletion:(id /* block */)a1;
- (void)timeFiredForScheduler:(id)a0 withOptions:(id)a1 replyBlock:(id /* block */)a2;

@end
