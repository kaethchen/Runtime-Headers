@class IFColor, NSArray, IFGraphicSymbolOverride, NSString;

@interface IFGraphicSymbolDescriptor : IFSymbolImageDescriptor <NSCopying>

@property (nonatomic) long long fill;
@property (nonatomic) long long resolvedShape;
@property (nonatomic) long long resolvedSymbolEffect;
@property (nonatomic) long long resolvedEnclosureEffect;
@property (nonatomic) long long resolvedFill;
@property (copy, nonatomic) NSArray *_processedSymbolColors;
@property (copy, nonatomic) NSArray *_processedEnclosureColors;
@property (copy, nonatomic) NSArray *resolvedSymbolColors;
@property (copy, nonatomic) NSArray *resolvedEnclosureColors;
@property (nonatomic) double resolvedBorderWidth;
@property (retain, nonatomic) IFColor *resolvedBorderColor;
@property (retain) IFGraphicSymbolOverride *symbolOverride;
@property (nonatomic) BOOL flipXOffsetOverride;
@property (retain, nonatomic) NSString *resolvedName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long appearance;
@property (nonatomic) long long contrast;
@property (nonatomic) long long vibrancy;
@property (nonatomic) struct CGSize { double width; double height; } symbolOffset;
@property (nonatomic) long long symbolEffect;
@property (nonatomic) long long enclosureEffect;
@property (nonatomic) BOOL debugColourSet;
@property (nonatomic) long long shape;
@property (retain, nonatomic) IFColor *tintColor;
@property (nonatomic) long long appearanceVariant;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSArray *enclosureColors;
@property (copy, nonatomic) NSArray *symbolColors;
@property (nonatomic) long long renderingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)pointSize;
- (BOOL)_addDarkModeBorder;
- (BOOL)_addLightModeBorder;
- (id)_colorForIFSystemColor:(long long)a0;
- (id)_debugDynamicGraphicIconColor;
- (id)_defaultEnclosureColor;
- (id)_defaultSymbolColor;
- (BOOL)_isDebugGraphicIconColourEnabled;
- (id)_resolvedColorsForColors:(id)a0 defaultColor:(id /* block */)a1;
- (void)checkForSymbolOverride;
- (BOOL)isExtendedAppearanceVariant;
- (long long)resolvedRenderingModeFromSuggestedMode:(long long)a0;
- (unsigned long long)symbolSize;
- (long long)symbolWeight;

@end
