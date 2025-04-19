@class NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : MTROTASoftwareUpdateProviderClusterApplyUpdateRequestParams

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic, getter=getNewVersion) NSNumber *newVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;


@end
