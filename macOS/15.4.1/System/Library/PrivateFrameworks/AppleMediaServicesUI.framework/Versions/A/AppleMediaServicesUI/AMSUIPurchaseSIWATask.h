@class NSWindow;
@protocol AMSUIPurchaseDelegate;

@interface AMSUIPurchaseSIWATask : AMSPurchaseSIWATask

@property (weak) id<AMSUIPurchaseDelegate> delegate;
@property (readonly) NSWindow *presentingWindow;

- (void).cxx_destruct;
- (id)newAuthorizationController;
- (Class)paymentSheetTaskClass;
- (id)initWithPurchaseSIWA:(id)a0 presentingWindow:(id)a1 bag:(id)a2;

@end
