@class NSString, NSData;

@interface HMDCharacteristicReadWriteAccessoryStatistics : NSObject

@property double timeOfFirstFailureRequest;
@property double timeOfLastSuccessfulRequest;
@property double timeOfLastFailedRequest;
@property BOOL hasSucceededOnce;
@property BOOL hasFailedOnce;
@property unsigned long long consecutiveSuccessCount;
@property unsigned long long consecutiveFailureCount;
@property long long lastSuccessLinkLayerType;
@property long long lastFailedLinkLayerType;
@property (copy) NSString *lastSuccessSSID;
@property (copy) NSString *lastSuccessBSSID;
@property (copy) NSData *lastSuccessIpv4Signature;
@property (copy) NSData *lastSuccessIpv6Signature;
@property (copy) NSData *lastFailureIpv4Signature;
@property (copy) NSData *lastFailureIpv6Signature;

- (id)init;
- (void).cxx_destruct;

@end
