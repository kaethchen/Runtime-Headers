@interface GKMultiplayerDaemonProxyHelper : NSObject <GKMultiplayerDaemonProxy>

- (id)utilityService;
- (id)multiplayerService;
- (oneway void)completeGameRecording;
- (oneway void)completeMatchRecording:(id)a0 matchType:(id)a1;
- (oneway void)emitMultiplayerMessage:(id)a0;
- (oneway void)fileMultiplayerTTRWithCallBackIdentifier:(id)a0 descriptionAddition:(id)a1 handler:(id /* block */)a2;
- (oneway void)getMultiPlayerGroups:(id /* block */)a0;
- (oneway void)initiateRelayRequest:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)putMultiPlayerGroup:(id)a0 participants:(id)a1 playedAt:(long long)a2 bundleID:(id)a3 numberOfAutomatched:(long long)a4 isSharedLink:(BOOL)a5 completionHandler:(id /* block */)a6;
- (oneway void)removeInviteSession;
- (oneway void)revokePseudonym:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)sendInvitationUpdate:(id)a0 handler:(id /* block */)a1;
- (oneway void)sendReconnectInvitation:(id)a0 toPlayer:(id)a1 connectionData:(id)a2 sessionToken:(id)a3 pushToken:(id)a4 handler:(id /* block */)a5;
- (oneway void)updateRelayRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
