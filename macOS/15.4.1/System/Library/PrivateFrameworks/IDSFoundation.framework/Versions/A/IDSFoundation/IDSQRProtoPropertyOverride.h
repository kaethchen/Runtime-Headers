@class NSString;

@interface IDSQRProtoPropertyOverride : PBCodable <NSCopying> {
    struct { unsigned char propertyName : 1; unsigned char propertyValue : 1; unsigned char uint32Value : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasPropertyName;
@property (nonatomic) int propertyName;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasUint32Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) BOOL hasPropertyValue;
@property (nonatomic) int propertyValue;

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
- (int)StringAsPropertyName:(id)a0;
- (int)StringAsPropertyValue:(id)a0;
- (void)clearOneofValuesForPropertyValue;
- (id)propertyNameAsString:(int)a0;
- (id)propertyValueAsString:(int)a0;

@end
