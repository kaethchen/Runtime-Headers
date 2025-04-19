@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;
+ (id)sharedDownloader;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;
- (void)downloadUndownloadedLegacyAttachments;
- (void)reachabilityChanged:(id)a0;
- (void)resumeDownloadsAfterDelay;

@end
