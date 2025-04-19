@interface FMFCore.FMFGenericResponseHandler : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ fenceUpdateStream;
    void /* unknown type, empty encoding */ fmlSession;
    void /* unknown type, empty encoding */ fmlFences;
    void /* unknown type, empty encoding */ isSnapshotMode;
    void /* unknown type, empty encoding */ locationShifter;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ locationAlertsOnMeByMe;
    void /* unknown type, empty encoding */ locationAlertsOnMeByFriends;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByMe;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByFriends;
    void /* unknown type, empty encoding */ dataManager;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
