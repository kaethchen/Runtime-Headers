@class NSString, NSDictionary, NSObject;

@interface NetworkQualityConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString *customConfigurationString;
    NSDictionary *customConfigurationDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL forceHTTP1;
@property BOOL forceHTTP2;
@property BOOL forceHTTP3;
@property BOOL forceL4S;
@property BOOL forceDisableL4S;
@property BOOL edgeRelay;
@property BOOL edgeRelayRemote;
@property (retain, nonatomic) NSString *hostOverride;
@property long long movingAveragePeriod;
@property long long standardDeviationThreshold;
@property long long trimmedMeanThreshold;
@property long long multipathServiceType;
@property unsigned long long latencyMeasurementServiceType;
@property unsigned long long loadGeneratingNetworkServiceType;
@property BOOL useUnifiedHTTPStack;
@property (copy, nonatomic) NSObject *configuration;
@property (copy, nonatomic) NSString *bonjourHost;
@property (copy, nonatomic) NSString *networkInterfaceName;
@property BOOL idleLatency;
@property BOOL upload;
@property BOOL download;
@property BOOL parallel;
@property BOOL workingLatency;
@property BOOL validateCertificate;
@property long long minUploadFlows;
@property long long maxUploadFlows;
@property long long minDownloadFlows;
@property long long maxDownloadFlows;
@property BOOL telemetry;
@property long long minRuntime;
@property long long maxRuntime;
@property long long maxDownlinkData;
@property long long maxUplinkData;
@property BOOL privateRelay;
@property long long maxDownlinkThroughput;
@property long long maxUplinkThroughput;
@property long long latencyCriteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
