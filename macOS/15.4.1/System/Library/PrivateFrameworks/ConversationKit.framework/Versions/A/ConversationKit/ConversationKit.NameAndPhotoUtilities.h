@interface ConversationKit.NameAndPhotoUtilities : NSObject {
    void /* unknown type, empty encoding */ personalNickname;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ personalDisplayName;
    void /* unknown type, empty encoding */ personalAvatarView;
    void /* unknown type, empty encoding */ imNicknameProvider;
    void /* unknown type, empty encoding */ imNicknameController;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ pendingNicknameFetchKeys;
    void /* unknown type, empty encoding */ queriedCallForSNAPStatus;
    void /* unknown type, empty encoding */ currentCallRemoteParticipantHandleIds;
    void /* unknown type, empty encoding */ idsLookupManager;
}

+ (void)prewarm;

- (id)init;
- (void).cxx_destruct;
- (void)handleIdsStatusChanged;
- (void)handlePersonalNicknameChanged:(id)a0;

@end
