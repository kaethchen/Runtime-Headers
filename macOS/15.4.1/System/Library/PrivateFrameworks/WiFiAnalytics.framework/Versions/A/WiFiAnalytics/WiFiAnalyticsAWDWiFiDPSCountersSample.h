@class WiFiAnalyticsAWDWiFiNWActivityPeerStats, WiFiAnalyticsAWDWiFiNWActivityControllerStats;

@interface WiFiAnalyticsAWDWiFiDPSCountersSample : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) BOOL hasPeerStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityPeerStats *peerStats;

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

@end
