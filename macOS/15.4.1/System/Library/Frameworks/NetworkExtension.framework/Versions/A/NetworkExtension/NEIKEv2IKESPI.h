@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying>

@property (readonly) unsigned long long value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(unsigned long long)a0;

@end
