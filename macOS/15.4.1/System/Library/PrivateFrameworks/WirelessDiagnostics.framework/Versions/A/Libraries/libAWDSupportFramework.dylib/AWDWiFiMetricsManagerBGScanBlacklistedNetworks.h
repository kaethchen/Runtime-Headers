@class NSString, NSMutableArray;

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSMutableArray *blacklistingHistorys;

+ (Class)blacklistingHistoryType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBlacklistingHistory:(id)a0;
- (id)blacklistingHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistingHistorysCount;
- (void)clearBlacklistingHistorys;

@end
