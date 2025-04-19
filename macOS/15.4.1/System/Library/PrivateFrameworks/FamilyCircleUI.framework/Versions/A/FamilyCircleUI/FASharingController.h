@class NSSharingService, NSString, FAInviteLinkMetadata, FAInviteContext, FASharingViewController, NSWindow;

@interface FASharingController : NSObject <FASharingViewTransportDelegate, NSSharingServiceDelegate> {
    NSSharingService *_selectedService;
    id /* block */ _sharingCompletion;
    NSWindow *_parentWindow;
    FAInviteContext *_inviteContext;
    FAInviteLinkMetadata *_linkMetadata;
    FASharingViewController *_viewController;
    NSWindow *_sharingWindow;
    NSSharingService *_inviteInPerson;
    NSSharingService *_composeEmail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 imageForShareItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)_beginSetupScreen;
- (void)_invokeCancelWithError:(id)a0;
- (void)_loadMetadatIfNeeded:(id /* block */)a0;
- (id)_recipientHandlesForService:(id)a0;
- (void)_setupInviteInPersonSharing;
- (unsigned long long)_transportTypeForSharingService:(id)a0;
- (id)_webArchiveURLForLinkMetadata:(id)a0;
- (void)sharingViewController:(id)a0 didSelectService:(id)a1;
- (void)startSharingWithItems:(id)a0 hostWindow:(id)a1 completion:(id /* block */)a2;

@end
