@class NSString;
@protocol KHSelectableImageViewDelegate;

@interface KHSelectableImageView : NSImageView

@property BOOL selected;
@property BOOL acceptsFirstMouse;
@property BOOL showsSelectionLabel;
@property (copy) NSString *selectionLabel;
@property (weak) id<KHSelectableImageViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
