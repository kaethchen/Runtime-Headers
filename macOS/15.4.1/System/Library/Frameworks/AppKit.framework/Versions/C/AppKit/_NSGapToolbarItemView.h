@class NSView;

@interface _NSGapToolbarItemView : NSView

@property (weak) NSView *proxyView;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
