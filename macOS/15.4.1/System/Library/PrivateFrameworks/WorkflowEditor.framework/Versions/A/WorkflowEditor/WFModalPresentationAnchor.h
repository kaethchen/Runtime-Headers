@class NSView;

@interface WFModalPresentationAnchor : NSObject

@property (readonly, nonatomic) NSView *sourceView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
