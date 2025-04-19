@class NSString, NSData, NSMutableArray, WAMessageAWD;

@interface WAField : NSObject <NSCopying, NSSecureCoding> {
    id _value;
    NSString *_typeInfoForRepeatableSubmessage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) BOOL isRepeatable;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *repeatableValues;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) WAMessageAWD *subMessageValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (double)doubleValue;
- (float)floatValue;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (int)int32Value;
- (void)setStringValue:(id)a0;
- (void)setDoubleValue:(double)a0;
- (void)setFloatValue:(float)a0;
- (void)setBoolValue:(BOOL)a0;
- (long long)int64Value;
- (void)setUint32Value:(unsigned int)a0;
- (void)setInt32Value:(int)a0;
- (unsigned int)uint32Value;
- (void)setInt64Value:(long long)a0;
- (void)setUint64Value:(unsigned long long)a0;
- (id)subMessageValue;
- (void)_addRepeatableValue:(id)a0;
- (id)_ownTypeAsString;
- (void)_throwIncorrecTypeExceptionForType:(long long)a0 isGet:(BOOL)a1;
- (void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)a0 isGet:(BOOL)a1 forType:(long long)a2;
- (id)_typeAsString:(long long)a0;
- (void)addRepeatableBoolValue:(BOOL)a0;
- (void)addRepeatableBytes:(id)a0;
- (void)addRepeatableDoubleValue:(double)a0;
- (void)addRepeatableFloatValue:(float)a0;
- (void)addRepeatableInt32Value:(int)a0;
- (void)addRepeatableInt64Value:(long long)a0;
- (void)addRepeatableString:(id)a0;
- (void)addRepeatableSubMessageValue:(id)a0;
- (void)addRepeatableUInt32Value:(unsigned int)a0;
- (void)addRepeatableUInt64Value:(unsigned long long)a0;
- (id)bytesValue;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 andKey:(id)a2 andTypeInfoForRepeatableSubmessage:(id)a3;
- (id)initWithType:(long long)a0 isRepeatable:(BOOL)a1 key:(id)a2 repeatableValues:(id)a3 doubleValue:(double)a4 floatValue:(float)a5 int32Value:(int)a6 int64Value:(long long)a7 uint32Val:(unsigned int)a8 uint64Value:(unsigned long long)a9 boolValue:(BOOL)a10 stringValue:(id)a11 bytesValue:(id)a12 subMessageValue:(id)a13 andTypeInfoForRepeatableSubmessage:(id)a14;
- (BOOL)isNumerical;
- (id)repeatableValues;
- (void)setBytesValue:(id)a0;
- (void)setRepeatableValues:(id)a0;
- (void)setSubMessageValue:(id)a0;
- (void)setTypeInformationForRepeatableSubmessage:(id)a0;
- (id)typeInformationForRepeatableSubmessage;
- (unsigned long long)uint64Value;

@end
