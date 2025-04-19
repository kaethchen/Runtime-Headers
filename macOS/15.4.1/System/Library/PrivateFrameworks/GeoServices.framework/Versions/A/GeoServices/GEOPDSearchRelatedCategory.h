@class NSString;

@interface GEOPDSearchRelatedCategory : PBCodable <NSCopying> {
    long long _densityScore;
    NSString *_entityId;
    int _type;
    struct { unsigned char has_densityScore : 1; unsigned char has_type : 1; } _flags;
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
