@interface _NSQuickLookTouchBarPanel : NSPanel

+ (BOOL)_hiddenInWindowList;

- (BOOL)_isEffectivelyVisible;
- (double)backingScaleFactor;
- (id)colorSpace;
- (BOOL)hasKeyAppearance;
- (BOOL)isVisible;
- (BOOL)worksWhenModal;

@end
