@class NSString, NSDictionary;

@interface IMSafetyMonitorCoordinator_Impl : NSObject {
    void /* unknown type, empty encoding */ currentBestEstimates;
}

@property (class, nonatomic, readonly) IMSafetyMonitorCoordinator_Impl *sharedCoordinator;

@property (nonatomic, readonly) NSString *appPayloadID;
@property (nonatomic, readonly) NSDictionary *appPayload;
@property (nonatomic, readonly) BOOL shouldDisallowBasedOnRegulatoryDomain;

- (id)init;
- (void).cxx_destruct;
- (void)informOfScheduledMessageSendWithMessage:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)checkPreferredHandlesCacheForInitiatorHandleID:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;
- (void)checkPreferredHandlesCacheForReceiverWith:(id)a0 completion:(id /* block */)a1;
- (void)informOfCancelledScheduledMessageSendWithMessageGUID:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)informOfChangedGroupDisplayNameWithGroupID:(id)a0;
- (void)informOfChangedGroupMembershipWithGroupID:(id)a0;
- (void)informOfChangedGroupPhotoWithGroupID:(id)a0;
- (void)informOfDeletedConversationWithReceiverHandles:(id)a0;
- (void)informOfDeletedMessagesWithMessages:(id)a0;
- (void)informOfIncomingMessageWithMessage:(id)a0;
- (void)informOfKickFromGroupWithGroupID:(id)a0;
- (void)informOfOutgoingMessageWithMessage:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)informOfTriggeredScheduledMessageSendWithMessage:(id)a0;
- (long long)notificationContentForInitiator:(id)a0 messageURL:(id)a1 content:(id)a2;
- (void)respondToNotificationWithIdentifier:(id)a0 sessionIdentifier:(id)a1 actionIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldDropIncomingCheckInMessageWithURL:(id)a0 senderHandle:(id)a1 isFromMe:(BOOL)a2;
- (void)shouldShowKeyboardSuggestionForInitiator:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;
- (void)shouldShowTipKitSuggestionForInitiator:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;

@end
