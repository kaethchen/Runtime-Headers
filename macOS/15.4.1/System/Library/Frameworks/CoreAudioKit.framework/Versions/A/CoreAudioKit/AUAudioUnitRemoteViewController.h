@interface AUAudioUnitRemoteViewController : NSRemoteViewController <AUAudioUnitViewControllerHostInterface> {
    BOOL _sizePending;
}

+ (void)_fetchViewControllerForExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
+ (id)_fetchViewControllerForRemoteV2:(id)a0 audioUnitID:(id)a1 audioUnit:(id)a2 serviceName:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_postUnhandledKeyboardEvent:(id)a0 owner:(unsigned int)a1;
+ (void)_fetchViewController:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)postEventToHost:(id)a0 owner:(unsigned int)a1;

- (id)exportedInterface;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillLayout;
- (void)sendUnhandledEvent:(id)a0 owner:(unsigned int)a1 reply:(id /* block */)a2;

@end
