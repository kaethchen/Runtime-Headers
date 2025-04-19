@class NSString, NSColor;

@interface ASCStaticLockupTheme : NSObject <ASCLockupTheme, NSCopying>

@property (copy, nonatomic) NSString *titleTextStyle;
@property (nonatomic) double titleFontWeight;
@property (nonatomic) unsigned int titleTraits;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (nonatomic) double subtitleFontWeight;
@property (nonatomic) unsigned int subtitleTraits;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (nonatomic) double headingFontWeight;
@property (nonatomic) unsigned int headingTraits;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *subtitleTextColor;
@property (readonly, nonatomic) NSColor *headingTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyToLockupContentView:(id)a0 compatibleWithTraitCollection:(id)a1;
- (id)headingFontCompatibleWithTraitCollection:(id)a0;
- (id)initWithTitleTextColor:(id)a0 titleTextStyle:(id)a1 titleFontWeight:(double)a2 titleTraits:(unsigned int)a3 subtitleTextColor:(id)a4 subtitleTextStyle:(id)a5 subtitleFontWeight:(double)a6 subtitleTraits:(unsigned int)a7 headingTextColor:(id)a8 headingTextStyle:(id)a9 headingFontWeight:(double)a10 headingTraits:(unsigned int)a11;
- (id)subtitleFontCompatibleWithTraitCollection:(id)a0;
- (id)titleFontCompatibleWithTraitCollection:(id)a0;

@end
