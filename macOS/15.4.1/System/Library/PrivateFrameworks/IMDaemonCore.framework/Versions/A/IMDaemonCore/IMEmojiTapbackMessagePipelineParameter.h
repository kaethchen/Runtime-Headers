@class NSString;

@interface IMEmojiTapbackMessagePipelineParameter : IMAssociatedMessagePipelineParameter <IMAssociatedMessageProcessingParameter>

@property (copy, nonatomic) NSString *associatedMessageEmoji;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBDBasic:(id)a0 idsTrustedData:(id)a1;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (id)messageSummaryInfoDictionaryWithBlastDoorBasicMessage:(id)a0;
- (id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)a0;

@end
