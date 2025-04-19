@interface SOAddRemoveActionBar : NSSegmentedControl

+ (Class)cellClass;

- (id)accessibilityIdentifier;
- (BOOL)isConfigEnabled;
- (BOOL)isRemoveEnabled;
- (BOOL)isAddEnabled;
- (BOOL)isAddSelected;
- (BOOL)isConfigSelected;
- (BOOL)isRemoveSelected;
- (void)setAddEnabled:(BOOL)a0;
- (void)setConfigEnabled:(BOOL)a0;
- (void)setRemoveEnabled:(BOOL)a0;

@end
