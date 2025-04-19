@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeName;
    BOOL _includeSpokenNames;
    BOOL _populateAltCategory;
    BOOL _useLegacyTaxonomy;
    struct { unsigned char has_includeName : 1; unsigned char has_includeSpokenNames : 1; unsigned char has_populateAltCategory : 1; unsigned char has_useLegacyTaxonomy : 1; } _flags;
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
