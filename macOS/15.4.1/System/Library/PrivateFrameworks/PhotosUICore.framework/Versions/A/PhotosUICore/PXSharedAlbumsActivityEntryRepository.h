@class NSString, NSMutableArray;
@protocol PXSharedAlbumsActivityEntryRepositoryDelegate;

@interface PXSharedAlbumsActivityEntryRepository : NSObject <PLAssetChangeObserver, PLCloudCommentsChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver> {
    NSString *_logIdentifier;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}

@property (weak, nonatomic) id<PXSharedAlbumsActivityEntryRepositoryDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLogIdentifier:(id)a0;
- (void)assetsDidChange:(id)a0;
- (void)cloudCommentsDidChange:(id)a0;
- (void)cloudFeedEntriesDidChange:(id)a0;
- (void)shouldReload:(id)a0;
- (void)_didFinishPostingNotifications:(id)a0;
- (void)_clearPendingNotifications;

@end
