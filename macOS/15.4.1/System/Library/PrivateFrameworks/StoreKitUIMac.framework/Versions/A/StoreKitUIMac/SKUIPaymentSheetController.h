@class _SKUIPaymentSheetViewController, NSWindow;

@interface SKUIPaymentSheetController : NSObject {
    _SKUIPaymentSheetViewController *_viewController;
    NSWindow *_window;
}

+ (void)connectInWindow:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)handlePaymentSheetRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithWindow:(id)a0 paymentSheetViewController:(id)a1;

@end
