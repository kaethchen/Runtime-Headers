@class NSString, MPModelLibraryDownloadQueueRequest, MPModelLibraryDownloadQueueResponse;

@interface MusicKit_SoftLinking_MPModelLibraryDownloadQueueRequest : NSObject {
    MPModelLibraryDownloadQueueRequest *_underlyingDownloadQueueRequest;
    MPModelLibraryDownloadQueueResponse *_underlyingUpdatedResponse;
}

@property (class, readonly, nonatomic) NSString *downloadQueueDidChangeNotificationName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)_handleDownloadQueueDidChangeNotification:(id)a0;

@end
