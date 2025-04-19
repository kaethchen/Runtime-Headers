@class NSView, NSArray, NSFindIndicator;
@protocol RVPresenterHighlightDelegate;

@interface RVPresentingContext : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _itemRectInView;
    NSFindIndicator *_highlight;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } itemRectInView;
@property (readonly, weak) id<RVPresenterHighlightDelegate> highlightDelegate;
@property (readonly, weak) NSView *view;
@property (readonly) NSArray *itemRectsInView;
@property (readonly) struct CGPoint { double x; double y; } pointerLocationInView;

- (void).cxx_destruct;
- (id)initWithPointerLocationInView:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 highlightDelegate:(id)a2;
- (unsigned long long)preferredEdge;
- (void)completeHighlightingItem:(id)a0;
- (void)highlightItem:(id)a0 withProgress:(double)a1;
- (void)highlightRangeChangedForItem:(id)a0;
- (void)startHighlightingItem:(id)a0;
- (void)stopHighlightingItem:(id)a0;
- (void)makeIndicatorWithDelegate:(id)a0 item:(id)a1;
- (void)removeIndicator;
- (void)drawAttributedStringItem:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightRectForAttributedStringItem:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;
- (void)restoreIndicator:(id)a0;
- (id)transferIndicator;
- (void)updateRectsWithItem:(id)a0;

@end
