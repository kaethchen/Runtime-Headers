@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt32DoubleDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
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
- (void)setDouble:(double)a0 forKey:(unsigned int)a1;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)enumerateKeysAndDoublesUsingBlock:(id /* block */)a0;
- (BOOL)getDouble:(double *)a0 forKey:(unsigned int)a1;
- (id)initWithDoubles:(const double *)a0 forKeys:(const unsigned int *)a1 count:(unsigned long long)a2;
- (void)removeDoubleForKey:(unsigned int)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;

@end
