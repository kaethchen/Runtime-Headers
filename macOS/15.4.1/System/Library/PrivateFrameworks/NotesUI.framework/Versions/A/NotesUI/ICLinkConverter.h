@class NSString, ICAttachmentInsertionController, ICTTTextStorage;

@interface ICLinkConverter : NSObject

@property (class, readonly, copy, nonatomic) NSString *convertAttachmentToLinkActionTitle;
@property (class, readonly, copy, nonatomic) NSString *convertAttachmentToLinkSystemImageName;
@property (class, readonly, copy, nonatomic) NSString *convertLinkToAttachmentActionTitle;
@property (class, readonly, copy, nonatomic) NSString *convertLinkToAttachmentSystemImageName;

@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (weak, nonatomic) ICAttachmentInsertionController *insertionController;

- (void).cxx_destruct;
- (BOOL)canConvertAttachmentToLink:(id)a0;
- (BOOL)canConvertLinkAtLocationToAttachment:(unsigned long long)a0;
- (void)convertAttachmentToLink:(id)a0;
- (void)convertLinkAtLocationToAttachment:(unsigned long long)a0;
- (id)initWithInsertionController:(id)a0;

@end
