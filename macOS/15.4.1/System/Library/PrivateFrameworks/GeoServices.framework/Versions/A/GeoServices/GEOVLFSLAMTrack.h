@class PBDataReader, GEOVLFPoint3D, NSMutableArray, PBUnknownFields;

@interface GEOVLFSLAMTrack : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _descriptors;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _observationImageIndices;
    NSMutableArray *_imagePositions;
    GEOVLFPoint3D *_position;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_descriptors : 1; unsigned char read_observationImageIndices : 1; unsigned char read_imagePositions : 1; unsigned char read_position : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOVLFPoint3D *position;
@property (readonly, nonatomic) unsigned long long descriptorsCount;
@property (readonly, nonatomic) unsigned int *descriptors;
@property (readonly, nonatomic) unsigned long long observationImageIndicesCount;
@property (readonly, nonatomic) unsigned int *observationImageIndices;
@property (retain, nonatomic) NSMutableArray *imagePositions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imagePositionsType;
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
- (void)addDescriptors:(unsigned int)a0;
- (unsigned int)observationImageIndicesAtIndex:(unsigned long long)a0;
- (void)addImagePositions:(id)a0;
- (void)addObservationImageIndices:(unsigned int)a0;
- (void)clearDescriptors;
- (void)clearImagePositions;
- (void)clearObservationImageIndices;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned int)descriptorsAtIndex:(unsigned long long)a0;
- (id)imagePositionsAtIndex:(unsigned long long)a0;
- (unsigned long long)imagePositionsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setDescriptors:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setObservationImageIndices:(unsigned int *)a0 count:(unsigned long long)a1;

@end
