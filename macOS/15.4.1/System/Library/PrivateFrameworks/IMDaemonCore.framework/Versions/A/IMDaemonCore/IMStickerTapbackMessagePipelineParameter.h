@interface IMStickerTapbackMessagePipelineParameter : IMAssociatedMessagePipelineParameter <IMStickerTapbackMessageProcessingParameter>

- (id)description;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)a0;
- (BOOL)supportsStickerAttributesInMessageBody;

@end
