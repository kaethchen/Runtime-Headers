@class NSColor;

@interface VUIMonogramViewConfiguration : NSObject <NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) NSColor *unfocusedBgColor;
@property (retain, nonatomic) NSColor *focusedBgColor;
@property (readonly, nonatomic) double unfocusedImageAlpha;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic) double focusedShadowAlpha;
@property (nonatomic) long long titleTextStyle;
@property (retain, nonatomic) NSColor *titleUnfocusedColor;
@property (retain, nonatomic) NSColor *titleFocusedColor;
@property (nonatomic) long long subtitleTextStyle;
@property (retain, nonatomic) NSColor *subtitleUnfocusedColor;
@property (retain, nonatomic) NSColor *subtitleFocusedColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (id)focusedShadowImage;
- (id)initWithShadowImages:(BOOL)a0;
- (id)unfocusedShadowImage;

@end
