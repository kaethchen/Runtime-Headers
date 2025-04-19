@class WBSRemotelyUpdatableDataController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;

@end
