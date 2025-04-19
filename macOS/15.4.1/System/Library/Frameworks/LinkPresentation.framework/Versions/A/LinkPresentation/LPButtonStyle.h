@class LPCircularProgressIndicatorStyle, LPPadding, LPPointUnit, NSImageSymbolConfiguration, NSFont, NSColor;

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) NSColor *foregroundColor;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *menuBackgroundColor;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSFont *menuFont;
@property (retain, nonatomic) NSImageSymbolConfiguration *symbolConfiguration;
@property (retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPadding *margin;
@property (retain, nonatomic) LPPointUnit *imagePadding;
@property (retain, nonatomic) LPPointUnit *menuMinimumWidth;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *minimumHeight;
@property (retain, nonatomic) LPPointUnit *height;
@property (retain, nonatomic) LPPointUnit *additionalVerticalPadding;
@property (retain, nonatomic) LPPointUnit *indicatorSpacing;
@property (retain, nonatomic) LPCircularProgressIndicatorStyle *progressIndicatorStyle;
@property (nonatomic) BOOL ignoresInvertColors;
@property (nonatomic) BOOL enableUserInteractionForDecorativeButton;
@property (nonatomic) BOOL showsChevronForSingleAction;
@property (nonatomic) BOOL useSystemButtonAppearance;
@property (nonatomic) BOOL useSegmentedControl;
@property (nonatomic) BOOL prefersBehavioralStylePad;
@property (nonatomic) long long behavior;

+ (id)systemPillButtonStyleForPlatform:(long long)a0 sizeClass:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0;

@end
