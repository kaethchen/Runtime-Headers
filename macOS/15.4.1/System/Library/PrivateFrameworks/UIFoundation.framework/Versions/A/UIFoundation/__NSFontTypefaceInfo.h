@class NSFontDescriptor, NSMapTable;

@interface __NSFontTypefaceInfo : NSObject {
    NSFontDescriptor *_normalizedFontDescriptor;
    NSMapTable *_liveInstances[3];
    struct __CFString { } *_postscriptName;
    struct __CFString { } *_familyName;
    struct CGSize { double x0; double x1; } *_verticalOriginDeltaCache;
    unsigned long long _hash;
    struct { unsigned char _isSymbol : 1; unsigned char _isDingbats : 1; unsigned char _isDefaultFixedPitch : 1; unsigned char _needValidation : 1; unsigned char _hasVerticalMetrics : 2; unsigned char _isSystemFont : 1; unsigned int _reserved : 25; } _tiFlags;
}

+ (void)initialize;
+ (id)typefaceInfoForFontDescriptor:(id)a0;
+ (id)typefaceInfoForKnownFontDescriptor:(id)a0;
+ (id)typefaceInfoForPostscriptName:(id)a0 options:(unsigned int)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)_postscriptName;
- (id)_familyName;
- (BOOL)_hasVerticalMetricsWithPlatformFont:(struct __CTFont { } *)a0;
- (BOOL)_isDefaultFixedPitch;
- (BOOL)_isDingbats;
- (BOOL)_isSymbol;
- (BOOL)_isSystemFont;
- (void)_setNeedsValidation:(BOOL)a0;
- (BOOL)_validate;
- (struct CGSize { double x0; double x1; } *)_verticalOriginDeltaCache:(long long)a0;
- (id)fontInstanceForFontDescriptor:(id)a0 size:(double)a1 affineTransform:(id)a2 renderingMode:(unsigned long long)a3;
- (id)fontInstanceForKey:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithFontDescriptor:(id)a0;
- (id)newFontInstanceForRenderingMode:(unsigned long long)a0 key:(id)a1;
- (struct __CTFont { } *)newPlatformFontWithKey:(id)a0;
- (id)normalizedFontDescriptor;

@end
