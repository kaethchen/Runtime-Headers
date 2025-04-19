@class NSAttributedString, NSToolTip;

@interface NSCustomToolTipDrawView : NSView

@property (retain) NSToolTip *toolTipObject;
@property (copy) NSAttributedString *attributedString;
@property struct CGSize { double width; double height; } margin;

- (void)dealloc;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
