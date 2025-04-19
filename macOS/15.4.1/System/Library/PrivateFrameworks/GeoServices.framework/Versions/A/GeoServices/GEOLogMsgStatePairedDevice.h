@class GEOLogMsgStateDeviceIdentifier, PBUnknownFields;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    BOOL _isConnectedAndNearby;
    BOOL _isConnected;
    struct { unsigned char has_type : 1; unsigned char has_isConnectedAndNearby : 1; unsigned char has_isConnected : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL hasPairedDeviceIdentifier;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property (nonatomic) BOOL hasIsConnectedAndNearby;
@property (nonatomic) BOOL isConnectedAndNearby;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
