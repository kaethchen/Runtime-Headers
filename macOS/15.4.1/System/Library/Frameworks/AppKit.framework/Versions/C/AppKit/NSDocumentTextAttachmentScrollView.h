@class NSView, NSImageView, NSLayoutManager;

@interface NSDocumentTextAttachmentScrollView : NSScrollView {
    NSImageView *_imageView;
    NSView *_expandedView;
    NSLayoutManager *_layoutManager;
    unsigned long long _charIndex;
    BOOL _isExpanded;
}

- (void)dealloc;
- (void)setImage:(id)a0;
- (id)image;
- (void)toggleExpanded:(id)a0;
- (unsigned long long)charIndex;
- (id)expandedView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isExpanded;
- (id)layoutManager;
- (void)setCharacterIndex:(unsigned long long)a0 layoutManager:(id)a1;
- (void)setExpanded:(BOOL)a0;
- (void)setExpandedView:(id)a0;

@end
