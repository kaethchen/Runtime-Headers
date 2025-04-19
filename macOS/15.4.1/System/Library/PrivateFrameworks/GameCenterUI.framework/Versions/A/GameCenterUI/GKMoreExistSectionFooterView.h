@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : NSUICollectionReusableView

@property (retain, nonatomic) GKLabel *label;
@property (retain, nonatomic) NSString *text;

+ (BOOL)requiresConstraintBasedLayout;
+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
