@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDGroundMetadataTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_buildTables;
    NSMutableArray *_cameraMetadataTables;
    GEOTileCoordinate *_coord;
    NSMutableArray *_photoPositions;
    NSMutableArray *_storefronts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _tileBuildId;
    struct { unsigned char has_tileBuildId : 1; unsigned char read_buildTables : 1; unsigned char read_cameraMetadataTables : 1; unsigned char read_coord : 1; unsigned char read_photoPositions : 1; unsigned char read_storefronts : 1; unsigned char wrote_anyField : 1; } _flags;
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
