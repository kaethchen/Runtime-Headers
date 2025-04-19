@class NSString, NSDictionary, RemoteConfigurationsController;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration <RemoteConfigurationsControllerDelegate> {
    NSDictionary *_remoteConfiguration;
    RemoteConfigurationsController *_remoteConfigurationsController;
}

@property (readonly, nonatomic, getter=isFullyConfigured) BOOL fullyConfigured;
@property (readonly, nonatomic) double historyModificationIdleDelayBeforeSyncAttempt;
@property (readonly, nonatomic) double historyRemovalIdleDelayBeforeSyncAttempt;
@property (readonly, nonatomic) double saveChangesBeforeTerminationTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)applyPlatformConfiguration:(id)a0 withTolerance:(long long)a1;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;
- (void)remoteConfigurationsController:(id)a0 didReceiveNewConfiguration:(id)a1;
- (void)stopTryingToLoadRemoteConfiguration;

@end
