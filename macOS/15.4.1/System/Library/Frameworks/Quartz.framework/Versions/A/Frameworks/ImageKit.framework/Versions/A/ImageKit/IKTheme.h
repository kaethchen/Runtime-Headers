@class NSColor, NSDictionary, NSGradient;

@interface IKTheme : NSObject {
    NSDictionary *_contents;
}

@property (readonly) NSGradient *active1Gradient;
@property (readonly) NSGradient *active2Gradient;
@property (readonly) NSGradient *selectedActiveGradient;
@property (readonly) NSGradient *glassGradient;
@property (readonly) NSGradient *selectedGlassGradient;
@property (readonly) NSGradient *scopeBar1Gradient;
@property (readonly) NSGradient *scopeBar2Gradient;
@property (readonly) NSGradient *inactiveGradient;
@property (readonly) NSGradient *iconGradient;
@property (readonly) NSGradient *selectedIconGradient;
@property (readonly) NSGradient *tabBackgroundGradient;
@property (readonly) NSGradient *selectedTabBackgroundGradient;
@property (readonly) NSGradient *pressedTabBackgroundGradient;
@property (readonly) NSGradient *selectedTabBorderOuterGradient;
@property (readonly) NSGradient *selectedTabBorderInnerGradient;
@property (readonly) NSGradient *pathSeparatorGradient;
@property (readonly) NSGradient *pathSeparatorHighlightGradient;
@property (readonly) NSGradient *buttonSeparatorGradient;
@property (readonly) NSGradient *buttonSeparatorHighlightGradient;
@property (readonly) NSColor *windowBackgroundColor;
@property (readonly) NSColor *blackColor;
@property (readonly) NSColor *whiteColor;
@property (readonly) NSColor *active1Color;
@property (readonly) NSColor *active2Color;
@property (readonly) NSColor *inactiveColor;
@property (readonly) NSColor *background1Color;
@property (readonly) NSColor *background2Color;
@property (readonly) NSColor *stroke1Color;
@property (readonly) NSColor *stroke2Color;
@property (readonly) NSColor *stroke3Color;
@property (readonly) NSColor *stroke4Color;
@property (readonly) NSColor *stroke5Color;
@property (readonly) NSColor *stroke6Color;
@property (readonly) NSColor *stroke7Color;
@property (readonly) NSColor *parameterTextColor;
@property (readonly) NSColor *whiteShadow1Color;
@property (readonly) NSColor *whiteShadow2Color;
@property (readonly) NSColor *blackShadow1Color;
@property (readonly) NSColor *blackShadow2Color;
@property (readonly) NSColor *glassSeparatorColor;
@property (readonly) NSColor *horizontalGrooved1;
@property (readonly) NSColor *horizontalGrooved2;
@property (readonly) NSGradient *horizontalSeparatorTaperedGradient;

+ (id)currentTheme;
+ (id)_loadThemeFromURL:(id)a0 error:(id *)a1;
+ (id)_parseColorElement:(id)a0 requireName:(BOOL)a1 name:(id *)a2 allowLocation:(BOOL)a3 location:(double *)a4 error:(id *)a5;
+ (id)_parseFontElement:(id)a0 name:(id *)a1 error:(id *)a2;
+ (id)_parseGradientElement:(id)a0 name:(id *)a1 error:(id *)a2;
+ (id)_parseInsetElement:(id)a0 name:(id *)a1 error:(id *)a2;

- (id)_initWithDictionary:(id)a0;

@end
