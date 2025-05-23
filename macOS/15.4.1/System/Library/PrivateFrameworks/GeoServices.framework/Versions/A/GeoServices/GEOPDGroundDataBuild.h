@class PBDataReader;

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _capabilitys;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _lodWithTextures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _bucketId;
    unsigned int _buildId;
    unsigned int _dataFormatVersion;
    unsigned int _dataOutputVersion;
    float _heightAboveGroundM;
    unsigned int _index;
    unsigned int _metricsVersion;
    int _type;
    struct { unsigned char has_bucketId : 1; unsigned char has_buildId : 1; unsigned char has_dataFormatVersion : 1; unsigned char has_dataOutputVersion : 1; unsigned char has_heightAboveGroundM : 1; unsigned char has_index : 1; unsigned char has_metricsVersion : 1; unsigned char has_type : 1; unsigned char read_capabilitys : 1; unsigned char read_lodWithTextures : 1; unsigned char wrote_anyField : 1; } _flags;
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
