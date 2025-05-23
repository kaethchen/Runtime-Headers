@class GEOPBTransitArtwork, PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSMutableArray *_continueCommands;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
    GEOFormattedString *_title;
    GEOFormattedString *_waypointInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_artwork : 1; unsigned char read_continueCommands : 1; unsigned char read_mergeCommands : 1; unsigned char read_normalCommands : 1; unsigned char read_title : 1; unsigned char read_waypointInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
