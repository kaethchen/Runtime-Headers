@class NSString, NSProgress, NSOperationQueue, MFLibraryMessage, NSLock, NSMutableDictionary;

@interface MFRemoteAttachmentDataSource : NSObject <MCRemoteAttachmentDataSource> {
    NSLock *_attachmentFetchLock;
    NSMutableDictionary *_completionBlocksByMimePartNumber;
}

@property (readonly, nonatomic) MFLibraryMessage *message;
@property (readonly, nonatomic) NSOperationQueue *attachmentFetchCompletionQueue;
@property (readonly, nonatomic) NSProgress *downloadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteAttachmentDataSourceForMessage:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (void)attachmentBecameAvailable:(id)a0;
- (void)fetchAttachmentForAccessLevel:(long long)a0 mimePartNumber:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
