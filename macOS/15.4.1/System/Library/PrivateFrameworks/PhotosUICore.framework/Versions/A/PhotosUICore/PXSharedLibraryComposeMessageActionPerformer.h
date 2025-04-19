@class NSSharingService, NSString, NSArray, NSURL, NSWindow;

@interface PXSharedLibraryComposeMessageActionPerformer : PXActionPerformer <NSSharingServiceDelegate> {
    NSURL *_invitationURL;
    NSString *_displayName;
    NSArray *_recipients;
    NSSharingService *_sharingService;
}

@property (weak, nonatomic) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)performUserInteractionTask;
- (void)_sharingServiceDidFinishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performActionWithInvitationURL:(id)a0 originatorDisplayName:(id)a1 recipients:(id)a2 completionHandler:(id /* block */)a3;

@end
