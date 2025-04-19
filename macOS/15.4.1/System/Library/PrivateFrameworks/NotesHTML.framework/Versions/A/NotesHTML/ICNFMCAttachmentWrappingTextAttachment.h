@class ICNFMCAttachment;

@interface ICNFMCAttachmentWrappingTextAttachment : NSTextAttachment

@property (readonly, nonatomic) ICNFMCAttachment *messageAttachment;

- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)a0;
- (id)initWithAttachment:(id)a0;

@end
