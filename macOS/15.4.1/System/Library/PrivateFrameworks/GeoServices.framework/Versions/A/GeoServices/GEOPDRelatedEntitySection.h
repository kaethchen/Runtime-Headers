@class PBDataReader, NSString, GEOPDRelatedCollectionSection, PBUnknownFields;

@interface GEOPDRelatedEntitySection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    GEOPDRelatedCollectionSection *_relatedCollectionSection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _index;
    int _sectionType;
    struct { unsigned char has_index : 1; unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_relatedCollectionSection : 1; unsigned char wrote_anyField : 1; } _flags;
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
