@class NSWindow;

@interface STMacOSAlertPresenter : NSObject <STAlertPresenter>

@property (readonly) NSWindow *window;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;

@end
