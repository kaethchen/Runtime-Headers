@class NSOperationQueue, NSMutableArray;

@interface MUIRemoteImageCollector : NSObject {
    NSMutableArray *_attachments;
}

@property (readonly, nonatomic) NSOperationQueue *downloadQueue;

- (id)init;
- (void).cxx_destruct;
- (void)downloadedAttachmentCompleted:(id)a0;
- (id)initWithAttachments:(id)a0;

@end
