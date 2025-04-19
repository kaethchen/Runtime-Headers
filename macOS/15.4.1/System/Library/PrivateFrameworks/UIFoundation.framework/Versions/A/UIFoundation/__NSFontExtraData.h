@class __NSFontTypefaceInfo, NSString;

@interface __NSFontExtraData : NSObject {
    double _ascender;
    double _lineHeight;
    struct { unsigned char _isSystemFont : 1; unsigned char _isIBScaledFont : 1; unsigned char _hasVerticalMetrics : 2; unsigned char _isUIFont : 1; unsigned char _renderingMode : 3; unsigned char _systemFontType : 8; unsigned char _appearanceSize : 1; unsigned char _forceAscenderDelta : 1; unsigned char _isHiragino : 1; } _fFlags;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _matrix;
    double _defaultLineHeight;
    double _defaultLineHeightForUI;
    double _ascenderDelta;
    __NSFontTypefaceInfo *_typeface;
    double *_glyphAdvancementCache;
    id _key;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)_isUIFont;
- (BOOL)_hasVerticalMetricsWithPlatformFont:(struct __CTFont { } *)a0;
- (BOOL)isEqualToExtraData:(id)a0;

@end
