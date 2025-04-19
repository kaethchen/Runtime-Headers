@class NSSharingExtensionContext, NSString, CKShare, CKContainer;

@interface SOShare : NSObject

@property (copy, setter=setCKShare:) CKShare *ckShare;
@property (copy) CKContainer *ckContainer;
@property (copy) NSSharingExtensionContext *sharingExtensionContext;
@property (copy) NSString *sourceApplicationIdentifier;
@property BOOL canEditFlag;
@property BOOL canInviteParticipantsFlag;

- (void).cxx_destruct;
- (void)_setRecipientArrays:(id)a0 emails:(id)a1 forRecipients:(id)a2;
- (void)_setUpSourceApplicationIdentifier;
- (id)initWithCKShare:(id)a0 containerId:(id)a1 canEditFlag:(BOOL)a2 canInviteParticipants:(BOOL)a3 sharingExtensionContext:(id)a4 sourceApplicationIdentifier:(id)a5;
- (void)passRecipientsToCloudKit:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRecipientsFromCKShare;
- (void)updateCKShareViaSharingExtensionContext;

@end
