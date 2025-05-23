@interface AWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying> {
    struct { unsigned char appDataStallTimerMsecs : 1; unsigned char appReportingDataStallCount : 1; unsigned char bestRTTMsecs : 1; unsigned char betterRouteEventCount : 1; unsigned char bytesDuplicate : 1; unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char bytesOutOfOrder : 1; unsigned char bytesRetransmitted : 1; unsigned char connectionEstablishmentTimeMsecs : 1; unsigned char connectionReuseCount : 1; unsigned char currentRTTMsecs : 1; unsigned char dNSResolvedTimeMsecs : 1; unsigned char flowDurationMsecs : 1; unsigned char iPAddressAttemptCount : 1; unsigned char multipathBytesInCell : 1; unsigned char multipathBytesInInitial : 1; unsigned char multipathBytesInWiFi : 1; unsigned char multipathBytesOutCell : 1; unsigned char multipathBytesOutInitial : 1; unsigned char multipathBytesOutWiFi : 1; unsigned char multipathServiceType : 1; unsigned char packetsDuplicate : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char packetsOutOfOrder : 1; unsigned char packetsRetransmitted : 1; unsigned char rTTvariance : 1; unsigned char smoothedRTTMsecs : 1; unsigned char synRetransmissionCount : 1; unsigned char timeToConnectionEstablishmentMsecs : 1; unsigned char timeToConnectionStartMsecs : 1; unsigned char timeToDNSResolvedMsecs : 1; unsigned char timeToDNSStartMsecs : 1; unsigned char trafficClass : 1; unsigned char connectedInterfaceType : 1; unsigned char interfaceType : 1; unsigned char cellularFallback : 1; unsigned char cellularRRCConnected : 1; unsigned char connected : 1; unsigned char dNSAnswersCached : 1; unsigned char firstParty : 1; unsigned char kernelReportedStalls : 1; unsigned char kernelReportingConnectionStalled : 1; unsigned char kernelReportingReadStalled : 1; unsigned char kernelReportingWriteStalled : 1; unsigned char tcpFastOpen : 1; } _has;
}

@property (nonatomic) BOOL hasTimeToDNSResolvedMsecs;
@property (nonatomic) unsigned long long timeToDNSResolvedMsecs;
@property (nonatomic) BOOL hasDNSAnswersCached;
@property (nonatomic) BOOL dNSAnswersCached;
@property (nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs;
@property (nonatomic) unsigned long long timeToConnectionEstablishmentMsecs;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) BOOL hasKernelReportedStalls;
@property (nonatomic) BOOL kernelReportedStalls;
@property (nonatomic) BOOL hasKernelReportingConnectionStalled;
@property (nonatomic) BOOL kernelReportingConnectionStalled;
@property (nonatomic) BOOL hasKernelReportingReadStalled;
@property (nonatomic) BOOL kernelReportingReadStalled;
@property (nonatomic) BOOL hasKernelReportingWriteStalled;
@property (nonatomic) BOOL kernelReportingWriteStalled;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) BOOL hasBytesDuplicate;
@property (nonatomic) unsigned long long bytesDuplicate;
@property (nonatomic) BOOL hasBytesOutOfOrder;
@property (nonatomic) unsigned long long bytesOutOfOrder;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) BOOL hasPacketsDuplicate;
@property (nonatomic) unsigned long long packetsDuplicate;
@property (nonatomic) BOOL hasPacketsOutOfOrder;
@property (nonatomic) unsigned long long packetsOutOfOrder;
@property (nonatomic) BOOL hasPacketsRetransmitted;
@property (nonatomic) unsigned long long packetsRetransmitted;
@property (nonatomic) BOOL hasCurrentRTTMsecs;
@property (nonatomic) unsigned long long currentRTTMsecs;
@property (nonatomic) BOOL hasSmoothedRTTMsecs;
@property (nonatomic) unsigned long long smoothedRTTMsecs;
@property (nonatomic) BOOL hasBestRTTMsecs;
@property (nonatomic) unsigned long long bestRTTMsecs;
@property (nonatomic) BOOL hasRTTvariance;
@property (nonatomic) unsigned long long rTTvariance;
@property (nonatomic) BOOL hasSynRetransmissionCount;
@property (nonatomic) unsigned long long synRetransmissionCount;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (nonatomic) unsigned long long connectionReuseCount;
@property (nonatomic) BOOL hasAppReportingDataStallCount;
@property (nonatomic) unsigned long long appReportingDataStallCount;
@property (nonatomic) BOOL hasAppDataStallTimerMsecs;
@property (nonatomic) unsigned long long appDataStallTimerMsecs;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) BOOL hasTcpFastOpen;
@property (nonatomic) BOOL tcpFastOpen;
@property (nonatomic) BOOL hasCellularFallback;
@property (nonatomic) BOOL cellularFallback;
@property (nonatomic) BOOL hasCellularRRCConnected;
@property (nonatomic) BOOL cellularRRCConnected;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (nonatomic) BOOL hasTimeToDNSStartMsecs;
@property (nonatomic) unsigned long long timeToDNSStartMsecs;
@property (nonatomic) BOOL hasDNSResolvedTimeMsecs;
@property (nonatomic) unsigned long long dNSResolvedTimeMsecs;
@property (nonatomic) BOOL hasTimeToConnectionStartMsecs;
@property (nonatomic) unsigned long long timeToConnectionStartMsecs;
@property (nonatomic) BOOL hasConnectionEstablishmentTimeMsecs;
@property (nonatomic) unsigned long long connectionEstablishmentTimeMsecs;
@property (nonatomic) BOOL hasBetterRouteEventCount;
@property (nonatomic) unsigned long long betterRouteEventCount;
@property (nonatomic) BOOL hasMultipathServiceType;
@property (nonatomic) unsigned long long multipathServiceType;
@property (nonatomic) BOOL hasFirstParty;
@property (nonatomic) BOOL firstParty;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutInitial;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)connectedInterfaceTypeAsString:(int)a0;
- (int)StringAsConnectedInterfaceType:(id)a0;
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;

@end
