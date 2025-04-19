@class WBSRemotelyUpdatableDataController;

@interface WBSOfflineSearchRemoteDisablementManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

@property (class, readonly, nonatomic) WBSOfflineSearchRemoteDisablementManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)areOfflineSearchSuggestionsDisabled:(id /* block */)a0;

@end
