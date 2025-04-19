@interface RolloverTextButtonCell : NSButtonCell

@property (readonly, nonatomic) BOOL shouldDrawFocusRing;

- (BOOL)_shouldDrawBezel;

@end
