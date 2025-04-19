@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (id)initWithValue:(unsigned long long)a0;
- (id)kgPropertyValue;

@end
