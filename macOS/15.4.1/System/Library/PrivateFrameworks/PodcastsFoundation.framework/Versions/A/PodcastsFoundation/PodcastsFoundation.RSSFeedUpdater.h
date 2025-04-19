@interface PodcastsFoundation.RSSFeedUpdater : NSObject <MTRestorableBackgroundSession, MTExternalFeedDownloaderDelegate, MTRestorableBackgroundSession> {
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ feedQueue;
    void /* unknown type, empty encoding */ ctx;
    void /* unknown type, empty encoding */ ingesterProvider;
    void /* unknown type, empty encoding */ externalFeedDownloader;
    void /* unknown type, empty encoding */ pendingRestorationQueue;
    void /* unknown type, empty encoding */ requests;
}

@property (nonatomic, copy) id /* block */ sessionCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)didDownloadFeedWithError:(id)a0 data:(id)a1 task:(id)a2 requestedUrl:(id)a3 useBackgroundFetch:(BOOL)a4;
- (void)didRestoreFeedUrlTask:(id)a0;
- (void)performOnFeedProcessingQueue:(id /* block */)a0;

@end
