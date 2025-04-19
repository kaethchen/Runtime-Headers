@protocol IMServiceAvailabilityMonitoring;

@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;
@property (retain, nonatomic) id<IMServiceAvailabilityMonitoring> serviceAvailabilityMonitor;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isiMessageEnabled;
- (id)_allSubscriptions;
- (BOOL)_canSendText;
- (BOOL)_hasSMSCapability;
- (BOOL)_hasSubscriptionPassingTest:(id /* block */)a0;
- (BOOL)_isiMessageSupported;
- (id)_managedConfigAppAllowlist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
- (BOOL)canSendText;
- (BOOL)isMMSEnabled;
- (BOOL)isMessagingEnabled;
- (BOOL)isRBMEnabled;
- (BOOL)isRBMSupported;
- (BOOL)isRCSEnabled;
- (BOOL)isRichMessagingEnabled;
- (BOOL)isSupportedAttachmentUTI:(id)a0;

@end
