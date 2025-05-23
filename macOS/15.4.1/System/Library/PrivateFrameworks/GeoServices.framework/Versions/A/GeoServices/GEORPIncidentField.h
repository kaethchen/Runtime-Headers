@class NSString;

@interface GEORPIncidentField : PBCodable <NSCopying> {
    NSString *_siriType;
    int _trafficType;
    BOOL _displayIncidentOnMap;
    struct { unsigned char has_trafficType : 1; unsigned char has_displayIncidentOnMap : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSiriType;
@property (retain, nonatomic) NSString *siriType;
@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) BOOL hasDisplayIncidentOnMap;
@property (nonatomic) BOOL displayIncidentOnMap;

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
- (int)StringAsTrafficType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)trafficTypeAsString:(int)a0;

@end
