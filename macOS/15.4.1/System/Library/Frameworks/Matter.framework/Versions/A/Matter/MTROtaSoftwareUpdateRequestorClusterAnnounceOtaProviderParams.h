@class NSNumber, NSData;

@interface MTROtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : MTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams

@property (copy, nonatomic) NSNumber *announcementReason;
@property (copy, nonatomic) NSData *metadataForNode;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
