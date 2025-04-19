@class NSScrollView;

@interface _NSScrollViewLayoutHelper : NSObject {
    NSScrollView *_scrollView;
}

@property (readonly) struct CGSize { double width; double height; } documentMinimumSize;
@property double findBarDesiredHeight;
@property (readonly) BOOL hScrollerShown;
@property (readonly) BOOL vScrollerShown;
@property (readonly) BOOL cornerShown;
@property (readonly) BOOL contentsExtendUnderInsets;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vRulerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hRulerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } findBarFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } insetContentFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vScrollerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hScrollerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vLegacyScrollerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hLegacyScrollerFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cornerFrame;
@property (readonly) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentViewInsets;

- (id)initWithScrollView:(id)a0;
- (void)updateLayoutWithMinimumDocumentFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
