@class GEOCyclingVehicleSpecifications, PBDataReader, GEOCyclingUserPreferences, PBUnknownFields;

@interface GEOCyclingOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCyclingUserPreferences *_cyclingUserPreferences;
    GEOCyclingVehicleSpecifications *_cyclingVehicleSpecifications;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_cyclingUserPreferences : 1; unsigned char read_cyclingVehicleSpecifications : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCyclingUserPreferences;
@property (retain, nonatomic) GEOCyclingUserPreferences *cyclingUserPreferences;
@property (readonly, nonatomic) BOOL hasCyclingVehicleSpecifications;
@property (retain, nonatomic) GEOCyclingVehicleSpecifications *cyclingVehicleSpecifications;
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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
