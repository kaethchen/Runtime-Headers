@class NSString, NSData, XNNote;

@interface XNAttachment : XNManagedObject

@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) XNNote *note;

+ (id)attachmentWithContentID:(id)a0;
+ (id)createAttachmentWithContentID:(id)a0 filename:(id)a1 data:(id)a2 note:(id)a3;

- (void).cxx_destruct;

@end
