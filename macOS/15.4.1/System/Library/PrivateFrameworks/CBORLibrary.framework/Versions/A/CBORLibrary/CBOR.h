@class NSArray, NSString, NSData, NSDictionary, NSNumber, NSDate;

@interface CBOR : NSObject <NSCopying>

@property (retain, nonatomic) id value;
@property (nonatomic) long long valueSize;
@property (nonatomic) unsigned long long cachedHash;
@property (retain, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long longLongValue;
@property (readonly, nonatomic) unsigned long long unsignedLongLongValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) NSNumber *numeric;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) CBOR *tag;
@property (readonly, nonatomic) BOOL isWholeNumber;
@property (readonly, nonatomic) BOOL isFloatNumber;
@property (readonly, nonatomic) BOOL isBoolean;
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isEmbeddedCBORData;

+ (id)decodeFromData:(id)a0;
+ (id)cborWithData:(id)a0;
+ (id)cborWithDictionary:(id)a0;
+ (id)cborWithInteger:(long long)a0;
+ (id)cborWithUTF8String:(id)a0;
+ (id)cborWithArray:(id)a0;
+ (id)cborWithFullDate:(id)a0;
+ (id)cborWithUnsignedInteger:(unsigned long long)a0;
+ (id)cborWithDouble:(double)a0;
+ (id)cborNil;
+ (id)decodeFromData:(id)a0 keepKeyOrdering:(BOOL)a1;
+ (id)cborFalse;
+ (id)cborTrue;
+ (id)cborWithCOSE:(id)a0;
+ (id)cborWithCOSEKey:(id)a0;
+ (id)cborWithDateTime:(id)a0;
+ (id)cborWithDictionary:(id)a0 keyOrderList:(id)a1;
+ (id)cborWithEmbeddedCBORData:(id)a0;
+ (id)cborWithEncodedTag24Data:(id)a0;
+ (id)cborWithFloat:(float)a0;
+ (id)cborWithHalfFloat:(float)a0;
+ (id)decodeFromBytes:(const char **)a0 length:(unsigned long long *)a1 recursionLevel:(int)a2 keepKeyOrdering:(BOOL)a3 noCopy:(BOOL)a4;
+ (id)decodeFromData:(id)a0 keepKeyOrdering:(BOOL)a1 noCopy:(BOOL)a2;
+ (id)decodeMajorType0And1FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2;
+ (id)decodeMajorType2And3FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2 indefiniteLenContainerType:(unsigned long long)a3 noCopy:(BOOL)a4;
+ (id)decodeMajorType4FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2 recursionLevel:(int)a3 keepKeyOrdering:(BOOL)a4 noCopy:(BOOL)a5;
+ (id)decodeMajorType5FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2 recursionLevel:(int)a3 keepKeyOrdering:(BOOL)a4 noCopy:(BOOL)a5;
+ (id)decodeMajorType6FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2;
+ (id)decodeMajorType7FromBuffer:(const char **)a0 length:(unsigned long long *)a1 tag:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)asJSON;
- (id)encodeToEmbeddedCBORData;
- (id)initWithCbor:(id)a0 tag:(id)a1;
- (id)initWithType:(unsigned long long)a0 value:(id)a1 valueSize:(long long)a2 tag:(id)a3;

@end
