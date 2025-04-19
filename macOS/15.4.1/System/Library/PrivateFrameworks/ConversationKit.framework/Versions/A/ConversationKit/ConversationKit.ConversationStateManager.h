@interface ConversationKit.ConversationStateManager : NSObject {
    void /* unknown type, empty encoding */ presentationStateProvider;
    void /* unknown type, empty encoding */ localParticipantStateProvider;
    void /* unknown type, empty encoding */ remoteParticipantsStateProvider;
    void /* unknown type, empty encoding */ captioningStateManager;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ conduit;
    void /* unknown type, empty encoding */ localVideoController;
    void /* unknown type, empty encoding */ mostActiveParticipantsController;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ callDurationStringTimer;
}

- (id)init;
- (void).cxx_destruct;

@end
