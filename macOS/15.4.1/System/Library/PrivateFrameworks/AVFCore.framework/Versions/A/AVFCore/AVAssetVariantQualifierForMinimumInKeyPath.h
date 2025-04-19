@class FigAssetVariantQualifierForMinimumInKeyPathObjC;

@interface AVAssetVariantQualifierForMinimumInKeyPath : AVAssetVariantQualifier <NSSecureCoding> {
    FigAssetVariantQualifierForMinimumInKeyPathObjC *_figAssetVariantQualifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateKeyPath:(id)a0;
- (id)_figAssetVariantQualifier;
- (id)initWithFigAssetVariantQualifierForMinimumInKeyPath:(id)a0;

@end
