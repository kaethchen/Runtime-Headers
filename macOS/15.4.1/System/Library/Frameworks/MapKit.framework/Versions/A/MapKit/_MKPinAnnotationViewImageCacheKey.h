@class NSColor, NSString;

@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    unsigned long long _mapType;
    NSColor *_pinColor;
    NSString *_appearanceName;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMapType:(unsigned long long)a0 pinColor:(id)a1 effectiveAppearance:(id)a2;

@end
