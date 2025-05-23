@interface AMPPercentageWatchedView : NSView

@property (nonatomic) double percentageViewed;

+ (void)initialize;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)valueClassForBinding:(id)a0;
- (id)propertyKeysForViewSpy;

@end
