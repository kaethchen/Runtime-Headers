@class PBDataReader, GEOEVStateInfo, NSData, GEOWaypointInfo, PBUnknownFields;

@interface GEOOriginalRouteLeg : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointInfo *_destinationWaypointInfo;
    unsigned long long _encryptedTourMuid;
    GEOEVStateInfo *_evStateInfo;
    GEOWaypointInfo *_originWaypointInfo;
    NSData *_pathLeg;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_encryptedTourMuid : 1; unsigned char read_unknownFields : 1; unsigned char read_destinationWaypointInfo : 1; unsigned char read_evStateInfo : 1; unsigned char read_originWaypointInfo : 1; unsigned char read_pathLeg : 1; unsigned char read_zilchPoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (readonly, nonatomic) BOOL hasPathLeg;
@property (retain, nonatomic) NSData *pathLeg;
@property (readonly, nonatomic) BOOL hasEvStateInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (readonly, nonatomic) BOOL hasOriginWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property (readonly, nonatomic) BOOL hasDestinationWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property (nonatomic) BOOL hasEncryptedTourMuid;
@property (nonatomic) unsigned long long encryptedTourMuid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
