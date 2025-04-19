@class GEOPDSearchTokenSet, NSString, PBDataReader;

@interface GEOPDSearchQueryTokenizerMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_tokenizerName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _tokenizerType;
    struct { unsigned char has_tokenizerType : 1; unsigned char read_tokenSet : 1; unsigned char read_tokenizerName : 1; unsigned char wrote_anyField : 1; } _flags;
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
