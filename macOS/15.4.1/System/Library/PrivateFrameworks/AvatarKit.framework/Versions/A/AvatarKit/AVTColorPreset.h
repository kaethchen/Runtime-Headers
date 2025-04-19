@class NSString, NSImage, NSDictionary, AVTVaryingColor, AVTMaterial;

@interface AVTColorPreset : NSObject {
    long long _category;
    NSDictionary *_propertyColors;
    NSDictionary *_derivedColors;
    AVTVaryingColor *_previewColor;
    AVTVaryingColor *_previewAccentColor;
    unsigned long long _previewAccentType;
    float _variation;
    AVTMaterial *_material;
}

@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) NSImage *thumbnail;
@property (readonly) long long category;
@property (readonly) float variation;

+ (id)colorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)colorPresetsForCategory:(long long)a0;
+ (id)_colorPresetsForCategory:(long long)a0 palette:(id)a1;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1 colorIndex:(unsigned long long)a2 variation:(float)a3;
+ (id)colorPresetsForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)fallbackColorPresetForNilPresetAndCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)secondaryColorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)secondaryColorPresetsForCategory:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)baseColor;
- (id)colorPresetWithVariation:(float)a0;
- (id)derivedColorNameForPresetCategory:(long long)a0;
- (void)enumerateDerivedColorPresetsUsingBlock:(id /* block */)a0;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1 withSkinColor:(id)a2;
- (id)initWithCategory:(long long)a0 description:(id)a1;
- (BOOL)isNaturalLipsColor;
- (id)makeMaterial;
- (id)previewAccentColor;
- (id)previewColor;
- (void)renderColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (BOOL)shouldBlendWithSkinColor;

@end
