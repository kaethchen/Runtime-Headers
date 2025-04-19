@class NSUICollectionViewCell;

@interface GKShowcaseCellView : NSUICollectionReusableView

@property (retain, nonatomic) NSUICollectionViewCell *cell;
@property (nonatomic) SEL touchedShowcaseCellAction;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;

@end
