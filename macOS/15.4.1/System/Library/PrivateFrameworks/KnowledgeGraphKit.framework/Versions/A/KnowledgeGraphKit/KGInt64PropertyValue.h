@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (id)initWithValue:(long long)a0;
- (id)kgPropertyValue;

@end
