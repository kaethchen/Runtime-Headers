@class NSViewTextAttachmentCell;

@interface NSTextAttachmentCellViewProvider : NSTextAttachmentViewProvider

@property (readonly) NSViewTextAttachmentCell *textAttachmentCell;

- (void)dealloc;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;
- (void)loadView;

@end
