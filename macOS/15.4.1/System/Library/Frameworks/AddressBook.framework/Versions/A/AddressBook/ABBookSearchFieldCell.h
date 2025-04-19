@class NSProgressIndicator;

@interface ABBookSearchFieldCell : NSSearchFieldCell

@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) BOOL showsProgress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
