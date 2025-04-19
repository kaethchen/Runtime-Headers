@class IMHandle, NSHashTable;

@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem

@property (retain, nonatomic) NSHashTable *unavailabilityIndicatorChatItemDelegates;
@property (readonly, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL displayNotifyAnywayButton;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)a0 displayNotifyAnywayButton:(BOOL)a1;
- (void)_notifyDelegatesOfStateChange;
- (void)addUnavailabilityIndicatorChatItemDelegate:(id)a0;

@end
