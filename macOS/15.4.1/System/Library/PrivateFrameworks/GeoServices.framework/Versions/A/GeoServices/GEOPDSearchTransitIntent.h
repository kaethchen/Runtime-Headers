@class NSString, GEOPDSearchTokenSet, PBDataReader;

@interface GEOPDSearchTransitIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned long long _transitId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transitType;
    struct { unsigned char has_transitId : 1; unsigned char has_transitType : 1; unsigned char read_name : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
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
