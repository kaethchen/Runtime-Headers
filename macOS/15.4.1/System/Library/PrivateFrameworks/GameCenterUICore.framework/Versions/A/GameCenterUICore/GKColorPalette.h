@class NSColor;

@interface GKColorPalette : NSObject

@property (readonly) NSColor *primaryTextColor;
@property (readonly) NSColor *standardTextColor;
@property (readonly) NSColor *disabledTextColor;
@property (readonly) NSColor *emphasizedTextColor;
@property (readonly) NSColor *selectedTextColor;
@property (readonly) NSColor *removeItemTextColor;
@property (readonly) NSColor *textOnDarkBackgroundColor;
@property (readonly) NSColor *emphasizedTextOnDarkBackgroundColor;
@property (readonly) NSColor *systemInteractionColor;
@property (readonly) NSColor *disabledButtonTitleColor;
@property (readonly) int windowBackgroundBlurStyle;
@property (readonly) NSColor *windowBackgroundColor;
@property (readonly) NSColor *viewBackgroundColor;
@property (readonly) NSColor *opaqueViewBackgroundColor;
@property (readonly) NSColor *floatingHeaderViewBackgroundColor;
@property (readonly) NSColor *pinnedHeaderViewBackgroundColor;
@property (readonly) NSColor *activityIndicatorColor;
@property (readonly) NSColor *selectedCellBackgroundColor;
@property (readonly) NSColor *separatorLineColor;
@property (readonly) NSColor *friendTintColor;
@property (readonly) NSColor *friendRequestTintColor;
@property (readonly) NSColor *friendRequestCaptionTintColor;
@property (readonly) NSColor *localPlayerTintColor;
@property (readonly) NSColor *challengesTintColor;
@property (readonly) NSColor *shareTintColor;
@property (readonly) NSColor *cellActionDestructiveColor;
@property (readonly) NSColor *cellActionColor;

+ (id)sharedPalette;
+ (id)paletteFromImage:(id)a0;

@end
