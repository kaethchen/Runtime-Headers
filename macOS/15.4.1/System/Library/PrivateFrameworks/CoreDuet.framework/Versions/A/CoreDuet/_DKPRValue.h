@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {
    double _dateValue;
    double _doubleValue;
    long long _integerValue;
    NSData *_blobValue;
    NSString *_stringValue;
    _DKPRValueType *_type;
    struct { unsigned char dateValue : 1; unsigned char doubleValue : 1; unsigned char integerValue : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
