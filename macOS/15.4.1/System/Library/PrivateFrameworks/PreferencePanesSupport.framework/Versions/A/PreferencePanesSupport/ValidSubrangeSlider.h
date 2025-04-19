@interface ValidSubrangeSlider : NSUpActionSlider

+ (void)initialize;

- (void)awakeFromNib;
- (void)constrainFinalValue;
- (void)constrainValueWhileDragging;
- (double)maxValidValue;
- (double)minValidValue;
- (void)setMaxValidValue:(double)a0;
- (void)setMinValidValue:(double)a0;

@end
