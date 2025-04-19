@class TRIPBMessage;

@interface TRIPBFloatArray : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    float *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValue:(float)a0;
+ (id)arrayWithValueArray:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addValue:(float)a0;
- (void)removeAll;
- (float)valueAtIndex:(unsigned long long)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (id)initWithValues:(const float *)a0 count:(unsigned long long)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(float)a1;
- (void)addValues:(const float *)a0 count:(unsigned long long)a1;
- (void)addValuesFromArray:(id)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (id)initWithValueArray:(id)a0;
- (void)insertValue:(float)a0 atIndex:(unsigned long long)a1;
- (void)internalResizeToCapacity:(unsigned long long)a0;

@end
