@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion, PBDataReader;

@interface GEOMapLayerDataServiceVersionUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapLayerDataServiceLayerIndex *_index;
    GEOMapLayerDataServiceLayer *_layer;
    GEOMapLayerDataServiceVersion *_sourceVersion;
    GEOMapLayerDataServiceVersion *_targetVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_index : 1; unsigned char read_layer : 1; unsigned char read_sourceVersion : 1; unsigned char read_targetVersion : 1; unsigned char wrote_anyField : 1; } _flags;
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
