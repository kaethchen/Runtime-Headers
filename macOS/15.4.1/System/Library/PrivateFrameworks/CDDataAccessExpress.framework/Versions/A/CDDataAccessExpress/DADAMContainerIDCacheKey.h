@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long dataclass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 andDataclass:(long long)a1;

@end
