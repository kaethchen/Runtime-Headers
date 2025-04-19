@interface TSPAlternateArchiverKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) const void *fieldPath;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 fieldPath:(const void *)a1;

@end
