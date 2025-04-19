@class NSColor, NSFont;

@interface AKAnnotationTheme : NSObject

@property (nonatomic) int pageTheme;
@property (readonly, nonatomic) int annotationStyle;
@property (readonly, nonatomic) BOOL isUnderline;
@property (readonly, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) NSColor *noteFillColor;
@property (readonly, nonatomic) NSColor *noteBorderColor;
@property (readonly, nonatomic) double noteShadowRadius;
@property (readonly, nonatomic) double noteShadowOpacity;
@property (readonly, nonatomic) NSColor *noteShadowColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } noteShadowOffset;
@property (readonly, nonatomic) NSColor *notesSidebarBarColor;
@property (readonly, nonatomic) NSColor *notesSidebarTextColor;
@property (readonly, nonatomic) NSFont *noteTextFont;
@property (readonly, nonatomic) NSFont *noteTextFontInTable;
@property (readonly, nonatomic) NSColor *noteTextColor;
@property (readonly, nonatomic) NSColor *noteMarkerFillColor;
@property (readonly, nonatomic) NSColor *noteMarkerBorderColor;
@property (readonly, nonatomic) NSColor *noteMarkerStrikethroughColor;

+ (id)underlineTheme:(int)a0;
+ (id)blueTheme:(int)a0;
+ (id)colorForAnnotationStyle:(int)a0 propertyName:(id)a1 pageTheme:(int)a2;
+ (id)colorForThemeItem:(id)a0 pageTheme:(int)a1;
+ (id)greenTheme:(int)a0;
+ (id)highlightTextColor:(int)a0;
+ (id)pinkTheme:(int)a0;
+ (id)purpleTheme:(int)a0;
+ (id)theme:(int)a0;
+ (id)themeDescriptions;
+ (id)themeForAnnotationStyle:(int)a0 pageTheme:(int)a1;
+ (id)themeForAnnotationStyle:(int)a0 pageTheme:(int)a1 isUnderline:(BOOL)a2;
+ (id)themeItemForAnnotationStyle:(int)a0 propertyName:(id)a1;
+ (id)yellowTheme:(int)a0;

@end
