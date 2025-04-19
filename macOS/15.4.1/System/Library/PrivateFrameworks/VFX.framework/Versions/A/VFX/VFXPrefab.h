@class VFXPrefabAsset;

@interface VFXPrefab : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXPrefabAsset *source;

+ (id)prefabWithAsset:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)reload:(id)a0 options:(unsigned long long)a1;

@end
