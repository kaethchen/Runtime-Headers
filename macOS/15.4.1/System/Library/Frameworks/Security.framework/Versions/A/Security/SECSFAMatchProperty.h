@class NSString, SECSFAPropertyValue;

@interface SECSFAMatchProperty : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPropertyName;
@property (retain, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) SECSFAPropertyValue *value;

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

@end
