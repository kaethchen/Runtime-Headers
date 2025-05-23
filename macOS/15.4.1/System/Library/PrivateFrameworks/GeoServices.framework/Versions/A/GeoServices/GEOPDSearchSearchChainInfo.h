@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchSearchChainInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_brandKey;
    NSMutableArray *_countryOccurrences;
    NSString *_searchChainKey;
    unsigned long long _total;
    NSMutableArray *_triggers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_total : 1; unsigned char read_brandKey : 1; unsigned char read_countryOccurrences : 1; unsigned char read_searchChainKey : 1; unsigned char read_triggers : 1; unsigned char wrote_anyField : 1; } _flags;
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
