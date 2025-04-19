@interface IMDScheduledMessageCoordinator : NSObject <IMUnlockMonitorListener, IMDServiceSessionDelegate> {
    void /* unknown type, empty encoding */ serviceSession;
    void /* unknown type, empty encoding */ messageStore;
    void /* unknown type, empty encoding */ chatRegistry;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ membershipObserver;
    void /* unknown type, empty encoding */ blocklistObserver;
    void /* unknown type, empty encoding */ isFirstFire;
    void /* unknown type, empty encoding */ timer;
}

+ (void)notifyPeersWithScheduledMessageUpdate:(id)a0 scheduleState:(unsigned long long)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)timerDidFire;
- (void)didSendMessage:(id)a0 forChat:(id)a1 style:(unsigned char)a2 account:(id)a3 forceDate:(id)a4 itemIsComingFromStorage:(BOOL)a5;
- (void)didUpdateChatStatus:(int)a0 chat:(id)a1 style:(unsigned char)a2 displayName:(id)a3 groupID:(id)a4 lastAddressedHandle:(id)a5 lastAddressedSIMID:(id)a6 handleInfo:(id)a7 account:(id)a8 category:(long long)a9 spamExtensionName:(id)a10 isBlackholed:(BOOL)a11;
- (void)handleMessageDidReplace:(id)a0 newMessage:(id)a1;
- (void)informOfCancelledMessageWithMessageGUID:(id)a0 success:(BOOL)a1 cancelType:(unsigned long long)a2 error:(id)a3;
- (id)initWithServiceSession:(id)a0;
- (id)processMessageForSending:(id)a0 toChat:(id)a1 style:(unsigned char)a2 allowWatchdog:(BOOL)a3 account:(id)a4;
- (void)removeFailedEditsFrom:(id)a0;
- (void)serviceSession:(id)a0 willMoveChatToRecentlyDeleted:(id)a1;
- (void)serviceSession:(id)a0 willRemoveChat:(id)a1;
- (void)updateTimerForTimeInterval:(double)a0;

@end
