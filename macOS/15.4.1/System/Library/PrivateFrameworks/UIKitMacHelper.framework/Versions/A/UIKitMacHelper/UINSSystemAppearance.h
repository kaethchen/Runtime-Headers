@interface UINSSystemAppearance : NSObject <UINSSystemAppearance>

@property (readonly, nonatomic) id encodedTextHighlightColor;
@property (readonly, nonatomic) id encodedDarkTextHighlightColor;
@property (readonly, nonatomic) id encodedUnemphasizedTextHighlightColor;
@property (readonly, nonatomic) id encodedDarkUnemphasizedTextHighlightColor;
@property (readonly, nonatomic) id encodedTableHighlightColor;
@property (readonly, nonatomic) id encodedDarkTableHighlightColor;
@property (readonly, nonatomic) id encodedSelectionMaterialTintColor;
@property (readonly, nonatomic) id encodedDarkSelectionMaterialTintColor;
@property (readonly, nonatomic) id encodedKeyboardFocusIndicatorColor;
@property (readonly, nonatomic) id encodedDarkKeyboardFocusIndicatorColor;
@property (readonly, nonatomic) unsigned long long scrollerStyle;
@property (readonly, nonatomic) unsigned long long scrollBarClickBehavior;
@property (readonly, nonatomic) BOOL hasDarkWindowChrome;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldIncreaseContrast;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldReduceMotion;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldInvertColors;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldReduceTransparency;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldUseGrayscale;
@property (readonly, nonatomic) BOOL accessibilityDisplayShouldDifferentiateWithoutColor;
@property (readonly, nonatomic) BOOL accessibilityIsVoiceOverEnabled;
@property (readonly, nonatomic) BOOL accessibilityIsSwitchControlEnabled;
@property (readonly, nonatomic) BOOL accessibilityIsZoomEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;

@end
