@class NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams : MTROTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
