@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>

@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) NSMutableArray *absoluteAltitudes;

+ (Class)locationsType;
+ (Class)absoluteAltitudesType;
+ (Class)accessPointsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAccessPoints:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)accessPointsCount;
- (void)clearAccessPoints;
- (void)clearLocations;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (id)absoluteAltitudesAtIndex:(unsigned long long)a0;
- (unsigned long long)absoluteAltitudesCount;
- (id)accessPointsAtIndex:(unsigned long long)a0;
- (void)addAbsoluteAltitudes:(id)a0;
- (void)clearAbsoluteAltitudes;

@end
