@interface NSToolbarItemGroupPickerExpandedView : NSSegmentedControl

+ (Class)cellClass;

- (BOOL)hasMenuDelayForSegment:(long long)a0;
- (void)setHasMenuDelay:(BOOL)a0 forSegment:(long long)a1;

@end
