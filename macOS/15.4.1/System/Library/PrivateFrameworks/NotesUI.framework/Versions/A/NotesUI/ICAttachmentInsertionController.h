@class ICNote;
@protocol ICAttachmentInsertionDelegate;

@interface ICAttachmentInsertionController : NSObject

@property (weak, nonatomic) id<ICAttachmentInsertionDelegate> attachmentDelegate;
@property (readonly, weak, nonatomic) ICNote *note;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (id)addAttachment:(id)a0;
- (id)_addInlineAttachment:(id)a0 inTextStorage:(id)a1 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)addAttachment:(id)a0 atTextLocation:(unsigned long long)a1;
- (id)addAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)addInlineAttachment:(id)a0;
- (id)addInlineAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)addInlineAttachment:(id)a0 atTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2;

@end
