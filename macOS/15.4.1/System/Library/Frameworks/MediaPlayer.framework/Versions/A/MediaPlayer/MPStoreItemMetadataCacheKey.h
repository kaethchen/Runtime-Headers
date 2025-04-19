@class NSNumber, NSString;

@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (nonatomic, getter=isPersonalized) BOOL personalized;
@property (copy, nonatomic) NSString *storefrontIdentifier;

+ (void)_fastGetCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_slowGetCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCacheKeyWithRequest:(id)a0 completionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isGoodCacheKey;
- (id)initWithRequest:(id)a0 response:(id)a1;

@end
