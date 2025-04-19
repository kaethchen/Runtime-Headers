@class WBSCacheRetainReleasePolicy, NSArray, NSObject;
@protocol FaviconProviderHistoryBookmarkAdapterDelegate, OS_dispatch_queue;

@interface FaviconProviderHistoryBookmarkAdapter : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    BOOL _didNotifyDelegate;
    long long _bookmarksState;
    long long _historyState;
    NSArray *_observers;
}

@property (weak, nonatomic) id<FaviconProviderHistoryBookmarkAdapterDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_historyItemsWereAdded:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_bookmarkURLDidChangeFrom:(id)a0 to:(id)a1;
- (void)_bookmarksDidReload;
- (void)_historyWasLoaded;
- (void)_historyWasLoadedInMemory;
- (void)_notifyDelegateIfReady;

@end
