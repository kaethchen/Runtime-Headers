@protocol IMDaemonListenerRemoteIntentProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerCloudSyncProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerAVProtocol, IMDaemonListenerFileTransfersProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerAccountsProtocol, IMDaemonListenerKeyTransparencyProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerSyncedSettingsProtocol, IMDaemonListenerCollaborationProtocol, IMDaemonListenerChatDatabaseProtocol;

@interface IMDClientConnectionManager : NSObject <IMDBroadcasterProviding> {
    void /* unknown type, empty encoding */ connectionListeners;
}

@property (nonatomic, readonly) id<IMDaemonListenerAnyProtocol> broadcasterForAllListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAccountsProtocol> broadcasterForAccountListeners;
@property (nonatomic, readonly) id<IMDaemonListenerCloudSyncProtocol> broadcasterForCloudSyncListeners;
@property (nonatomic, readonly) id<IMDaemonListenerFileTransfersProtocol> broadcasterForFileTransferListeners;
@property (nonatomic, readonly) id<IMDaemonListenerKeyTransparencyProtocol> broadcasterForKeyTransparencyListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatProtocol> broadcasterForChatListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatProtocol> broadcasterForBlackholeChatListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatDatabaseProtocol> broadcasterForChatDatabaseListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatCountsProtocol> broadcasterForChatCountsListeners;
@property (nonatomic, readonly) id<IMDaemonListenerFileProviderProtocol> broadcasterForFileProviderListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAVProtocol> broadcasterForAVConferenceListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAVProtocol> broadcasterForACConferenceListeners;
@property (nonatomic, readonly) id<IMDaemonListenerSyncedSettingsProtocol> broadcasterForSyncedSettingsListeners;
@property (nonatomic, readonly) id<IMDaemonListenerCollaborationProtocol> broadcasterForCollaborationListeners;
@property (nonatomic, readonly) id<IMDaemonListenerRemoteIntentProtocol> broadcasterForRemoteIntentListeners;

- (id)init;
- (void).cxx_destruct;
- (id)broadcasterForACConferenceListenersSupportingService:(id)a0;
- (id)broadcasterForAVConferenceListenersSupportingService:(id)a0;
- (id)broadcasterForBlackholeChatListenersSupportingService:(id)a0;
- (id)broadcasterForChatListenersSupportingService:(id)a0;
- (id)broadcasterForChatListenersUsingBlackholeRegistry:(BOOL)a0;
- (id)broadcasterForCollaborationListenersSupportingService:(id)a0;
- (id)broadcasterForListenersSupportingService:(id)a0;
- (id)broadcasterForNotificationListenersSupportingService:(id)a0;
- (id)broadcasterForSentMessageListenersSupportingService:(id)a0;
- (id)broadcasterForVCConferenceListenersSupportingService:(id)a0;

@end
