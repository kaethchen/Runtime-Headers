@interface IMFaceTimeUtilities : NSObject

+ (BOOL)activeTUConversationHasActivitySession:(id)a0;
+ (id)activityMetadataForTUConversation:(id)a0;
+ (id)activitySessionForTUConversation:(id)a0;
+ (BOOL)conversationIsAVLessSharePlay:(id)a0;
+ (BOOL)conversationIsVideoCall:(id)a0;
+ (id)currentCallForTUConversation:(id)a0;
+ (void)initiateTUConversationForParticipants:(id)a0 senderAddress:(id)a1 videoEnabled:(BOOL)a2 groupID:(id)a3 displayName:(id)a4 screenShareType:(unsigned long long)a5;
+ (void)initiateTUDialRequestForSingleParticipant:(id)a0 videoEnabled:(BOOL)a1;
+ (BOOL)isScreenShareActivityForTUConversation:(id)a0;
+ (void)joinExistingConversationForTUCoversation:(id)a0 videoEnabled:(BOOL)a1 wantsStagingArea:(BOOL)a2;
+ (void)leaveTUCall:(id)a0;
+ (void)leaveTUConversation;
+ (BOOL)platformSupportsStagingArea;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)a0;

@end
