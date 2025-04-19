@interface AXSSAddRemoveBar : NSSegmentedControl

+ (Class)cellClass;

- (void)awakeFromNib;
- (BOOL)isConfigEnabled;
- (BOOL)isRemoveEnabled;
- (BOOL)isAddEnabled;
- (BOOL)isAddSelected;
- (BOOL)isConfigSelected;
- (BOOL)isRemoveSelected;
- (void)setAddEnabled:(BOOL)a0;
- (void)setConfigEnabled:(BOOL)a0;
- (void)setRemoveEnabled:(BOOL)a0;
- (void)setAddSegmentAccessibilityDescription:(id)a0;
- (void)setConfigSegmentAccessibilityDescription:(id)a0;
- (void)setRemoveSegmentAccessibilityDescription:(id)a0;

@end
