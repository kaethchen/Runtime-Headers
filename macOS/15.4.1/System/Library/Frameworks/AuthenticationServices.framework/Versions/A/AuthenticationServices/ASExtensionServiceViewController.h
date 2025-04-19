@class NSExtensionContext, NSWindow;

@interface ASExtensionServiceViewController : NSServiceViewController <ASExtensionServiceProtocol> {
    NSExtensionContext *_extensionContext;
    NSWindow *_window;
}

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)loadView;
- (void)_connectChildView;
- (void)connectToExtensionContextWithRequestIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
