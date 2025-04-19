@class NSString, PBDataReader;

@interface GEOPDSearchCTRStoreKeyValuePair : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_geoHash;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _backwardSctr;
    int _forwardSctr;
    int _numImpressions;
    int _numQueryTaps;
    int _numTaps;
    int _type;
    struct { unsigned char has_backwardSctr : 1; unsigned char has_forwardSctr : 1; unsigned char has_numImpressions : 1; unsigned char has_numQueryTaps : 1; unsigned char has_numTaps : 1; unsigned char read_geoHash : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
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
