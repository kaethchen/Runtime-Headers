@interface PXFocusSettings : PXSettings

@property (nonatomic) double focusAnimationPadding;
@property (nonatomic) long long focusAnimationStyle;
@property (nonatomic) double pressedAnimationPadding;
@property (nonatomic) long long pressedAnimationStyle;
@property (nonatomic) BOOL hideFocusRing;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
