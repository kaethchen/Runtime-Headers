@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt32EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)removeAll;
- (void)setRawValue:(int)a0 forKey:(int)a1;
- (void)setEnum:(int)a0 forKey:(int)a1;
- (BOOL)getEnum:(int *)a0 forKey:(int)a1;
- (void)addRawEntriesFromDictionary:(id)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)a0;
- (BOOL)getRawValue:(int *)a0 forKey:(int)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 forKeys:(const int *)a2 count:(unsigned long long)a3;
- (void)removeEnumForKey:(int)a0;
- (id)serializedDataForUnknownValue:(int)a0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1 keyDataType:(unsigned char)a2;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;

@end
