@class NSView, NSViewTextAttachmentCell, NSLayoutManager;

@interface NSViewTextAttachmentCellHelper : NSObject {
    NSView *_view;
    NSViewTextAttachmentCell *_attachmentCell;
    NSLayoutManager *_layoutManager;
}

- (void)dealloc;
- (id)view;
- (void)setView:(id)a0;
- (id)initWithView:(id)a0 layoutManager:(id)a1 characterIndex:(unsigned long long)a2 attachmentCell:(id)a3;
- (void)removeView;

@end
