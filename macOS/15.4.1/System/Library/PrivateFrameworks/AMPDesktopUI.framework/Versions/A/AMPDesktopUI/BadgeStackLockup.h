@class NSColor, NSFont;

@interface BadgeStackLockup : NSView

@property (readonly, nonatomic) BOOL showDigitalExtra;
@property (readonly, nonatomic) BOOL showDigitalBooklet;
@property (readonly, nonatomic) BOOL show4k;
@property (readonly, nonatomic) BOOL showHDR;
@property (readonly, nonatomic) BOOL showHD;
@property (readonly, nonatomic) BOOL showVideo;
@property (readonly, nonatomic) BOOL showHDSDCombo;
@property (readonly, nonatomic) BOOL showVision;
@property (readonly, nonatomic) BOOL showDolbyAudio;
@property (readonly, nonatomic) BOOL showAtmos;
@property (readonly, nonatomic) BOOL showURLExtra;
@property (readonly, nonatomic) BOOL showClosedCaptioning;
@property (readonly, nonatomic) BOOL showDigitalMaster;
@property (readonly, nonatomic) BOOL showLossless;
@property (readonly, nonatomic) BOOL showHiResLossless;
@property (readonly, nonatomic) BOOL showSpatialAudio;
@property (nonatomic) BOOL includeAudioBadges;
@property (nonatomic) BOOL showsAudioBadges;
@property (copy, nonatomic) NSFont *actualFont;
@property (copy, nonatomic) NSColor *actualTextColor;
@property (nonatomic) unsigned long long visibleFlags;
@property (nonatomic) BOOL useBulletSeparator;
@property (copy, nonatomic) NSFont *font;
@property (copy, nonatomic) NSColor *textColor;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)keyPathsForValuesInvalidatingConstraints;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(BOOL)a0;
- (void)setNilValueForKey:(id)a0;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)commonInit;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)updateConstraints;
- (Class)valueClassForBinding:(id)a0;
- (void)clearAllBadges;
- (id)propertyKeysForViewSpy;

@end
