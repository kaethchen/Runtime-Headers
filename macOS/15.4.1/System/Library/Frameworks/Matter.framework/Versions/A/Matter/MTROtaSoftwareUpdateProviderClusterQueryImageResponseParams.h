@class NSNumber, NSString, NSData;

@interface MTROtaSoftwareUpdateProviderClusterQueryImageResponseParams : MTROTASoftwareUpdateProviderClusterQueryImageResponseParams

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *delayedActionTime;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSString *softwareVersionString;
@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *userConsentNeeded;
@property (copy, nonatomic) NSData *metadataForRequestor;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

@end
