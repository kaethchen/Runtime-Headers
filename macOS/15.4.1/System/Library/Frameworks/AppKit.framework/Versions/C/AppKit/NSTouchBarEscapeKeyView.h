@class NSView;

@interface NSTouchBarEscapeKeyView : NSView {
    NSView *_itemView;
}

@property (retain) NSView *itemView;
@property BOOL isSystemCloseButton;
@property (readonly) struct CGSize { double width; double height; } preferredSize;

- (void)dealloc;
- (void)_subview:(id)a0 valueOfVariable:(id)a1 didChangeInEngine:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
