@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _accessPointIndex;
    unsigned int _stopIndex;
    unsigned int _transferTime;
    BOOL _displayStop;
    BOOL _uncertainArrival;
    struct { unsigned char has_accessPointIndex : 1; unsigned char has_stopIndex : 1; unsigned char has_transferTime : 1; unsigned char has_displayStop : 1; unsigned char has_uncertainArrival : 1; } _flags;
}

@property (nonatomic) BOOL hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) BOOL hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) BOOL hasDisplayStop;
@property (nonatomic) BOOL displayStop;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) BOOL hasUncertainArrival;
@property (nonatomic) BOOL uncertainArrival;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
