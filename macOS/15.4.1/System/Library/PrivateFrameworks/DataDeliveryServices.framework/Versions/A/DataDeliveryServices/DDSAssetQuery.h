@class DDSAttributeFilter, NSString;

@interface DDSAssetQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *cacheKey;
@property BOOL localOnly;
@property BOOL installedOnly;
@property BOOL latestOnly;
@property BOOL cachedOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (id)dumpDescription;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(BOOL)a2 installedOnly:(BOOL)a3 latestOnly:(BOOL)a4 cachedOnly:(BOOL)a5;
- (BOOL)isEqualToAssetQuery:(id)a0;

@end
