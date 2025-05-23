@class NSString, PBDataReader;

@interface GEOPDSearchQueryGeoNormalizerMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _normalizers;
    NSString *_floor;
    NSString *_mailStop;
    NSString *_poPox;
    NSString *_unitNumber;
    NSString *_unitTypeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_normalizers : 1; unsigned char read_floor : 1; unsigned char read_mailStop : 1; unsigned char read_poPox : 1; unsigned char read_unitNumber : 1; unsigned char read_unitTypeId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)dealloc;
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
