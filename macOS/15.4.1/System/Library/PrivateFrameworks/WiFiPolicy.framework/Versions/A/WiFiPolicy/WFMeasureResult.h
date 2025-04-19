@class NSError, NSString, NSMutableSet;

@interface WFMeasureResult : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long options;
@property (nonatomic) double backhaulThroughput;
@property (copy, nonatomic) NSError *downloadError;
@property (nonatomic) long long gatewayMinRTT;
@property (nonatomic) long long gatewayMaxRTT;
@property (nonatomic) long long gatewayPacketLoss;
@property (nonatomic) long long localDNSMinRTT;
@property (nonatomic) long long localDNSMaxRTT;
@property (nonatomic) long long localDNSPacketLoss;
@property (nonatomic) long long publicDNSMinRTT;
@property (nonatomic) long long publicDNSMaxRTT;
@property (nonatomic) long long publicDNSPacketLoss;
@property (nonatomic) BOOL dnsSuccess;
@property (nonatomic) BOOL backhaulResultsValid;
@property (nonatomic) BOOL gatewayResultsValid;
@property (nonatomic) BOOL localResultsValid;
@property (nonatomic) BOOL publicResultsValid;
@property (nonatomic) BOOL dnsResultsValid;
@property (nonatomic) BOOL siriTCPResultsValid;
@property (nonatomic) BOOL siriTLSResultsValid;
@property (nonatomic) BOOL siriACEResultsValid;
@property (nonatomic) BOOL seenSpecificAcFailure;
@property (nonatomic) BOOL siriTCPSuccess;
@property (nonatomic) BOOL siriTLSSuccess;
@property (nonatomic) BOOL siriACESuccess;
@property (nonatomic) long long siriTrafficClass;
@property (nonatomic) long long trafficClassBEAttemptedSmall;
@property (nonatomic) long long trafficClassBKAttemptedSmall;
@property (nonatomic) long long trafficClassVOAttemptedSmall;
@property (nonatomic) long long trafficClassVIAttemptedSmall;
@property (nonatomic) long long trafficClassBESucceededSmall;
@property (nonatomic) long long trafficClassBKSucceededSmall;
@property (nonatomic) long long trafficClassVOSucceededSmall;
@property (nonatomic) long long trafficClassVISucceededSmall;
@property (nonatomic) long long trafficClassBEAttemptedLarge;
@property (nonatomic) long long trafficClassBKAttemptedLarge;
@property (nonatomic) long long trafficClassVOAttemptedLarge;
@property (nonatomic) long long trafficClassVIAttemptedLarge;
@property (nonatomic) long long trafficClassBESucceededLarge;
@property (nonatomic) long long trafficClassBKSucceededLarge;
@property (nonatomic) long long trafficClassVOSucceededLarge;
@property (nonatomic) long long trafficClassVISucceededLarge;
@property (retain, nonatomic) NSString *gatewayAddress;
@property (retain, nonatomic) NSMutableSet *dnsServers;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)binnedProperty:(id)a0;
- (id)allPrimitiveProperties;
- (unsigned long long)numAcAttempted;
- (unsigned long long)numAcFailed;
- (unsigned long long)numAcSuccess;
- (unsigned long long)numLargePingPacketsAttempted;
- (unsigned long long)numLargePingPacketsFailed;
- (unsigned long long)numLargePingPacketsSuccess;
- (unsigned long long)numPingPacketsAttempted;
- (unsigned long long)numPingPacketsFailed;
- (unsigned long long)numPingPacketsSuccess;
- (unsigned long long)numSmallPingPacketsAttempted;
- (unsigned long long)numSmallPingPacketsFailed;
- (unsigned long long)numSmallPingPacketsSuccess;
- (id)statusForAcFailure;
- (id)statusForDNS;
- (id)statusForInternet;
- (id)statusForLocal;
- (id)statusForSiriTCP;
- (id)statusForSiriTLS;
- (id)typeAsString;

@end
