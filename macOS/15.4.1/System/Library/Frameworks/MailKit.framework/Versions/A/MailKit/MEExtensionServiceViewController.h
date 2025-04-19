@class MERemoteExtensionContext, NSWindow, NSViewController;

@interface MEExtensionServiceViewController : NSServiceViewController <MEExtensioniRemoteViewProtocol> {
    NSWindow *_window;
}

@property (weak, nonatomic) MERemoteExtensionContext *extensionContext;
@property (retain) NSViewController *rootViewController;

+ (id)log;

- (void).cxx_destruct;
- (void)invalidate;
- (id)exportedInterface;
- (void)loadView;
- (void)_connectChildViewController:(id)a0;
- (void)_connectChildViewForComposeSession:(id)a0;
- (void)_connectChildViewForMessageContext:(id)a0;
- (void)_connectChildViewForMessageSigner:(id)a0;
- (void)_connectToChildViewForPrimaryMessageBannerActionContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectToExtensionContextID:(id)a0 composeSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectToExtensionContextID:(id)a0 messageContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectToExtensionContextID:(id)a0 messageSigners:(id)a1 completionHandler:(id /* block */)a2;
- (void)connectToExtensionContextID:(id)a0 primaryMessageBannerActionContext:(id)a1 completionHandler:(id /* block */)a2;

@end
