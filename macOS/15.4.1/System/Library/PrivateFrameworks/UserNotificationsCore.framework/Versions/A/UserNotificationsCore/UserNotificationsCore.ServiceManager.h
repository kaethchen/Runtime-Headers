@class NSString;

@interface UserNotificationsCore.ServiceManager : NSObject <UNSNotificationCategoryRepositoryObserver, UNCNotificationRepositoryObserver, UNCContentProtectionObserver> {
    void /* unknown type, empty encoding */ workingDirectory;
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ settingsPersistenceListener;
    void /* unknown type, empty encoding */ contentProtectionManager;
    void /* unknown type, empty encoding */ coreService;
    void /* unknown type, empty encoding */ coreServiceClient;
    void /* unknown type, empty encoding */ toolService;
    void /* unknown type, empty encoding */ systemServiceClient;
    void /* unknown type, empty encoding */ badgeService;
    void /* unknown type, empty encoding */ librarian;
    void /* unknown type, empty encoding */ attachmentsRepository;
    void /* unknown type, empty encoding */ categoryRepository;
    void /* unknown type, empty encoding */ categoryRepositoryAggregator;
    void /* unknown type, empty encoding */ notificationRepository;
    void /* unknown type, empty encoding */ isObservingRepositories;
    void /* unknown type, empty encoding */ dateDefinedReaperBackgroundSystemTaskHandler;
    void /* unknown type, empty encoding */ settingsDefinedReaper;
    void /* unknown type, empty encoding */ actionRouter;
    void /* unknown type, empty encoding */ settingsProvider;
    void /* unknown type, empty encoding */ settingsProviderService;
    void /* unknown type, empty encoding */ vendorServer;
    void /* unknown type, empty encoding */ sourceMonitor;
    void /* unknown type, empty encoding */ cloudManager;
    void /* unknown type, empty encoding */ cloudReceiver;
    void /* unknown type, empty encoding */ cloudReceiverConsumerProxy;
    void /* unknown type, empty encoding */ idsCloudPushTarget;
    void /* unknown type, empty encoding */ idsCloudReceiver;
    void /* unknown type, empty encoding */ actionHandlerCloudSender;
    void /* unknown type, empty encoding */ remoteNotificationsProperties;
    void /* unknown type, empty encoding */ alertCoordinator;
    void /* unknown type, empty encoding */ cloudSenderPriorityObserver;
    void /* unknown type, empty encoding */ remoteDeviceChangeManager;
    void /* unknown type, empty encoding */ remoteNotificationsPropertiesObserver;
    void /* unknown type, empty encoding */ storageSettingsProvider;
    void /* unknown type, empty encoding */ pipelineFactory;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)categoryRepository:(id)a0 didChangeCategoriesForBundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)notificationRepository:(id)a0 didDiscoverContentOnFirstUnlockForBundleIdentifier:(id)a1;
- (void)notificationRepository:(id)a0 didPerformUpdates:(id)a1 forBundleIdentifier:(id)a2;

@end
