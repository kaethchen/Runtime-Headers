@interface VideosUI.DownloadQueueManager : NSObject <VUIDownloadQueueManager> {
    void /* unknown type, empty encoding */ maxDownloadSize;
    void /* unknown type, empty encoding */ seasonDetailsMap;
    void /* unknown type, empty encoding */ allSeasonDetailsFetchers;
    void /* unknown type, empty encoding */ enqueuedOrder;
}

- (id)init;
- (void).cxx_destruct;
- (void)enqueueDownloadsForVideoManagedObjects:(id)a0;
- (void)handleErrors:(id)a0;
- (void)removeDownloadsForVideoManagedObjects:(id)a0;

@end
