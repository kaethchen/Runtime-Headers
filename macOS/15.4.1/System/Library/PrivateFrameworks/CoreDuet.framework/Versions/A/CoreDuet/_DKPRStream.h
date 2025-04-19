@class NSString, _DKPRValueType;

@interface _DKPRStream : PBCodable <NSCopying> {
    NSString *_name;
    _DKPRValueType *_type;
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
