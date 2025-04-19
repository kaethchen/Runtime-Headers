@class PBDataReader, NSString, GEOPDSPunchInResultHints, GEOPDSPunchInQueryHints, NSMutableArray, PBUnknownFields;

@interface GEOPDSPunchInHints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appId;
    GEOPDSPunchInQueryHints *_queryHints;
    NSMutableArray *_resultHints;
    GEOPDSPunchInResultHints *_tappedResultHint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_appId : 1; unsigned char read_queryHints : 1; unsigned char read_resultHints : 1; unsigned char read_tappedResultHint : 1; unsigned char wrote_anyField : 1; } _flags;
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
