@class GEOPDSearchTokenSpan, NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchToken : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_alternateForms;
    NSString *_processedValue;
    NSString *_rawValue;
    GEOPDSearchTokenSpan *_tokenSpan;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _position;
    struct { unsigned char has_position : 1; unsigned char read_alternateForms : 1; unsigned char read_processedValue : 1; unsigned char read_rawValue : 1; unsigned char read_tokenSpan : 1; unsigned char wrote_anyField : 1; } _flags;
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
