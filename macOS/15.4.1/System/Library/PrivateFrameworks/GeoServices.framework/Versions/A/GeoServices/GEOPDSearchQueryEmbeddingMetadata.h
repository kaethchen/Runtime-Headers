@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryEmbeddingMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { float *list; unsigned long long count; unsigned long long size; } _embeddings;
    NSString *_embeddingId;
    NSMutableArray *_modelVersions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_embeddings : 1; unsigned char read_embeddingId : 1; unsigned char read_modelVersions : 1; unsigned char wrote_anyField : 1; } _flags;
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
