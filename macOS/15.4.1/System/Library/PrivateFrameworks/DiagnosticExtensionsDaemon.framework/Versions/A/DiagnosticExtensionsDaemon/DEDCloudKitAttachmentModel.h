@class NSURL, NSNumber, NSString;

@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel

@property (retain) NSURL *url;
@property (retain) NSNumber *fileSize;
@property (retain) NSString *queueItem;

- (void).cxx_destruct;
- (id)modelName;
- (id)initWithURL:(id)a0 withQueueItem:(id)a1 parameters:(id)a2;

@end
