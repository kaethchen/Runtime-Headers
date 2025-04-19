@class NSString;

@interface FigAssetVariantQualifierForMinimumInKeyPathObjC : FigAssetVariantQualifierObjC <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_keyPath;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0;

@end
