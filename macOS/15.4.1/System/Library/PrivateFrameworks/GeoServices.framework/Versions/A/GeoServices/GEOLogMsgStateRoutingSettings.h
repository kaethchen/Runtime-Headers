@class PBDataReader, GEORoutingSettingsCyclingPrefs, GEORoutingSettingsVirtualGarageSetttings, GEORoutingSettingsDrivingPrefs, PBUnknownFields;

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORoutingSettingsCyclingPrefs *_cyclingPrefs;
    GEORoutingSettingsDrivingPrefs *_drivingPrefs;
    GEORoutingSettingsVirtualGarageSetttings *_virtualGarageSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_cyclingPrefs : 1; unsigned char read_drivingPrefs : 1; unsigned char read_virtualGarageSettings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVirtualGarageSettings;
@property (retain, nonatomic) GEORoutingSettingsVirtualGarageSetttings *virtualGarageSettings;
@property (readonly, nonatomic) BOOL hasCyclingPrefs;
@property (retain, nonatomic) GEORoutingSettingsCyclingPrefs *cyclingPrefs;
@property (readonly, nonatomic) BOOL hasDrivingPrefs;
@property (retain, nonatomic) GEORoutingSettingsDrivingPrefs *drivingPrefs;
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
