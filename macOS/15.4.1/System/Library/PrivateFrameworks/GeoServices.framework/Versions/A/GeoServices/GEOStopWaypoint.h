@class PBUnknownFields, NSString, PBDataReader, GEOLatLng, GEOStyleAttributes;

@interface GEOStopWaypoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSString *_name;
    GEOLatLng *_position;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_muid : 1; unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_position : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
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
