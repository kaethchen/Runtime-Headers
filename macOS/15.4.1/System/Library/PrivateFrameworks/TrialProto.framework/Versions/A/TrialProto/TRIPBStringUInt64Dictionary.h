@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBStringUInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)enumerateKeysAndUInt64sUsingBlock:(id /* block */)a0;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(id)a1;
- (id)initWithUInt64s:(const unsigned long long *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (void)removeUInt64ForKey:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)setUInt64:(unsigned long long)a0 forKey:(id)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;

@end
