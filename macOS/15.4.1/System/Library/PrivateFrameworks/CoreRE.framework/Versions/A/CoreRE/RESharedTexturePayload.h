@class NSString, MTLSharedTextureHandle;

@interface RESharedTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) MTLSharedTextureHandle *handle;
@property (readonly, nonatomic) BOOL isLimitedRenderAsset;
@property (readonly, nonatomic) unsigned long long semantic;
@property (readonly, nonatomic) NSString *colorSpace;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)hasSameUnderlyingIOSurface:(id)a0;
- (id)initWithTexture:(id)a0 isLimitedRenderAsset:(BOOL)a1 semantic:(unsigned long long)a2 colorSpace:(id)a3;

@end
