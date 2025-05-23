@class NSString, NSMutableDictionary, NSObject;
@protocol SKAInvitationManagingDelegate, SKADatabaseManaging, SKAAccountProviding, SKAMessagingProviding, SKAPresenceManaging, OS_dispatch_queue, SKAChannelManaging;

@interface SKAInvitationManager : NSObject <SKAInvitationManaging>

@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAMessagingProviding> messagingProvider;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAPresenceManaging> presenceManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue;
@property (retain, nonatomic) NSMutableDictionary *outgoingInvitationMapping;
@property (nonatomic) BOOL trafficModeEnabled;
@property (nonatomic) BOOL presenceEnabledByServer;
@property (weak, nonatomic) id<SKAInvitationManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_invalidInvitedHandlesError;
+ (id)_invalidSenderHandleError;
+ (id)_keyRollFailedErrorWithUnderlyingError:(id)a0;
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)a0;
+ (id)_noPresenceChannelForIdentifier:(id)a0;
+ (id)_presenceDisabledError;
+ (id)_unableToFindAnyExistingInvitationToDeleteError;
+ (id)_unableToFindExistingInvitationForHandlesError:(id)a0;

- (void).cxx_destruct;
- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forPresenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forStatusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_isHandleInviteable:(id)a0 completion:(id /* block */)a1;
- (void)_acceptInvitationMessage:(id)a0 fromHandle:(id)a1 toHandle:(id)a2 messageGuid:(id)a3 existingChannel:(id)a4 databaseContext:(id)a5;
- (id)_addInvitedHandles:(id)a0 senderHandle:(id)a1 toDatabaseForPersonalChannel:(id)a2 withInvitationPayload:(id)a3 databaseContext:(id)a4;
- (id)_addInvitedHandles:(id)a0 senderHandle:(id)a1 toDatabaseForPresenceChannel:(id)a2 databaseContext:(id)a3;
- (void)_createPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)_findOrCreatePersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (id)_invitationMessageForPresenceChannel:(id)a0;
- (void)_isPresenceHandleInviteable:(id)a0 completion:(id /* block */)a1;
- (id)_ratchetEncryptionKeyForwardOrKeyRollForPersonalChannel:(id)a0 databaseContext:(id)a1 invitationWasSentViaKeyRoll:(BOOL *)a2 error:(id *)a3;
- (BOOL)_rollEncryptionKeyForChannel:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)_sendInvitationMessageForChannel:(id)a0 toInvitedUsers:(id)a1 subscriptionKeys:(id)a2 error:(id *)a3;
- (BOOL)_sendInvitationMessageForPresenceChannel:(id)a0 toInvitedUsers:(id)a1 error:(id *)a2;
- (void)_shouldAcceptInvitationMessageForPresenceIdentifier:(id)a0 fromHandle:(id)a1 fromMergeID:(id)a2 inServiceFirewall:(id)a3 databaseContext:(id)a4 completion:(id /* block */)a5;
- (BOOL)_shouldReauthForError:(id)a0;
- (id)_updateOrCreateInvitedUserWithHandle:(id)a0 senderHandle:(id)a1 onChannel:(id)a2 withInvitationPayload:(id)a3 databaseContext:(id)a4;
- (BOOL)_validateInvitedHandle:(id)a0;
- (id)_validateInvitedHandles:(id)a0;
- (void)handleIncomingInvitationMessage:(id)a0 fromHandle:(id)a1 fromID:(id)a2 fromMergeID:(id)a3 toHandle:(id)a4 messageGuid:(id)a5;
- (id)initWithMessagingProvider:(id)a0 databaseManager:(id)a1 accountProvider:(id)a2 channelManager:(id)a3 presenceManager:(id)a4 trafficMode:(BOOL)a5;
- (void)isHandleInviteable:(id)a0 fromHandle:(id)a1 completion:(id /* block */)a2;
- (void)isPresenceHandleInviteable:(id)a0 fromHandle:(id)a1 completion:(id /* block */)a2;
- (void)outgoingMessageWithIdentifier:(id)a0 fromHandle:(id)a1 toHandle:(id)a2 didSendWithSuccess:(BOOL)a3;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (void)revokeAllInvitationsFromPersonalChannelWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)revokeInvitationFromPersonalChannelWithStatusTypeIdentifier:(id)a0 forHandles:(id)a1 completion:(id /* block */)a2;
- (void)revokeInvitationFromPresenceChannelWithPresenceIdentifier:(id)a0 forHandles:(id)a1 completion:(id /* block */)a2;
- (BOOL)rollEncryptionKeyForPersonalChannelWithStatusTypeIdentifier:(id)a0 error:(id *)a1;
- (void)rollPersonalChannelWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)rollPresenceChannelWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendInvitationForPersonalChannelWithStatusTypeIdentifier:(id)a0 toHandles:(id)a1 fromSenderHandle:(id)a2 withInvitationPayload:(id)a3 completion:(id /* block */)a4;
- (void)sendInvitationForPresenceChannelWithPresenceIdentifier:(id)a0 toHandles:(id)a1 fromSenderHandle:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)sendSelfInvitationForPresenceChannelWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 completion:(id /* block */)a2;

@end
