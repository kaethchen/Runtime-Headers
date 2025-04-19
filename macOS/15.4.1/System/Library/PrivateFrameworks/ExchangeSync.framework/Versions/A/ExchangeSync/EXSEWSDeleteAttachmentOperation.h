@class EXSAttachment;

@interface EXSEWSDeleteAttachmentOperation : EXSEWSOperation

@property (retain, nonatomic) EXSAttachment *attachment;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
