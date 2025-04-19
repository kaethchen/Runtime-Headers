@interface ICWeakObject : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachedHash;
@property (readonly, weak, nonatomic) id object;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
