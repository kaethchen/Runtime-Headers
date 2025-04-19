@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSPropertyDescription *_propertyDescription;
    NSPropertyDescription *_tombstonedPropertyDescription;
    long long _int64;
}

- (void)dealloc;
- (id)value;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (void)setValue:(id)a0;
- (unsigned char)sqlType;
- (void)setUnsignedInt:(unsigned int)a0;
- (BOOL)allowsCoercion;
- (BOOL)hasObjectValue;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (long long)int64;
- (id)propertyDescription;
- (void)setInt64:(long long)a0;
- (void)setSQLType:(unsigned char)a0;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)tombstonedPropertyDescription;
- (unsigned int)unsignedInt;

@end
