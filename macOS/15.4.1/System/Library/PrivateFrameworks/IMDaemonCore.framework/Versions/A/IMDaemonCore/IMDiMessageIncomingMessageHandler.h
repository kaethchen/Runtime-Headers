@interface IMDiMessageIncomingMessageHandler : NSObject

- (void)handleNotifyRecipientCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageDeliveryReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)_enqueueBlock:(id /* block */)a0 withTimeout:(double)a1 description:(id)a2;
- (void)handleChatSessionCloseWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleCrossServiceAssociationCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleEditMessageCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageDeliveredQuietlyReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageMarkUnreadRequestWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessagePlayedReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageReadReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleRecoverJunkCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleRepositionStickerCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleScheduledMessageUpdateCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleSyndicatedActionWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;

@end
