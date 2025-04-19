@class NSData, PBUnknownFields;

@interface GEOPDAddressObject : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_addressObject;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
