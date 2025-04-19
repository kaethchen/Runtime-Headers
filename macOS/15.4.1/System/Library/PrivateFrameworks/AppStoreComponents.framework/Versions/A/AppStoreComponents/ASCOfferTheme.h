@class ASCOfferBackgroundStyle, NSColor;

@interface ASCOfferTheme : NSObject <NSCopying>

@property (class, readonly) ASCOfferTheme *loadingTheme;
@property (class, readonly) ASCOfferTheme *whiteOnGrayTheme;
@property (class, readonly) ASCOfferTheme *essoTheme;
@property (class, readonly) ASCOfferTheme *viewInAppStoreTheme;
@property (class, readonly) ASCOfferTheme *grayTheme;
@property (class, readonly) ASCOfferTheme *blueTheme;
@property (class, readonly) ASCOfferTheme *whiteTheme;
@property (class, readonly) ASCOfferTheme *adTheme;
@property (class, readonly) ASCOfferTheme *primaryTheme;
@property (class, readonly) ASCOfferTheme *secondaryTheme;

@property (readonly, retain, nonatomic) ASCOfferBackgroundStyle *backgroundStyle;
@property (readonly, nonatomic) NSColor *titleBackgroundColor;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *titleTextDisabledColor;
@property (readonly, nonatomic) NSColor *subtitleTextColor;
@property (readonly, nonatomic) NSColor *iconTintColor;
@property (readonly, nonatomic) NSColor *progressColor;
@property (readonly, nonatomic) double progressLineWidth;
@property (readonly, nonatomic) int progressLineCap;
@property (readonly, nonatomic) double stopIndicatorRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } stopIndicatorCornerSize;

+ (id)confirmationForTheme:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)clone;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 subtitleTextColor:(id)a2 iconTintColor:(id)a3 progressColor:(id)a4;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 titleTextDisabledColor:(id)a2 subtitleTextColor:(id)a3 iconTintColor:(id)a4 progressColor:(id)a5;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 titleTextDisabledColor:(id)a2 subtitleTextColor:(id)a3 iconTintColor:(id)a4 progressColor:(id)a5 progressLineWidth:(double)a6 progressLineCap:(int)a7 stopIndicatorRatio:(double)a8 stopIndicatorCornerSize:(struct CGSize { double x0; double x1; })a9 backgroundStyle:(id)a10;
- (id)offerThemeWithBackgroundStyle:(id)a0;
- (id)offerThemeWithProgressLineCap:(int)a0;
- (id)offerThemeWithProgressLineWidth:(double)a0;
- (id)offerThemeWithStopIndicatorRatio:(double)a0;

@end
