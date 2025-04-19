@interface IMDownloadingPendingMessagesChatItem : IMTranscriptChatItem

@property (nonatomic, setter=_setPendingIncomingSatelliteMessageCount:) unsigned long long pendingIncomingSatelliteMessageCount;
@property (nonatomic, setter=_setTotalSatelliteMessageCount:) unsigned long long totalSatelliteMessageCount;

- (id)_initWithItem:(id)a0;

@end
