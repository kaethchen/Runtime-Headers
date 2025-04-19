@class NSManagedObjectContext, ICAttachmentModel, NSManagedObjectID;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation

@property (retain) NSManagedObjectID *attachmentID;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithAttachmentManagedObjectID:(id)a0;

@end
