@class MCFileWrapper, MCAttachment;

@interface MCAttachmentWrappingTextAttachment : NSTextAttachment

@property (retain) MCFileWrapper *fileWrapper;
@property (readonly, nonatomic) MCAttachment *messageAttachment;

- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)a0;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)initWithAttachment:(id)a0;

@end
