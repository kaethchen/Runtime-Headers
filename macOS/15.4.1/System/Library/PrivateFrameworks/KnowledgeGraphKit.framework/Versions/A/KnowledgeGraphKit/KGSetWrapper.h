@class NSSet;

@interface KGSetWrapper : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *set;
@property (readonly, nonatomic) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)initWithSet:(id)a0;

@end
