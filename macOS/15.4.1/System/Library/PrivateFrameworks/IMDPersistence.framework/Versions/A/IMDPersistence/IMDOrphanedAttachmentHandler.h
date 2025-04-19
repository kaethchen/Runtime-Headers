@protocol IMDFileManager;

@interface IMDOrphanedAttachmentHandler : NSObject

@property (readonly, nonatomic) unsigned int maxCleanseIterations;
@property (retain, nonatomic) id<IMDFileManager> fileManager;

- (void)dealloc;
- (id)init;
- (id)initWithFileManager:(id)a0;
- (void)_cleanseOrphanedAttachmentsWithEnumerator:(id)a0 atPath:(id)a1;
- (void)cleanseOrphanedAttachments;
- (void)cleanseOrphanedAttachmentsInDirectoryAtPath:(id)a0;

@end
