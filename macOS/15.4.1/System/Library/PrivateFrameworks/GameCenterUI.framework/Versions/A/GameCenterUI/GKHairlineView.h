@interface GKHairlineView : NSView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (id)init;
- (void)awakeFromNib;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;

@end
