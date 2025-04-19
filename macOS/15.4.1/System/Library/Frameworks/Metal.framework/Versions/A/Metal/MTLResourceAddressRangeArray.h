@interface MTLResourceAddressRangeArray : NSObject

@property (readonly, nonatomic) struct MTLAddressRange { unsigned long long x0; unsigned long long x1; } *ranges;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0;
- (id)initWithRanges:(struct MTLAddressRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;

@end
