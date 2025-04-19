@interface SCRLevelIndicator : SCRSlider

- (id)valueDescription;
- (id)statusDescription;
- (BOOL)isInteractive;
- (BOOL)canHandleValueChange;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementLarge;
- (BOOL)incrementSmall;

@end
