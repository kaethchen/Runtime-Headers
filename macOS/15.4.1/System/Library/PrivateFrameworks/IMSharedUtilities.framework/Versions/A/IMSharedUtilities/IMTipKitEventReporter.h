@interface IMTipKitEventReporter : NSObject

+ (id)sharedInstance;

- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendBiomeSignal:(id)a0;
- (void)sendCoreAnalyticsSilverEvent:(id)a0;
- (void)sendFilterUnknownSenderStateChangedEvent;
- (void)sendINSendMessageIntentEvent;
- (void)sendJunkInboxOpenedEvent;
- (void)sendReceivedJunkEventIfNeeded;
- (void)sendReceivedPhotoEvent;
- (void)sendSavePhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendTapbackSendEvent;

@end
