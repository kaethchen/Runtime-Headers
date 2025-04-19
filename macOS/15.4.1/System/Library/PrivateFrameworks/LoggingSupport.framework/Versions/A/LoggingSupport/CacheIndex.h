@interface CacheIndex : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned short fileIndex;
@property (readonly, nonatomic) long long chunk_offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCDHash:(unsigned short)a0 identifier:(long long)a1;
- (BOOL)isEqualToCacheIndex:(id)a0;

@end
