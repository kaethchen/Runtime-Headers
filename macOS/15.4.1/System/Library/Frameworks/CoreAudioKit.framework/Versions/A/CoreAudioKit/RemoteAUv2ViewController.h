@interface RemoteAUv2ViewController : NSRemoteViewController <AUViewControllerHostInterface>

- (id)exportedInterface;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)sendUnhandledEvent:(id)a0 owner:(unsigned int)a1 reply:(id /* block */)a2;

@end
