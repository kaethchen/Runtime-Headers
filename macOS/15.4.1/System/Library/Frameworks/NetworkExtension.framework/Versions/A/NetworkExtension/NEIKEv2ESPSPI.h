@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property (readonly) unsigned int value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(unsigned int)a0;

@end
