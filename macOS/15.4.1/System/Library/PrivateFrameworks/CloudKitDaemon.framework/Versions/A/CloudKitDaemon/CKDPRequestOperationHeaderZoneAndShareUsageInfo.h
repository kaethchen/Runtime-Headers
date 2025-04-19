@class NSMutableArray;

@interface CKDPRequestOperationHeaderZoneAndShareUsageInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneUsages;
@property (retain, nonatomic) NSMutableArray *shareUsages;

+ (Class)shareUsageType;
+ (Class)zoneUsageType;

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
- (unsigned long long)zoneUsagesCount;
- (void)clearZoneUsages;
- (void)addShareUsage:(id)a0;
- (void)addZoneUsage:(id)a0;
- (void)clearShareUsages;
- (id)shareUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)shareUsagesCount;
- (id)zoneUsageAtIndex:(unsigned long long)a0;

@end
