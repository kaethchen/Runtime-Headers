@class NSString, NSMutableArray;

@interface WiFiAnalyticsAWDWiFiConnectionQuality : PBCodable <NSCopying> {
    struct { unsigned char bytesInActive : 1; unsigned char bytesInTotal : 1; unsigned char bytesOutActive : 1; unsigned char bytesOutTotal : 1; unsigned char dataStalls : 1; unsigned char failedConnections : 1; unsigned char faultyStay : 1; unsigned char lat : 1; unsigned char lon : 1; unsigned char lowLQMStay : 1; unsigned char lowqStay : 1; unsigned char lqmTranCount : 1; unsigned char overAllStay : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char reTxBytes : 1; unsigned char receivedDupes : 1; unsigned char rxOutOfOrderBytes : 1; unsigned char successfulConnections : 1; unsigned char timeOfDay : 1; unsigned char timestamp : 1; unsigned char assocReason : 1; unsigned char associatedTime : 1; unsigned char band : 1; unsigned char captiveFlag : 1; unsigned char cca : 1; unsigned char channel : 1; unsigned char channelWidth : 1; unsigned char colocatedState : 1; unsigned char disassocReason : 1; unsigned char phyMode : 1; unsigned char roundTripTimeAvg : 1; unsigned char roundTripTimeAvgActive : 1; unsigned char roundTripTimeMin : 1; unsigned char roundTripTimeMinActive : 1; unsigned char roundTripTimeVar : 1; unsigned char roundTripTimeVarActive : 1; unsigned char rssi : 1; unsigned char securityType : 1; unsigned char snr : 1; unsigned char hotspot20 : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSMutableArray *additionalUniqueIDs;
@property (retain, nonatomic) NSMutableArray *otherUniqueIDs;
@property (nonatomic) BOOL hasLat;
@property (nonatomic) double lat;
@property (nonatomic) BOOL hasLon;
@property (nonatomic) double lon;
@property (nonatomic) BOOL hasOverAllStay;
@property (nonatomic) unsigned long long overAllStay;
@property (nonatomic) BOOL hasFaultyStay;
@property (nonatomic) unsigned long long faultyStay;
@property (nonatomic) BOOL hasLowLQMStay;
@property (nonatomic) unsigned long long lowLQMStay;
@property (nonatomic) BOOL hasLowqStay;
@property (nonatomic) unsigned long long lowqStay;
@property (nonatomic) BOOL hasLqmTranCount;
@property (nonatomic) unsigned long long lqmTranCount;
@property (nonatomic) BOOL hasSuccessfulConnections;
@property (nonatomic) unsigned long long successfulConnections;
@property (nonatomic) BOOL hasFailedConnections;
@property (nonatomic) unsigned long long failedConnections;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) BOOL hasBytesInTotal;
@property (nonatomic) unsigned long long bytesInTotal;
@property (nonatomic) BOOL hasBytesOutTotal;
@property (nonatomic) unsigned long long bytesOutTotal;
@property (nonatomic) BOOL hasBytesInActive;
@property (nonatomic) unsigned long long bytesInActive;
@property (nonatomic) BOOL hasBytesOutActive;
@property (nonatomic) unsigned long long bytesOutActive;
@property (nonatomic) BOOL hasReTxBytes;
@property (nonatomic) unsigned long long reTxBytes;
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) unsigned long long dataStalls;
@property (nonatomic) BOOL hasReceivedDupes;
@property (nonatomic) unsigned long long receivedDupes;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) BOOL hasRoundTripTimeMin;
@property (nonatomic) float roundTripTimeMin;
@property (nonatomic) BOOL hasRoundTripTimeAvg;
@property (nonatomic) float roundTripTimeAvg;
@property (nonatomic) BOOL hasRoundTripTimeVar;
@property (nonatomic) float roundTripTimeVar;
@property (nonatomic) BOOL hasRoundTripTimeMinActive;
@property (nonatomic) float roundTripTimeMinActive;
@property (nonatomic) BOOL hasRoundTripTimeAvgActive;
@property (nonatomic) float roundTripTimeAvgActive;
@property (nonatomic) BOOL hasRoundTripTimeVarActive;
@property (nonatomic) float roundTripTimeVarActive;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasCaptiveFlag;
@property (nonatomic) unsigned int captiveFlag;
@property (nonatomic) BOOL hasColocatedState;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) BOOL hasHotspot20;
@property (nonatomic) BOOL hotspot20;
@property (nonatomic) BOOL hasDisassocReason;
@property (nonatomic) unsigned int disassocReason;
@property (nonatomic) BOOL hasAssocReason;
@property (nonatomic) unsigned int assocReason;
@property (nonatomic) BOOL hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) int snr;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) int cca;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) BOOL hasAssociatedTime;
@property (nonatomic) unsigned int associatedTime;

+ (Class)additionalUniqueIDsType;
+ (Class)otherUniqueIDsType;

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
- (void)addAdditionalUniqueIDs:(id)a0;
- (void)addOtherUniqueIDs:(id)a0;
- (id)additionalUniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)additionalUniqueIDsCount;
- (void)clearAdditionalUniqueIDs;
- (void)clearOtherUniqueIDs;
- (id)otherUniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)otherUniqueIDsCount;

@end
