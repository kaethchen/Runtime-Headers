@class MMWebKitController, NSView, MMJSDialogController, NSString, NSDictionary, WebView;
@protocol MBWebKitViewControllerDelegate, MBUIDelegate;

@interface MMMBWebKitViewController : NSObject <MMWebKitControllerDelegate> {
    struct { unsigned char delegateSetWindowTitle : 1; unsigned char delegateSetWindowMessage : 1; unsigned char delegateSetLeftButtonTitle : 1; unsigned char delegateSetLeftButtonEnabled : 1; unsigned char delegateSetRightButtonTitle : 1; unsigned char delegateSetRightButtonEnabled : 1; unsigned char delegateSetAlternateButtonTitle : 1; unsigned char delegateSetAlternateButtonEnabled : 1; unsigned char delegateSaveFile : 1; unsigned char delegateSaveFileWithName : 1; unsigned char delegateShowTerms : 1; unsigned char delegateDidCancel : 1; unsigned char delegateDidDismiss : 1; unsigned char delegateDidSucceed : 1; unsigned char delegateDidFinishLoading : 1; unsigned char delegateDidFail : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char padding : 2; } _flags;
}

@property (retain, nonatomic) NSView *parentView;
@property (nonatomic) struct OpaqueJSValue { } *leftButtonCallback;
@property (nonatomic) struct OpaqueJSValue { } *rightButtonCallback;
@property (nonatomic) struct OpaqueJSValue { } *alternateButtonCallback;
@property (retain, nonatomic) MMWebKitController *webKitController;
@property (retain, nonatomic) MMJSDialogController *mmJSDialogController;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSDictionary *delegatePlist;
@property (nonatomic) id<MBUIDelegate> mbUIDelegate;
@property (nonatomic) id<MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate;
@property (readonly, nonatomic) WebView *webView;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL supportsWindowResize;
@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadURLRequest:(id)a0;
- (void)alternateNavigationButtonClicked:(id)a0;
- (void)leftNavigationButtonClicked:(id)a0;
- (void)rightNavigationButtonClicked:(id)a0;
- (void)_window:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initMBWebKitViewControllerInView:(id)a0 mbUIDelegate:(id)a1;
- (id)initMBWebKitViewControllerInView:(id)a0 mbUIDelegate:(id)a1 authenticationResults:(id)a2;
- (void)mmWebKitControllerConfigureForFrame:(id)a0;
- (void)mmWebKitControllerDidCancel:(id)a0;
- (void)mmWebKitControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitControllerDidFinishLoading:(id)a0;
- (void)mmWebKitControllerDidReceiveResponse:(id)a0 didReceiveResponse:(id)a1;
- (void)mmWebKitControllerDidSucceed:(id)a0;
- (void)mmWebKitControllerWillSendRequest:(id)a0 willSendRequest:(id)a1;
- (id)mmWebKitControllerWindow;
- (void)mmWebView:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
