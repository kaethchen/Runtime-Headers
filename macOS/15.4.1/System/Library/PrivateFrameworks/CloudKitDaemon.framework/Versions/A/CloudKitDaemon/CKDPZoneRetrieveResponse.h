@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

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
- (void)addZoneSummary:(id)a0;
- (void)addAnonymousZoneInfo:(id)a0;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymousZoneInfosCount;
- (void)clearAnonymousZoneInfos;
- (void)clearZoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneSummarysCount;

@end
