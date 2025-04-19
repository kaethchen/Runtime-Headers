@class GEOPDQueryUnderstandingTaxonomyResultItemBrand, PBDataReader, GEOPDQueryUnderstandingTaxonomyResultItemCategory, PBUnknownFields;

@interface GEOPDQueryUnderstandingTaxonomyResultItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDQueryUnderstandingTaxonomyResultItemBrand *_brand;
    GEOPDQueryUnderstandingTaxonomyResultItemCategory *_category;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_brand : 1; unsigned char read_category : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
