@class AAMessagesInviteContext;

@interface AOSUIInviteLinkMetadataProvider : NSObject {
    AAMessagesInviteContext *_context;
    unsigned long long _inviteType;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)loadMetatadataWithCompletion:(id /* block */)a0;
- (id)_composeBubbleImage;
- (id)_inviteIcon;

@end
