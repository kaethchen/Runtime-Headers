@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _distToNextCheckpoints;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_distToNextCheckpoints : 1; unsigned char read_timeToNextCheckpoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long distToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property (readonly, nonatomic) unsigned long long timeToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)setDistToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTimeToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addDistToNextCheckpoint:(unsigned int)a0;
- (void)addTimeToNextCheckpoint:(unsigned int)a0;
- (void)clearDistToNextCheckpoints;
- (void)clearTimeToNextCheckpoints;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)a0;

@end
