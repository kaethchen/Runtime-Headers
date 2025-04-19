@class NSMutableSet, FPItemID;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>

@property (class, readonly) NSMutableSet *knownFileProviderIdentifiersSoFar;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) FPItemID *itemID;

+ (Class)versionedFileIdentifierClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemID:(id)a0;

@end
