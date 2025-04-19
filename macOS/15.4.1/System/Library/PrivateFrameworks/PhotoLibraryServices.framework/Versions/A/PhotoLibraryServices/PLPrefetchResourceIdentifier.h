@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *assetUuid;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) unsigned int recipeID;

+ (id)resourceDescriptionWithAssetUuid:(id)a0 resourceVersion:(unsigned int)a1 cplType:(unsigned long long)a2 recipeID:(unsigned int)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetUuid:(id)a0 version:(unsigned int)a1 cplType:(unsigned long long)a2 recipeID:(unsigned int)a3;

@end
