@interface IMDaemonCore.ScheduledMessageMembershipObserver : NSObject {
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ chatRegistry;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleChatParticipantsDidChange:(id)a0;

@end
