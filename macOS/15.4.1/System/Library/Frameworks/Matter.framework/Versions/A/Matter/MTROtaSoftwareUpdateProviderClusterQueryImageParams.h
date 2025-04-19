@class NSArray, NSString, NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterQueryImageParams : MTROTASoftwareUpdateProviderClusterQueryImageParams

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSArray *protocolsSupported;
@property (copy, nonatomic) NSNumber *hardwareVersion;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSNumber *requestorCanConsent;
@property (copy, nonatomic) NSData *metadataForProvider;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
