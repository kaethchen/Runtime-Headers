@class NSString, NSData, NSMutableArray, _MRDictionaryProtobuf;

@interface _MRValueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char floatValue : 1; unsigned char boolValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) NSString *dateValue;
@property (retain, nonatomic) NSMutableArray *arrayValues;
@property (readonly, nonatomic) BOOL hasDictionaryValue;
@property (retain, nonatomic) _MRDictionaryProtobuf *dictionaryValue;

+ (Class)arrayValueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArrayValue:(id)a0;
- (id)arrayValueAtIndex:(unsigned long long)a0;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;

@end
