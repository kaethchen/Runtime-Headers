@interface FaceTimeNotificationCore.ConversationChangeNotifier : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ activeRemoteParticipantsChangedPublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;

@end
