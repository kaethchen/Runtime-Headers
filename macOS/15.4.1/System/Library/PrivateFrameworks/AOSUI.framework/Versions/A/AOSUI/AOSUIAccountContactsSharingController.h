@class NSSharingService, NSString, AAMessagesInviteContext, NSWindow;

@interface AOSUIAccountContactsSharingController : NSObject <NSSharingServiceDelegate>

@property (retain, nonatomic) NSSharingService *messageSharingService;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (copy, nonatomic) id /* block */ sharingCompletion;
@property (retain, nonatomic) AAMessagesInviteContext *inviteContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 imageForShareItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)_recipientHandlesForService:(id)a0;
- (void)startSharingWithInviteContext:(id)a0 hostWindow:(id)a1 completion:(id /* block */)a2;

@end
