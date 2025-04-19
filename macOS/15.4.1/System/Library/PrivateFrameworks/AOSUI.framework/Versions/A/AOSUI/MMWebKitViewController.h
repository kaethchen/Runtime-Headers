@class NSTextField, MMWebKitController, NSString, NSProgressIndicator, NSView, NSMutableDictionary, NSWindow, NSImageView, NSNumber;
@protocol MMWebKitViewControllerDelegate;

@interface MMWebKitViewController : NSObject <MMWebKitControllerDelegate> {
    struct { unsigned char delegateDidCancel : 1; unsigned char delegateDidSucceed : 1; unsigned char delegateDidFailLoading : 1; unsigned char delegateDidFinishLoading : 1; unsigned char delegateDidDismiss : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char padding : 3; } _delegateFlags;
}

@property (retain, nonatomic) MMWebKitController *webKitController;
@property (nonatomic) SEL classCreationSelector;
@property (nonatomic) unsigned long long mmWebKitViewType;
@property (retain, nonatomic) NSMutableDictionary *webKitContext;
@property (nonatomic) NSWindow *parentWindow;
@property (nonatomic) id<MMWebKitViewControllerDelegate> delegate;
@property (weak, nonatomic) NSWindow *window;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSMutableDictionary *authenticationResults;
@property (copy, nonatomic) NSMutableDictionary *storageContext;
@property (retain, nonatomic) NSNumber *librarySize;
@property (weak, nonatomic) NSTextField *loadingText;
@property (weak, nonatomic) NSProgressIndicator *loadingProgress;
@property (weak, nonatomic) NSView *loadingView;
@property (weak, nonatomic) NSImageView *serverErrorImageView;
@property (weak, nonatomic) NSTextField *serverErrorTitle;
@property (retain, nonatomic) NSView *serverErrorView;
@property (weak, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)closeModalSheet;
- (void)loadURLRequest:(id)a0;
- (id)initInView:(id)a0;
- (void)okButton:(id)a0;
- (struct OpaqueJSClass { } *)_createAccountCreationClass;
- (struct OpaqueJSClass { } *)_createQuotaClass;
- (struct OpaqueJSClass { } *)_createTOSMailNotesClass;
- (void)_hideLoadingView:(BOOL)a0;
- (void)_window:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beginModalDialogWithParentWindow:(id)a0 shouldNest:(BOOL)a1;
- (void)beginModalSheetForWindow:(id)a0;
- (void)handleLoadFailureWithError:(id)a0;
- (id)initForAccountCreation;
- (id)initForInternetPrivacyWithAccountID:(id)a0;
- (id)initForMailAccountCreationWithAccountID:(id)a0;
- (id)initForMatterhornUpsell:(id)a0;
- (id)initForNotesAccountCreationWithAccountID:(id)a0;
- (id)initForStorageManagementWithAccountID:(id)a0;
- (id)initForStorageUpgradeWithAccountID:(id)a0;
- (id)initForSubscriptionFeaturesWithAccountID:(id)a0;
- (id)initForTermsOfServiceWithAccountID:(id)a0 password:(id)a1 authenticationResults:(id)a2;
- (BOOL)isShowingSheet;
- (void)mmWebKitControllerConfigureForFrame:(id)a0;
- (void)mmWebKitControllerDidCancel:(id)a0;
- (void)mmWebKitControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitControllerDidFinishLoading:(id)a0;
- (void)mmWebKitControllerDidReceiveResponse:(id)a0 didReceiveResponse:(id)a1;
- (void)mmWebKitControllerDidSucceed:(id)a0;
- (id)mmWebKitControllerWindow;
- (void)mmWebView:(id)a0 setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)transitionToLoadingViewAnimated:(BOOL)a0;
- (void)transitionToServerErrorViewWithTitle:(id)a0 image:(id)a1 animated:(BOOL)a2;
- (void)transitionToWebViewAnimated:(BOOL)a0;

@end
