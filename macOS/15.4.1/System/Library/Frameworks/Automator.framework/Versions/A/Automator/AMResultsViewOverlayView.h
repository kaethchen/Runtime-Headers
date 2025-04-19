@class NSDictionary, NSString;

@interface AMResultsViewOverlayView : NSView

@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) BOOL drawBackground;
@property (copy, nonatomic) NSString *overlayString;

- (void).cxx_destruct;
- (BOOL)clipsToBounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
