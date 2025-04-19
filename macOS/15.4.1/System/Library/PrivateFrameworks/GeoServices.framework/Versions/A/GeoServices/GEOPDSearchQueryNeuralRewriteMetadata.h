@class NSString, PBDataReader;

@interface GEOPDSearchQueryNeuralRewriteMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_inputQuery;
    NSString *_modelId;
    NSString *_rewrittenQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _modelScore;
    struct { unsigned char has_modelScore : 1; unsigned char read_inputQuery : 1; unsigned char read_modelId : 1; unsigned char read_rewrittenQuery : 1; unsigned char wrote_anyField : 1; } _flags;
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
