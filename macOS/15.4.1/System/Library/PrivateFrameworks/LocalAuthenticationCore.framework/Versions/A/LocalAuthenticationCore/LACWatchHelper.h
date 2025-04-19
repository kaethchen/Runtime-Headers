@class LACBackgroundTask, SFAutoUnlockManager;

@interface LACWatchHelper : NSObject {
    LACBackgroundTask *_eligibleDevicesBackgroundTask;
    SFAutoUnlockManager *_sharingManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_eligibleDevicesWithCompletion:(id /* block */)a0;
- (id)eligibleDevicesBackgroundTask;
- (id)watchDatabaseHashWithError:(id *)a0;

@end
