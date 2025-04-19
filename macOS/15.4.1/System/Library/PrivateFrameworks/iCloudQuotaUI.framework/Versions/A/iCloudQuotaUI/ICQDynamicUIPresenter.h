@class NSString, NSWindow, AMSUIDynamicViewController;
@protocol ICQDynamicUIPresenterDelegate;

@interface ICQDynamicUIPresenter : NSObject

@property (retain, nonatomic) AMSUIDynamicViewController *dynamicUIViewController;
@property (weak, nonatomic) NSWindow *modalWindow;
@property (weak, nonatomic) NSWindow *parentWindow;
@property (nonatomic) BOOL remotePresentation;
@property (weak, nonatomic) id<ICQDynamicUIPresenterDelegate> delegate;
@property (copy, nonatomic) NSString *attributionSuffix;
@property (copy, nonatomic) NSString *appversion;
@property (copy, nonatomic) NSString *bundleID;

- (id)init;
- (void).cxx_destruct;
- (id)account;
- (id)presentingViewController;
- (void)fetchHeadersForDynamicUIWithCompletion:(id /* block */)a0;
- (void)presentDynamicUIPageUsingRoute:(id)a0 pageContentURL:(id)a1;
- (void)presentFlowUsingdynamicUIRoute:(id)a0 options:(id)a1 isRemoteFlow:(BOOL)a2;
- (id)processAndSanitizeQueryParamsInURL:(id)a0;

@end
