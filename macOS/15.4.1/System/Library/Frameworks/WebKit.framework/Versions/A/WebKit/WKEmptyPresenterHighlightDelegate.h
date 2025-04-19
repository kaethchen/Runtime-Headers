@class NSString;

@interface WKEmptyPresenterHighlightDelegate : NSObject <RVPresenterHighlightDelegate>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (BOOL)revealContext:(id)a0 shouldUseDefaultHighlightForItem:(id)a1;

@end
